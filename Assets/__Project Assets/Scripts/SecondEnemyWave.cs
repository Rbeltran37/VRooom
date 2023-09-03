using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SecondEnemyWave : MonoBehaviour
{
    public Dialog dialogScript;
    public GameObject machineGunTruck;
    public GameObject shockwaveTruck;
    private bool firstEnemySpawned;
    private bool firstEnemyKilled;
    private bool secondEnemySpawned;
    public GameObject trailer;

    void Start()
    {
        dialogScript.PlayDialog(9);
        Invoke("SpawnMachineGunTruck", 1.5f);
    }

    void Update()
    {
        if (firstEnemySpawned && machineGunTruck.activeSelf == false && !firstEnemyKilled)
        {
            firstEnemyKilled = true;
            dialogScript.PlayDialog(10);
            Invoke("SpawnShockwaveTruck", 1.5f);
        }

        if (secondEnemySpawned && shockwaveTruck.activeSelf == false)
        {
            this.enabled = false;
            trailer.SetActive(true);
        }
    }

    void SpawnMachineGunTruck()
    {
        machineGunTruck.SetActive(true);
        firstEnemySpawned = true;
    }

    void SpawnShockwaveTruck()
    {
        shockwaveTruck.SetActive(true);
        secondEnemySpawned = true;
    }
}
