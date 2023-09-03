using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TankRocket : MonoBehaviour
{
    public Transform spawnPosition;
    public float rocketSpeed;

    void Update()
    {
        transform.position = Vector3.MoveTowards(transform.position, spawnPosition.position, rocketSpeed * Time.deltaTime);

        if (Vector3.Distance(transform.position, spawnPosition.position) < 0.1f)
        {
            gameObject.SetActive(false);
        }
    }
}
