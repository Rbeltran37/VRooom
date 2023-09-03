using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BikeEnemyNormal : MonoBehaviour
{
    private bool movingToStartPosition;
    public Transform startingPosition;
    private float bikeSpeed = 30;
    public Transform destination;
    private bool startShooting;
    public GameObject[] enemyBulletPool;
    private int enemyBulletPoolIndex;
    public Transform bulletSpawnPoint;
    public Transform playerMotorcycle;
    private float timer;
    public float timeBetweenEachShot;
    public int health;
    public GameObject explosion;
    public FirstEnemyWaves firstEnemyWavesScript;
    public Slider healthbarSlider;
    
    void OnEnable()
    {
        transform.position = startingPosition.position;
        movingToStartPosition = true;
        startShooting = false;
        timer = timeBetweenEachShot;
        health = 14;
        healthbarSlider.value = health;
    }

    void Update()
    {
        if (movingToStartPosition)
        {
            transform.position = Vector3.MoveTowards(transform.position, destination.position, bikeSpeed * Time.deltaTime);

            if (Vector3.Distance(transform.position, destination.position) < 0.1f)
            {
                movingToStartPosition = false;
                startShooting = true;
            }
        }

        if (startShooting)
        {
            timer += Time.deltaTime;

            if (timer >= timeBetweenEachShot)
            {
                bulletSpawnPoint.LookAt(playerMotorcycle);
                enemyBulletPool[enemyBulletPoolIndex].transform.SetPositionAndRotation(bulletSpawnPoint.position, bulletSpawnPoint.rotation);
                enemyBulletPool[enemyBulletPoolIndex].SetActive(true);

                enemyBulletPoolIndex++;

                if(enemyBulletPoolIndex >= enemyBulletPool.Length)
                {
                    enemyBulletPoolIndex = 0;
                }

                timer = 0;
            }
        }
    }

    void Hit()
    {
        health--;

        if(health <= 0)
        {
            explosion.transform.position = transform.position;
            explosion.SetActive(true);
            gameObject.SetActive(false);
            firstEnemyWavesScript.EnemyKilled();
        }
        healthbarSlider.value = health;
    }

    void OnTriggerEnter(Collider other) 
    {
        if (other.CompareTag("Player Laser"))
        {
            Hit();
            //other.gameObject.SetActive(false);
        }  
    }
}
