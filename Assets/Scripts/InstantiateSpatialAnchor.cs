using System;
using System.Collections.Generic;
using System.IO;
using Photon.Pun;
using UnityEngine;

/// <summary>
/// Mengelola spawn, simpan, dan hapus Spatial Anchor (AR Diamond 2).
///
/// MULTIPLAYER:
///   - Saat terhubung ke Photon room, spawn dilakukan via PhotonNetwork.Instantiate()
///     agar anchor muncul di semua HoloLens secara sinkron.
///   - AnchorPhotonBridge (di prefab) akan otomatis menjadikan objek sebagai
///     child XRSpace/Content setelah di-instantiate, sehingga posisinya akurat
///     dalam koordinat Immersal yang sama di semua device.
///
/// OFFLINE FALLBACK:
///   - Jika tidak terhubung ke Photon, spawn lokal + save ke JSON.
///   - LoadContents() hanya dijalankan saat offline (Photon sudah auto-sync ke room).
/// </summary>
public class InstantiateSpatialAnchor : MonoBehaviour
{
    [Header("Anchor Settings")]
    [Tooltip("Prefab anchor untuk fallback offline. Saat multiplayer, 'AR Diamond 2' di-load dari Resources/")]
    [SerializeField] private GameObject anchorPrefab;

    [Tooltip("Transform kamera utama (Main Camera / HoloLens camera)")]
    [SerializeField] private Transform cameraTransform;

    [Tooltip("Transform XRSpace/Content — parent semua anchor dalam koordinat Immersal")]
    [SerializeField] private Transform xRSpaceContent;

    // Nama prefab di Assets/Resources/ — harus sama persis dengan nama file
    private const string NETWORK_PREFAB_NAME = "AR Diamond 2";

    private List<Vector3> anchorPosition = new List<Vector3>();
    private List<Quaternion> anchorRotation = new List<Quaternion>();
    private List<GameObject> spawnedAnchors = new List<GameObject>();

    private SaveAnchorTransform saveFile;
    private string m_Filename = "content.json";

    private void Start()
    {
        // Hanya load dari JSON saat offline.
        // Saat multiplayer, Photon otomatis sync anchor yang sudah ada di room
        // ke player yang baru join — tidak perlu load JSON.
        if (!PhotonNetwork.IsConnected)
        {
            Debug.Log("[InstantiateSpatialAnchor] Mode offline — memuat anchor dari JSON.");
            LoadContents();
        }
        else
        {
            Debug.Log("[InstantiateSpatialAnchor] Mode multiplayer — melewati load JSON (Photon menangani sync).");
        }
    }

    /// <summary>
    /// Spawn anchor baru di depan kamera.
    /// - Multiplayer: via PhotonNetwork.Instantiate → sinkron ke semua client.
    /// - Offline: local Instantiate + save ke JSON.
    /// Hubungkan ke tombol Spawn di Inspector.
    /// </summary>
    public void InstanciateAnchor()
    {
        if (cameraTransform == null)
        {
            Debug.LogError("[InstantiateSpatialAnchor] cameraTransform belum di-assign di Inspector!");
            return;
        }

        Vector3 worldPos = cameraTransform.position + cameraTransform.forward;

        if (PhotonNetwork.IsConnected && PhotonNetwork.InRoom)
        {
            // ── MULTIPLAYER PATH ─────────────────────────────────────────────
            // Spawn via Photon → di-broadcast ke semua client di room.
            // AnchorPhotonBridge.OnPhotonInstantiate() akan dipanggil otomatis
            // di setiap client untuk menjadikan objek child XRSpace/Content.
            Debug.Log($"[InstantiateSpatialAnchor] Spawning '{NETWORK_PREFAB_NAME}' via PhotonNetwork di posisi {worldPos}");

            GameObject anchor = PhotonNetwork.Instantiate(
                NETWORK_PREFAB_NAME,
                worldPos,
                Quaternion.identity
            );

            if (anchor != null)
            {
                spawnedAnchors.Add(anchor);
                Debug.Log("[InstantiateSpatialAnchor] Anchor berhasil di-spawn via Photon.");
            }
        }
        else
        {
            // ── OFFLINE FALLBACK ─────────────────────────────────────────────
            Debug.LogWarning("[InstantiateSpatialAnchor] Tidak terhubung ke Photon room. Menggunakan spawn lokal.");

            if (anchorPrefab == null)
            {
                Debug.LogError("[InstantiateSpatialAnchor] anchorPrefab belum di-assign! Assign di Inspector untuk mode offline.");
                return;
            }

            if (xRSpaceContent == null)
            {
                Debug.LogError("[InstantiateSpatialAnchor] xRSpaceContent belum di-assign!");
                return;
            }

            GameObject anchor = Instantiate(anchorPrefab, worldPos, Quaternion.identity, xRSpaceContent);
            spawnedAnchors.Add(anchor);
            anchorPosition.Add(anchor.transform.localPosition);
            anchorRotation.Add(anchor.transform.rotation);
            SaveContents();
        }
    }

