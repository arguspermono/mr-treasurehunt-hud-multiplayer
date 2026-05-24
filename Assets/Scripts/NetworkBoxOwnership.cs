using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

/// <summary>
/// Menangani ownership transfer Photon untuk objek jaringan (AR Diamond 2).
///
/// CATATAN:
///   OnMouseDown() telah DIHAPUS karena tidak bekerja di HoloLens.
///   Ownership request untuk HoloLens ditangani oleh HoloLensBoxOwnership.cs
///   yang menggunakan MRTK ObjectManipulator.OnManipulationStarted.
///
///   Script ini mempertahankan callback ownership (OnOwnershipRequest, dll.)
///   agar transfer ownership dapat di-approve dan dilaporkan dengan benar.
/// </summary>
public class NetworkBoxOwnership : MonoBehaviourPun, IPunOwnershipCallbacks
{
    private void OnEnable()
    {
        PhotonNetwork.AddCallbackTarget(this);
    }

    private void OnDisable()
    {
        PhotonNetwork.RemoveCallbackTarget(this);
    }

    // ─── OnMouseDown DIHAPUS ──────────────────────────────────────────────────
    // Alasan: OnMouseDown() adalah Unity Mouse event yang tidak bekerja pada
    // HoloLens / XR device. Ownership request untuk HoloLens sudah ditangani
    // oleh HoloLensBoxOwnership.cs via MRTK ObjectManipulator.
    // ─────────────────────────────────────────────────────────────────────────

    /// <summary>
    /// Dipanggil saat ada player yang request ownership.
    /// Approve request dengan langsung transfer ke player peminta.
    /// </summary>
    public void OnOwnershipRequest(PhotonView targetView, Player requestingPlayer)
    {
        if (targetView != photonView)
            return;

        Debug.Log($"[NetworkBoxOwnership] Ownership requested by ActorNumber: {requestingPlayer.ActorNumber}. Approving...");
        photonView.TransferOwnership(requestingPlayer);
    }

    /// <summary>
    /// Dipanggil setelah ownership berhasil dipindahkan.
    /// </summary>
    public void OnOwnershipTransfered(PhotonView targetView, Player previousOwner)
    {
        if (targetView != photonView)
            return;

        string previous = previousOwner != null ? previousOwner.ActorNumber.ToString() : "none";
        Debug.Log($"[NetworkBoxOwnership] Ownership transferred. Previous: {previous} → New: {photonView.OwnerActorNr}");
    }

    /// <summary>
    /// Dipanggil jika transfer ownership gagal.
    /// </summary>
    public void OnOwnershipTransferFailed(PhotonView targetView, Player senderOfFailedRequest)
    {
        if (targetView != photonView)
            return;

        Debug.LogWarning($"[NetworkBoxOwnership] Ownership transfer failed for player: {senderOfFailedRequest.ActorNumber}");
    }
}