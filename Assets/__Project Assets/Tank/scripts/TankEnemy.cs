using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TankEnemy : MonoBehaviour
{
    public float tankSpeed;
    public Transform startPosition;
    private bool atStartingPosition;
    private bool shootAttack1A;
    public Transform bulletSpawnPoint;
    public GameObject[] bullets;
    private int bulletsIndex;
    private float timer;
    private int bulletsShot;
    private bool shootAttack1B;
    private int shootAttackRounds;
    public GameObject[] rocketExplosions;
    public GameObject[] rockets;
    private int rocketsIndex;
    private bool rocketAttack;
    private int lastRandomNumber = 2;
    private int randomNumber;
    private bool shootAttack3;
    private bool shootAttack3A;
    private bool shootAttack3B;
    public int health;
    public ParticleSystem smoke;
    public ParticleSystem fire;
    public GameObject explosion;
    public BoxCollider boxCollider;
    public Slider healthbarSlider;

    void Update()
    {
        if (!atStartingPosition)
        {
            moveToStartingPositiob();
        }

        if (shootAttack1A)
        {
            timer += Time.deltaTime;

            if (timer > .1f)
            {
                ShootingAttack1();
            }

            if (bulletsShot > 8)
            {
                shootAttack1A = false;
                timer = -.2f;
                bulletsShot = 0;
                shootAttack1B = true;
            }
        }

        if (shootAttack1B)
        {
            timer += Time.deltaTime;

            if (timer > .1f)
            {
                ShootingAttack2();
            }

            if (bulletsShot > 8)
            {
                if (shootAttackRounds < 2)
                {
                    shootAttack1B = false;
                    shootAttack1A = true;
                    timer = -.2f;
                    bulletsShot = 0;
                    shootAttackRounds++;
                }

                else
                {
                    shootAttack1B = false;
                    timer = 0;
                    bulletsShot = 0;
                    shootAttackRounds = 0;
                    rocketAttack = true;
                }
            }
        }

        if(rocketAttack)
        {
            timer += Time.deltaTime;

            if (timer > 2.8f)
            {
                RocketAttack();
            }

            if (shootAttackRounds > 4)
            {
                rocketAttack = false;
                timer = -2.8f;
                shootAttackRounds = 0;
                shootAttack3 = true;
            }
        }

        if (shootAttack3)
        {
            timer += Time.deltaTime;

            if (timer > .4)
            {
                if (!shootAttack3A)
                {
                    ShootingAttack3();
                    shootAttack3A = true;
                    shootAttack3B = false;
                }
            }

            if (timer > .8)
            {
                if (!shootAttack3B)
                {
                    ShootingAttack4();
                    shootAttack3B = true;
                    shootAttack3A = false;
                    timer = 0;
                    shootAttackRounds++;
                }
            }

            if (shootAttackRounds > 10)
            {
                shootAttack3 = false;
                shootAttack1A = true;
                timer = -2;
                shootAttackRounds = 0;
            }
        }
    }

    void moveToStartingPositiob()
    {
        transform.position = Vector3.MoveTowards(transform.position, startPosition.position, tankSpeed * Time.deltaTime);

        if (Vector3.Distance(transform.position, startPosition.position) < 0.1f)
        {
            atStartingPosition = true;
            shootAttack1A = true;
            boxCollider.enabled = true;
        }
    }

    void ShootingAttack1()
    {
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -10, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -5, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 5, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 10, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletsShot++;
        timer = 0;
    }

    void ShootingAttack2()
    {
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -12.5f, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -7.5f, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, -2.5f, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 2.5f, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 7.5f, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 12.5f, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = bulletSpawnPoint.transform.position;
        SpawnBullet();

        bulletsShot++;
        timer = 0;
    }

    void RocketAttack()
    {
        while (lastRandomNumber == randomNumber)
        {
            randomNumber = Random.Range(0,5);
        }

        lastRandomNumber = randomNumber;

        for (int i = 0; i < 5; i++)
        {
            if (randomNumber != i)
            {
                rocketExplosions[i].SetActive(true);
                rockets[i].SetActive(true);
            }
        }

        timer = 0;
        shootAttackRounds++;
    }

    void ShootingAttack3()
    {
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-12.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();
        
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-10, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();
        
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-7.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();
        
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-5, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-2.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+2.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+5, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+7.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+10, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+12.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();
    }

    void ShootingAttack4()
    {
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-11.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();
        
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-8.75f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();
        
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-6.25f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();
        
        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-3.75f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x-1.25f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+1.25f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+3.75f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+6.25f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+8.75f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();

        bulletSpawnPoint.transform.eulerAngles = new Vector3(-1, 0, 0);
        bullets[bulletsIndex].transform.rotation = Quaternion.Euler(bulletSpawnPoint.transform.eulerAngles.x, bulletSpawnPoint.transform.eulerAngles.y, bulletSpawnPoint.transform.eulerAngles.z);
        bullets[bulletsIndex].transform.position = new Vector3(bulletSpawnPoint.transform.position.x+11.5f, bulletSpawnPoint.transform.position.y, bulletSpawnPoint.transform.position.z);
        SpawnBullet();
    }

    void SpawnBullet()
    {
        bullets[bulletsIndex].SetActive(true);
        bulletsIndex++;
        if (bulletsIndex >= bullets.Length)
        {
            bulletsIndex = 0;
        }
    }

    void Hit()
    {
        health--;
        healthbarSlider.value = health;

        if (health < 200 && health > 100)
        {
            smoke.Play();
        }

        if (health <= 100 && health > 0)
        {
            smoke.Stop();
            fire.Play();
        }

        if(health <= 0)
        {
            fire.Stop();
            explosion.transform.position = transform.position;
            explosion.SetActive(true);
            gameObject.SetActive(false);
        }
    }

    void OnTriggerEnter(Collider other) 
    {
        if (other.CompareTag("Player Laser"))
        {
            Hit();
            other.gameObject.SetActive(false);
        }
    }
}
