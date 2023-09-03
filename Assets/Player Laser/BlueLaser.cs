using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueLaser : MonoBehaviour
{
    public float bulletSpeed;

    void Update()
    {
        transform.Translate(Vector3.forward * bulletSpeed * Time.deltaTime);
        
        if (transform.position.z > 100)
        {
            gameObject.SetActive(false);
        }
    }

    void OnTriggerEnter() 
    {
        gameObject.SetActive(false); 
    }
}
