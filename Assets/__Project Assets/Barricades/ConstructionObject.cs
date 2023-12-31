using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConstructionObject : MonoBehaviour
{
    public float speed;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.right * speed * Time.deltaTime);

        if (transform.position.z <= -75)
        {
            gameObject.SetActive(false);
        }
    }

    void OnTriggerEnter(Collider other) 
    {
        if (other.tag == "Motorcycle")
        {
            other.GetComponent<PlayerHealth>().Hit();
        }
    }
}
