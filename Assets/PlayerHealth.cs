using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHealth : MonoBehaviour
{
    public int health;
    public BoxCollider motorcycleCollider;
    public GameObject damageIndicator;
    public AudioSource playerHit;
    public MotorcycleGun motorcycleGunScript;
    public int timesHit;

    public void Hit()
    {
        playerHit.Play();
        motorcycleCollider.enabled = false;
        damageIndicator.SetActive(true);
        Invoke("DisableHitIndicator", 1.5f);
        Invoke("invincible", 1.5f);
        motorcycleGunScript.canShoot = false;
        timesHit++;
    }

    void invincible()
    {
        motorcycleCollider.enabled = true;
    }
    
    void DisableHitIndicator()
    {
        damageIndicator.SetActive(false);
        motorcycleGunScript.canShoot = true;
    }
}
