using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnTraffic : MonoBehaviour
{
    public GameObject car;
    public Transform[] lanes;
    private float timer;
    private int laneToSpawnCarIn;
    private int prevLane;
    private int prevLane2 = 4;
    public GameObject[] cars;
    private int carsIndex;
    public int numberOfCarsPerRow;
    public Dialog dialogScript;
    private bool stopSpawningCars;
    public SecondEnemyWave secondEnemyWaveScript;
    public AudioSource trafficAudio;

    void OnEnable()
    {
        Invoke("PlayHeavyTrafficDialog", 2);
        timer = 0;
        stopSpawningCars = false;
        Invoke("StopSpawningTrafffic", 30);
        Invoke("PlayTrafficSounds", 8f);
    }

    void Update()
    {
        timer += Time.deltaTime;

        if (timer >= 1.25f && !stopSpawningCars)
        {
            for (int i = 0; i < numberOfCarsPerRow; i++)
            {
                spawncars();
            }

            timer = 0;
        }
    }

    void spawncars()
    {
        while (laneToSpawnCarIn == prevLane || laneToSpawnCarIn == prevLane2)
        {
            laneToSpawnCarIn = Random.Range(0, 5);
        }

        if (carsIndex >= cars.Length)
        {
            carsIndex = 0;
        }

        cars[carsIndex].transform.position = lanes[laneToSpawnCarIn].position;
        cars[carsIndex].SetActive(true);
        carsIndex++;
        prevLane2 = prevLane;
        prevLane = laneToSpawnCarIn;
    }

    void StopSpawningTrafffic()
    {
        stopSpawningCars = true;
        Invoke("DisableScript", 7);
    }

    void DisableScript()
    {
        this.enabled = false;
        secondEnemyWaveScript.enabled = true;
        trafficAudio.Stop();
    }

    void PlayTrafficSounds()
    {
        trafficAudio.Play();
    }

    void PlayHeavyTrafficDialog()
    {
        dialogScript.PlayDialog(8);
    }
}
