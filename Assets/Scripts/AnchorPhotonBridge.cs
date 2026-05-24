using Photon.Pun;
using UnityEngine;

/// <summary>
/// Komponen ini di-attach pada prefab "AR Diamond 2".
///
/// CARA KERJA:
///   Saat PhotonNetwork.Instantiate("AR Diamond 2", ...) dipanggil oleh siapapun di room,
///   Photon secara otomatis memanggil OnPhotonInstantiate() di SEMUA client (termasuk yang spawn).
///
///   Di sini kita menjadikan anchor sebagai child dari XRSpace/Content — koordinat Immersal.
///   Karena Immersal sudah localize ke Map ID yang sama di kedua HoloLens,
///   posisi world space anchor akan identik secara fisik di kedua device.
///
/// SETUP:
///   1. Attach script ini ke prefab "AR Diamond 2"
///   2. Pastikan nama path "XRSpace/Content" sesuai dengan hierarchy di scene
///      (periksa: Inspector field "Xr Space Content Path")
/// </summary>
[RequireComponent(typeof(PhotonView))]
public class AnchorPhotonBridge : MonoBehaviourPun, IPunInstantiateMagicCallback
{
    [Header("Immersal Setup")]
    [Tooltip("Path GameObject XRSpace/Content di scene hierarchy. Gunakan format 'Parent/Child'.")]
    [SerializeField] private string xrSpaceContentPath = "XRSpace/Content";

    /// <summary>
    /// Dipanggil otomatis oleh Photon di setiap client saat objek di-instantiate via PhotonNetwork.Instantiate().
    /// Tidak perlu di-panggil manual.
    /// </summary>
    public void OnPhotonInstantiate(PhotonMessageInfo info)
    {
        Debug.Log($"[AnchorPhotonBridge] OnPhotonInstantiate dipanggil. " +
                  $"Spawner: ActorNr {info.Sender.ActorNumber}, " +
                  $"IsMine: {photonView.IsMine}");

        // Cari parent XRSpace/Content di scene
        GameObject xrContent = GameObject.Find(xrSpaceContentPath);

        if (xrContent == null)
        {
            Debug.LogError($"[AnchorPhotonBridge] GAGAL: Tidak menemukan '{xrSpaceContentPath}' di scene! " +
                           $"Periksa:\n" +
                           $"1. Apakah XRSpace ada di scene hierarchy?\n" +
                           $"2. Apakah child 'Content' ada di bawah XRSpace?\n" +
                           $"3. Apakah nama path di Inspector sudah benar?\n" +
                           $"Anchor TIDAK akan sinkron dengan koordinat Immersal.");
            return;
        }

        // Simpan world position sebelum re-parent
        // worldPositionStays = true → Unity hitung ulang localPosition agar
        // objek tetap di posisi world yang sama setelah pindah parent
        Vector3 worldPosBefore = transform.position;
        transform.SetParent(xrContent.transform, worldPositionStays: true);

        Debug.Log($"[AnchorPhotonBridge] ✅ Anchor berhasil di-parent ke '{xrSpaceContentPath}'.\n" +
                  $"  World pos  : {worldPosBefore}\n" +
                  $"  Local pos  : {transform.localPosition}\n" +
                  $"  Parent     : {xrContent.name}");
    }
}