    /// <summary>
    /// Spawn anchor dari data yang disimpan (JSON load, hanya untuk mode offline).
    /// </summary>
    public void InstanciateAnchor(Vector3 pos, Quaternion rot)
    {
        if (anchorPrefab == null || xRSpaceContent == null) return;

        GameObject anchor = Instantiate(anchorPrefab, pos, rot, xRSpaceContent);
        spawnedAnchors.Add(anchor);
        anchorPosition.Add(anchor.transform.localPosition);
        anchorRotation.Add(anchor.transform.rotation);
    }

    /// <summary>
    /// Hapus semua anchor dari scene dan reset data tersimpan.
    /// - Multiplayer: hanya destroy anchor yang dimiliki (IsMine) oleh client ini.
    /// - Offline: destroy semua + reset JSON.
    /// Hubungkan ke tombol di Inspector.
    /// </summary>
    public void ClearAllAnchors()
    {
        List<GameObject> toDestroy = new List<GameObject>(spawnedAnchors);
        spawnedAnchors.Clear();
        anchorPosition.Clear();
        anchorRotation.Clear();

        foreach (GameObject anchor in toDestroy)
        {
            if (anchor == null) continue;

            if (PhotonNetwork.IsConnected && PhotonNetwork.InRoom)
            {
                PhotonView pv = anchor.GetComponent<PhotonView>();
                if (pv != null)
                {
                    if (pv.IsMine)
                    {
                        // Hanya owner yang bisa destroy via Photon
                        PhotonNetwork.Destroy(anchor);
                    }
                    else
                    {
                        Debug.LogWarning($"[InstantiateSpatialAnchor] Tidak bisa hapus anchor '{anchor.name}' — bukan milik client ini (owner: {pv.OwnerActorNr}).");
                    }
                }
                else
                {
                    // Anchor tanpa PhotonView (spawned lokal di mode campuran)
                    Destroy(anchor);
                }
            }
            else
            {
                Destroy(anchor);
            }
        }

        // Reset file JSON hanya saat offline
        if (!PhotonNetwork.IsConnected)
        {
            string dataPath = Path.Combine(Application.persistentDataPath, m_Filename);
            File.WriteAllText(dataPath, "");
        }

        Debug.Log("[InstantiateSpatialAnchor] Semua anchor telah dihapus dan data direset.");
    }

    public void SaveContents()
    {
        saveFile.positions = anchorPosition;
        saveFile.rotations = anchorRotation;

        string jsonstring = JsonUtility.ToJson(saveFile, true);
        string dataPath = Path.Combine(Application.persistentDataPath, m_Filename);
        File.WriteAllText(dataPath, jsonstring);
    }

    public void LoadContents()
    {
        anchorPosition.Clear();
        anchorRotation.Clear();
        string dataPath = Path.Combine(Application.persistentDataPath, m_Filename);
        Debug.LogFormat("Trying to load file: {0}", dataPath);

        try
        {
            SaveAnchorTransform loadFile = JsonUtility.FromJson<SaveAnchorTransform>(File.ReadAllText(dataPath));

            if (loadFile.positions == null || loadFile.rotations == null)
            {
                Debug.LogWarning("Save file has null positions or rotations. Skipping load.");
                return;
            }

            int count = Math.Min(loadFile.positions.Count, loadFile.rotations.Count);
            for (int i = 0; i < count; i++)
            {
                InstanciateAnchor(loadFile.positions[i], loadFile.rotations[i]);
            }

            Debug.Log("Successfully loaded file!");
        }
        catch (FileNotFoundException e)
        {
            Debug.LogWarningFormat("{0}\n.json file for content storage not found. Created a new file!", e.Message);
            File.WriteAllText(dataPath, "");
        }
        catch (NullReferenceException err)
        {
            Debug.LogWarningFormat("{0}\n.json file for content storage not found. Created a new file!", err.Message);
            File.WriteAllText(dataPath, "");
        }
        catch (ArgumentOutOfRangeException ex)
        {
            Debug.LogWarningFormat("{0}\nSave file data mismatch. Resetting save file!", ex.Message);
            File.WriteAllText(dataPath, "");
        }
    }
}

[System.Serializable]
public struct SaveAnchorTransform
{
    public List<Vector3> positions;
    public List<Quaternion> rotations;
}