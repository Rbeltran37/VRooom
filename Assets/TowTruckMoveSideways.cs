using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowTruckMoveSideways : MonoBehaviour
{
    public float speed;
    private Vector3 destination;
    void OnEnable() {
        destination = new Vector3(Random.Range(-4.7f, 28), transform.position.y, transform.position.z);
    }
    void Update()
    {
        var step =  speed * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, destination, step);

        if (Vector3.Distance(transform.position, destination) < 0.001f) {
            destination = new Vector3(Random.Range(-4.7f, 28), transform.position.y, transform.position.z);
        }
    }
}
