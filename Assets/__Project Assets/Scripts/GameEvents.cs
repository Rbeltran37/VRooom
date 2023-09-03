using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameEvents : MonoBehaviour
{
    public GameObject[] motorcycleEmemiesNormalShot;
    public GameObject motorcycleEmemiesSpreadShot;
    public int enemiesKilled;
    // Start is called before the first frame update
    void Start()
    {
        SpawnFirstEnemy();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void SpawnFirstEnemy()
    {
        motorcycleEmemiesSpreadShot.SetActive(true);
    }

    public void EnemyKilled()
    {
        enemiesKilled++;

        if(enemiesKilled == 1)
        {
            motorcycleEmemiesNormalShot[0].SetActive(true);
            Invoke(nameof(SpawnRightMotorcycleEnemy), 0.5f);
        }

        if(enemiesKilled == 3)
        {
            motorcycleEmemiesSpreadShot.SetActive(true);
            Invoke(nameof(SpawnLeftMotorcycleEnemy), 0.5f);
            Invoke(nameof(SpawnRightMotorcycleEnemy), 1f);
        }
    }

    void SpawnLeftMotorcycleEnemy()
    {
        motorcycleEmemiesNormalShot[0].SetActive(true);
    }

    void SpawnRightMotorcycleEnemy()
    {
        motorcycleEmemiesNormalShot[1].SetActive(true);
    }
}
