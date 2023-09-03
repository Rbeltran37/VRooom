using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThirdEnemyWave : MonoBehaviour
{
    public Dialog dialogScript;
    public GameObject machinegunTruck;
    public GameObject shockwaveTruck;
    public GameObject tank;
    public GameObject leftBikeEnemy;
    public GameObject rightBikeEnemy;
    private bool firstWaveSpawned;
    private bool firstWaveKilled;
    private bool secondWaveSpawned;
    private bool secondWaveKilled;
    private bool tankspawned;
    public DragRace dragRaceScript;
    public BoxCollider playerBoxCollider;

    void Start()
    {
        dialogScript.PlayDialog(14);
        Invoke("SpawnFirstWave", 2.5f);
    }

    void Update()
    {
        if (!firstWaveKilled && firstWaveSpawned)
        {
            if (leftBikeEnemy.activeSelf == false && rightBikeEnemy.activeSelf == false)
            {
                firstWaveKilled = true;
                dialogScript.PlayDialog(15);
                Invoke("SpawnSecondWave", 2);
            }
        }

        if (!secondWaveKilled && secondWaveSpawned)
        {
            if (machinegunTruck.activeSelf == false && leftBikeEnemy.activeSelf == false && rightBikeEnemy.activeSelf == false)
            {
                secondWaveKilled = true;
                dialogScript.PlayDialog(16);
                Invoke("SpawnTank", 1.5f);
            }
        }

        if (tankspawned)
        {
            if (tank.activeSelf == false)
            {
                this.enabled = false;
                dragRaceScript.enabled = true;
                playerBoxCollider.enabled = false;
            }
        }
    }

    void SpawnFirstWave()
    {
        leftBikeEnemy.SetActive(true);
        Invoke("SpawnRightBikeEnemy", .37f);
        firstWaveSpawned = true;
    }

    void SpawnSecondWave()
    {
        machinegunTruck.SetActive(true);
        Invoke("SpawnLeftBikeEnemy", .5f);
        Invoke("SpawnRightBikeEnemy", .87f);
        secondWaveSpawned = true;
    }

    void SpawnTank()
    {
        tank.SetActive(true);
        tankspawned = true;
    }

    void SpawnLeftBikeEnemy()
    {
        leftBikeEnemy.SetActive(true);
    }

    void SpawnRightBikeEnemy()
    {
        rightBikeEnemy.SetActive(true);
    }
}
