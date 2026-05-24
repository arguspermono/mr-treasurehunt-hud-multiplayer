using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Photon.Pun;

/// <summary>
/// Tempel script ini ke GameObject "Cube 2".
///
/// MULTIPLAYER SYNC (dimodifikasi):
///   Klik Cube  → RPC_ShowPanel  → ShowPanel() di SEMUA client
///   Klik Close → RPC_HidePanel  → HidePanel() di SEMUA client
///
/// Mengapa RPC ada di CubeInteraction dan bukan di SpawnPanelController?
///   SpawnPanelController ada di Quiz Panel 2. Saat panel di-hide,
///   GameObject-nya nonaktif → tidak bisa terima RPC. Cube 2 selalu
///   aktif sehingga aman sebagai penerima/pengirim RPC.
///
/// SETUP DI INSPECTOR:
///   1. Cube 2 harus punya PhotonView (ViewID = 4)
///   2. Assign SpawnPanelController Quiz Panel 2 ke field di bawah
///   3. Tombol Close di Quiz Panel 2:
///      OnClick() → Cube 2 (CubeInteraction) → HidePanelNetwork()
///      (GANTI dari SpawnPanelController.HidePanel() ke fungsi ini)
/// </summary>
public class CubeInteraction : MonoBehaviourPun, IMixedRealityPointerHandler
{
    [Header("Referensi")]
    [Tooltip("Tarik SpawnPanelController dari Quiz Panel 2 ke sini")]
    public SpawnPanelController spawnPanelController;

    #region IMixedRealityPointerHandler — Deteksi Klik MRTK

    public void OnPointerDown(MixedRealityPointerEventData eventData) { }
    public void OnPointerDragged(MixedRealityPointerEventData eventData) { }
    public void OnPointerUp(MixedRealityPointerEventData eventData) { }

    /// <summary>
    /// Dipanggil otomatis oleh MRTK saat Cube diklik/ditap.
    /// </summary>
    public void OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        OnCubeClicked();
    }

    #endregion

    /// <summary>
    /// Fungsi utama yang menampilkan panel ke SEMUA client via Photon RPC.
    /// Bisa juga dihubungkan manual ke Interactable → OnClick() dari Inspector.
    /// </summary>
    public void OnCubeClicked()
    {
        if (PhotonNetwork.IsConnected && photonView != null)
        {
            // Kirim RPC ke SEMUA client (termasuk diri sendiri) di room
            photonView.RPC("RPC_ShowPanel", RpcTarget.All);
            Debug.Log("[CubeInteraction] RPC_ShowPanel dikirim ke semua client.");
        }
        else
        {
            // Offline fallback: langsung tampilkan tanpa network
            ExecuteShowPanel();
        }
    }

    /// <summary>
    /// Hubungkan fungsi ini ke OnClick() tombol Close/X di dalam Quiz Panel 2.
    /// Mengirim RPC ke SEMUA client untuk menyembunyikan panel.
    ///
    /// GANTI referensi tombol Close dari:
    ///   SpawnPanelController.HidePanel()
    /// MENJADI:
    ///   CubeInteraction (Cube 2) → HidePanelNetwork()
    /// </summary>
    public void HidePanelNetwork()
    {
        if (PhotonNetwork.IsConnected && photonView != null)
        {
            photonView.RPC("RPC_HidePanel", RpcTarget.All);
            Debug.Log("[CubeInteraction] RPC_HidePanel dikirim ke semua client.");
        }
        else
        {
            // Offline fallback
            ExecuteHidePanel();
        }
    }

    // ─── Photon RPC Methods ───────────────────────────────────────────────────

    /// <summary>
    /// Dipanggil oleh Photon di setiap client saat cube diklik.
    /// </summary>
    [PunRPC]
    private void RPC_ShowPanel()
    {
        Debug.Log("[CubeInteraction] RPC_ShowPanel diterima. Menampilkan panel...");
        ExecuteShowPanel();
    }

    /// <summary>
    /// Dipanggil oleh Photon di setiap client saat tombol close diklik.
    /// </summary>
    [PunRPC]
    private void RPC_HidePanel()
    {
        Debug.Log("[CubeInteraction] RPC_HidePanel diterima. Menyembunyikan panel...");
        ExecuteHidePanel();
    }

    // ─── Helper Methods ───────────────────────────────────────────────────────

    private void ExecuteShowPanel()
    {
        if (spawnPanelController != null)
        {
            spawnPanelController.ShowPanel();
        }
        else
        {
            Debug.LogWarning("[CubeInteraction] SpawnPanelController belum diassign! " +
                             "Drag Quiz Panel 2's SpawnPanelController ke field di Inspector.");
        }
    }

    private void ExecuteHidePanel()
    {
        if (spawnPanelController != null)
        {
            spawnPanelController.HidePanel();
        }
        else
        {
            Debug.LogWarning("[CubeInteraction] SpawnPanelController belum diassign! " +
                             "Drag Quiz Panel 2's SpawnPanelController ke field di Inspector.");
        }
    }
}
