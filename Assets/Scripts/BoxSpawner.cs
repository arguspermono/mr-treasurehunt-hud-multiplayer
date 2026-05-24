using Photon.Pun;
using UnityEngine;

public class BoxSpawner : MonoBehaviourPunCallbacks
{
    [Header("Spawn Settings")]
    public Transform spawnPoint;
    public string prefabName = "BoxAnchor";

    private static bool boxSpawned = false;

    public override void OnJoinedRoom()
    {
        Debug.Log("BoxSpawner detected room join");

        if (!PhotonNetwork.IsMasterClient)
        {
            Debug.Log("Not MasterClient, box will not be spawned by this client.");
            return;
        }

        if (boxSpawned)
        {
            Debug.Log("Box already spawned.");
            return;
        }

        if (spawnPoint == null)
        {
            Debug.LogError("SpawnPoint belum di-assign di Inspector!");
            return;
        }

        Debug.Log("Spawning BoxAnchor...");
        PhotonNetwork.Instantiate(prefabName, spawnPoint.position, spawnPoint.rotation);
        boxSpawned = true;
    }
}