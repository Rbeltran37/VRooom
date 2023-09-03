using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BikeEnemyBullet : MonoBehaviour
{
    public float bulletSpeed;
    public float timeBeforeBulletDisabled;
    private float timer;

    void OnEnable()
    {
        timer = 0;
    }

    void Update()
    {
        timer += Time.deltaTime;

        transform.Translate(bulletSpeed * Time.deltaTime * Vector3.forward);

        if (timer >= timeBeforeBulletDisabled)
        {
            gameObject.SetActive(false);
        }
    }

    void OnTriggerEnter(Collider other) 
    {
        if (other.CompareTag("Motorcycle"))
        {
            other.GetComponent<PlayerHealth>().Hit();
            gameObject.SetActive(false);
        }
    }
}
