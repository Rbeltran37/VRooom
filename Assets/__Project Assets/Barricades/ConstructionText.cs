using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConstructionText : MonoBehaviour
{
    public float speed;
    // Start is called before the first frame update
    void OnEnable()
    {
        transform.position = new Vector3(16.37f, 1, 351);
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.back * speed * Time.deltaTime);

        if (transform.position.z <= -75)
        {
            gameObject.SetActive(false);
        }
    }
}
