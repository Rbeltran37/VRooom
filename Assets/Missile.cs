using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Missile : MonoBehaviour
{
    public Transform target;
    public float duration;
    float distance;
    float t;
    // Start is called before the first frame update
    void OnEnable()
    {
        distance = Vector3.Distance(transform.position, target.position);
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = Vector3.MoveTowards(transform.position, target.position, (distance/duration) * Time.deltaTime);
    }
}
