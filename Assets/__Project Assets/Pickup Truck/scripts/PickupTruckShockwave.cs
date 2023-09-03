using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PickupTruckShockwave : MonoBehaviour
{
    private bool movingToStartPosition;
    public Transform startingPosition;
    private float truckSpeed = 30;
    public Transform destination;
    private bool startShooting;
    public GameObject laser;
    public float rotateSpeed;
    private bool moveLaserLeft = true;
    public int health;
    public ParticleSystem smoke;
    public ParticleSystem fire;
    public GameObject explosion;
    public Animator truckAnimator;
    public Animator TruckEnemyAnimator;
    public Slider healthbarSlider;

    void OnEnable()
    {
        transform.position = startingPosition.position;
        movingToStartPosition = true;
        startShooting = false;
        moveLaserLeft = true;
        health = 60;
        transform.SetPositionAndRotation(new Vector3(16.41f, 1.31f, -76), Quaternion.Euler(0,0,0));
        healthbarSlider.value = health;
        healthbarSlider.enabled = true;
    }

    void Update()
    {
        if (movingToStartPosition)
        {
            transform.position = Vector3.MoveTowards(transform.position, destination.position, truckSpeed * Time.deltaTime);

            if (Vector3.Distance(transform.position, destination.position) < 0.1f)
            {
                movingToStartPosition = false;
                startShooting = true;
                laser.SetActive(true);
            }
        }

        if (startShooting)
        {
            if (moveLaserLeft)
            {
                laser.transform.Rotate(rotateSpeed * Time.deltaTime * Vector3.up);

                if (laser.transform.rotation.eulerAngles.y >= 210)
                {
                    moveLaserLeft = false;
                }
            }

            if (!moveLaserLeft)
            {
                laser.transform.Rotate(rotateSpeed * Time.deltaTime * Vector3.down);

                if (laser.transform.rotation.eulerAngles.y <= 150)
                {
                    moveLaserLeft = true;
                }
            }
        }
    }

    void Hit()
    {
        health--;
        healthbarSlider.value = health;

        if (health < 40 && health > 20)
        {
            smoke.Play();
        }

        if (health <= 20 && health > 0)
        {
            smoke.Stop();
            fire.Play();
        }

        if(health <= 0)
        {
            laser.SetActive(false);
            TruckEnemyAnimator.SetBool("Fall", true);
            truckAnimator.enabled = true;
        }
    }

    public void BlowUpTruck()
    {
        fire.Stop();
        explosion.transform.position = transform.position;
        explosion.SetActive(true);
        gameObject.SetActive(false);
        //laser.transform.rotation = Quaternion.Euler(5.58f, 180, 0);
    }

    void OnTriggerEnter(Collider other) 
    {
        if (other.CompareTag("Player Laser"))
        {
            Hit();
            other.gameObject.SetActive(false);
        }
    }

    void OnDisable()
    {
        TruckEnemyAnimator.SetBool("Fall", false);
        truckAnimator.enabled = false;
    }
}
