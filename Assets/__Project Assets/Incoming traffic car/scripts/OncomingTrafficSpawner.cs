using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OncomingTrafficSpawner : MonoBehaviour
{
    public GameObject[] cars;
    public GameObject[] lanes;
    private int carsIndex;
    private float timer;

    void Update()
    {
        timer += Time.deltaTime;

        if(timer >= .5f)
        {
            if(carsIndex >= cars.Length)
            {
                carsIndex = 0;
            }

            int randomLane = Random.Range(0,5);

            cars[carsIndex].transform.position = lanes[randomLane].transform.position;
            cars[carsIndex].SetActive(true);

            carsIndex++;
            timer = 0;
        }
    }
}
