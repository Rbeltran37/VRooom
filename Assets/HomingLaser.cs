using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingLaser : MonoBehaviour
{
    public Transform target;
    public float laserSpeed;
    void Update()
    {
        transform.LookAt(target, Vector3.left);
        var step =  laserSpeed * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, target.position, step);

        if (Vector3.Distance(transform.position, target.position) < 0.001f) {
            GetComponent<SphereCollider>().enabled = true;
        }
    }
}
