using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveRoad : MonoBehaviour
{
    public float speed;
    public GameObject nextRoad;
    public float zAxisToTriggerMove;
    public float lengthOfRoad;
    void Update()
    {
        if(transform.position.z <= zAxisToTriggerMove) {
            transform.position = new Vector3(transform.position.x, transform.position.y, nextRoad.transform.position.z+lengthOfRoad);
        }

        transform.Translate(Vector3.back * speed * Time.deltaTime);
    }
}
