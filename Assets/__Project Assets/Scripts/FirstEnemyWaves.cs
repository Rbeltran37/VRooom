using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirstEnemyWaves : MonoBehaviour
{
    public GameObject boss;
    private Vector3 bossDestination = new Vector3(16.50f, 0,355);
    private float bossSpeed = 35;
    private bool bossAtDestination;
    public GameObject[] enemies;
    private int enemiesIndex;
    public Dialog dialogScript;
    public MotorcycleGun motorcycleGunScript;
    public int enemiesKilled;
    public SpawnTraffic spawnTrafficScript;

    void Start()
    {
        dialogScript.PlayDialog(6);
        motorcycleGunScript.enabled = true;
        motorcycleGunScript.canShoot = true;
        Invoke("SpawnFirstEnemy", 2.5f);
        
    }

    void Update()
    {
        MoveBossPosition();
    }

    void MoveBossPosition()
    {
        if (!bossAtDestination)
        {
            boss.transform.position = Vector3.MoveTowards(boss.transform.position, bossDestination, bossSpeed * Time.deltaTime);

            if (Vector3.Distance(boss.transform.position, bossDestination) < 0.1f)
            {
                bossAtDestination = true;
            }
        }
    }

    void SpawnFirstEnemy()
    {
        enemies[0].SetActive(true);
    }

    public void EnemyKilled()
    {
        enemiesKilled++;

        if(enemiesKilled == 1)
        {
            enemies[1].SetActive(true);
            Invoke(nameof(SpawnRightMotorcycleEnemy), 0.5f);
        }

        if(enemiesKilled == 3)
        {
            dialogScript.PlayDialog(7);
            enemies[0].SetActive(true);
            Invoke(nameof(SpawnLeftMotorcycleEnemy), 0.5f);
            Invoke(nameof(SpawnRightMotorcycleEnemy), 1f);
        }

        if(enemiesKilled == 6)
        {
            this.enabled = false;
            spawnTrafficScript.enabled = true;
        }
    }

    void SpawnLeftMotorcycleEnemy()
    {
        enemies[1].SetActive(true);
    }

    void SpawnRightMotorcycleEnemy()
    {
        enemies[2].SetActive(true);
    }
}
