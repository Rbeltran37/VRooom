using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickupTruckMove : MonoBehaviour
{
    private float timer;
    private float timeToGetToDestination = 1.5f;
    public Truck truckScript;
    public TruckEnemy truckEnemyScript;

    // Start is called before the first frame update
    void OnEnable()
    {
        transform.SetPositionAndRotation(new Vector3(16.41f, 1.31f, -76), Quaternion.Euler(0,0,0));
        GetComponent<BoxCollider>().enabled = false;
        timer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        transform.position = new Vector3(16.41f, 1.31f, Mathf.Lerp(-76, -6.54f, timer/timeToGetToDestination));

        if (timer >= timeToGetToDestination)
        {
            this.enabled = false;
            truckScript.enabled = true;
            truckEnemyScript.enabled = true;
            GetComponent<BoxCollider>().enabled = true;
        }
    }
}
