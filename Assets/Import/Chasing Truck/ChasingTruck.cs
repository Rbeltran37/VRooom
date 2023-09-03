using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChasingTruck : MonoBehaviour
{
    private bool driveBehindPlayer = true;
    private float speed = 30;
    // Start is called before the first frame update
    void OnEnable()
    {
        transform.position = new Vector3(21.88f, 0, -85);
    }

    // Update is called once per frame
    void Update()
    {
        if (driveBehindPlayer)
        {
            transform.Translate(Vector3.forward * speed * Time.deltaTime);

            if (transform.position.z >= -53)
            {
                driveBehindPlayer = false;
            }
        }
    }
}
