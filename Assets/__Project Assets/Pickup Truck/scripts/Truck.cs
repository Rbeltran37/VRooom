    using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Truck : MonoBehaviour
{
    public int health;
    public ParticleSystem smoke;
    public ParticleSystem fire;
    public GameObject explosion;
    public Animator truckAnimator;
    public TruckEnemy truckEnemyScript;
    public Animator TruckEnemyAnimator;
    public PickupTruckMove pickupTruckMoveScript;
    public Slider healthbarSlider;
    
    void OnEnable()
    {
        health = 60;
        healthbarSlider.value = health;
        healthbarSlider.enabled = true;
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
            TruckEnemyAnimator.SetBool("Fall", true);
            truckEnemyScript.enabled = false;
            truckAnimator.enabled = true;
        }
    }

    public void BlowUpTruck()
    {
        fire.Stop();
        explosion.transform.position = transform.position;
        explosion.SetActive(true);
        gameObject.SetActive(false);
        this.enabled = false;
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
        pickupTruckMoveScript.enabled = true;
    }
}
