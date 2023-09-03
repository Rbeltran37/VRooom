using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveRocketExplosion : MonoBehaviour
{
    public BoxCollider boxCollider;
    private float timer;

    // Start is called before the first frame update
    void OnEnable()
    {
        boxCollider.enabled = true;
        timer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        
        if (timer >= .1)
        {
            boxCollider.enabled = false;
        }

        if(timer >= 1)
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
