using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class BossMoving : MonoBehaviour
{
    public Vector3 targetPosition;
    private float timer;
    public bool Moving;
    public float speed;
    public Vector3 destination;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Moving)
        {
            transform.position = Vector3.MoveTowards(transform.position, destination, speed * Time.deltaTime);

            if (Vector3.Distance(transform.position, destination) < 0.1f)
            {
                Moving = false;
            }
        }
    }
}
