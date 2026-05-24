using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class HoloLensBoxOwnership : MonoBehaviourPun, IPunOwnershipCallbacks
{
    private ObjectManipulator objectManipulator;

    private void Awake()
    {
        objectManipulator = GetComponent<ObjectManipulator>();
    }

    private void OnEnable()
    {
        PhotonNetwork.AddCallbackTarget(this);

        if (objectManipulator != null)
        {
            objectManipulator.OnManipulationStarted.AddListener(OnManipulationStarted);
        }
    }

    private void OnDisable()
    {
        PhotonNetwork.RemoveCallbackTarget(this);

        if (objectManipulator != null)
        {
            objectManipulator.OnManipulationStarted.RemoveListener(OnManipulationStarted);
        }
    }

    private void OnManipulationStarted(ManipulationEventData eventData)
    {
        if (!photonView.IsMine)
        {
            Debug.Log("Requesting ownership from HoloLens interaction...");
            photonView.RequestOwnership();
        }
    }

    public void OnOwnershipRequest(PhotonView targetView, Player requestingPlayer)
    {
        if (targetView != photonView)
            return;

        Debug.Log("Ownership request received from ActorNumber: " + requestingPlayer.ActorNumber);
        photonView.TransferOwnership(requestingPlayer);
    }

    public void OnOwnershipTransfered(PhotonView targetView, Player previousOwner)
    {
        if (targetView != photonView)
            return;

        string previous = previousOwner != null ? previousOwner.ActorNumber.ToString() : "none";
        Debug.Log("Ownership transferred. Previous owner: " + previous + ", New owner: " + photonView.OwnerActorNr);
    }

    public void OnOwnershipTransferFailed(PhotonView targetView, Player senderOfFailedRequest)
    {
        if (targetView != photonView)
            return;

        Debug.LogWarning("Ownership transfer failed for player: " + senderOfFailedRequest.ActorNumber);
    }
}