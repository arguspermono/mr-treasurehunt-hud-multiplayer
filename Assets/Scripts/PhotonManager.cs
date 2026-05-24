using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

public class PhotonManager : MonoBehaviourPunCallbacks
{
    [Header("Room Settings")]
    public string roomName = "BoxRoom";
    public byte maxPlayers = 10;

    private void Start()
    {
        if (!PhotonNetwork.IsConnected)
        {
            Debug.Log("Connecting to Photon...");
            PhotonNetwork.ConnectUsingSettings();
        }
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Master Server");

        PhotonNetwork.JoinOrCreateRoom(
            roomName,
            new RoomOptions { MaxPlayers = maxPlayers },
            TypedLobby.Default
        );
    }

    public override void OnJoinedRoom()
    {
        Debug.Log("Joined room successfully: " + PhotonNetwork.CurrentRoom.Name);
        Debug.Log("Player count: " + PhotonNetwork.CurrentRoom.PlayerCount);
        Debug.Log("Is Master Client: " + PhotonNetwork.IsMasterClient);
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        Debug.LogError($"Failed to join room. Code: {returnCode}, Message: {message}");
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        Debug.LogError($"Failed to create room. Code: {returnCode}, Message: {message}");
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        Debug.LogWarning("Disconnected from Photon. Cause: " + cause);
    }
}