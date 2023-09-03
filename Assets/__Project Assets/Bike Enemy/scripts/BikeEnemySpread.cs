using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BikeEnemySpread : MonoBehaviour
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
    private float bulletYRotation = 186;
    private int shotsBeforePause;
    public int health;
    public GameObject explosion;
    public FirstEnemyWaves firstEnemyWavesScript;
    public Slider healthbarSlider;

    void OnEnable()
    {
        transform.position = startingPosition.position;
        movingToStartPosition = true;
        timer = timeBetweenEachShot;
        startShooting = false;
        bulletYRotation = 186;
        shotsBeforePause = 0;
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
                for (int i = 0; i < 6; i++)
                {
                    enemyBulletPool[enemyBulletPoolIndex].transform.eulerAngles = new Vector3(1, bulletYRotation, 0);
                    enemyBulletPool[enemyBulletPoolIndex].transform.position = bulletSpawnPoint.position;
                    enemyBulletPool[enemyBulletPoolIndex].SetActive(true);

                    enemyBulletPoolIndex++;
                    bulletYRotation -= 2;

                    if (enemyBulletPoolIndex >= enemyBulletPool.Length)
                    {
                        enemyBulletPoolIndex = 0;
                    }
                }

                bulletYRotation = 186;
                timer = 0;
                shotsBeforePause++;
            }

            if (shotsBeforePause == 4)
            {
                timer -= 4;
                shotsBeforePause = 0;
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
