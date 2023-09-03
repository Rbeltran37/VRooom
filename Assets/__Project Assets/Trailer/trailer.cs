using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class trailer : MonoBehaviour
{
    public float speed;
    public ShootRicket shootRicketScript;
    public Dialog DialogScript;
    // Start is called before the first frame update
    void OnEnable()
    {
        transform.position = new Vector3(7.86f, -0.1f, 370);
        transform.eulerAngles = new Vector3(0, 270, 0);
        speed = 80;
        Invoke("PlayDialog", 1.5f);
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.left * speed * Time.deltaTime);

        if (transform.position.z <= 124)
        {
            speed = 0;
            this.enabled = false;
            shootRicketScript.enabled = true;
        }
    }

    void OnTriggerEnter(Collider other) 
    {
        if (other.tag == "Motorcycle")
        {
            other.GetComponent<PlayerHealth>().Hit();
        }
    }

    void PlayDialog()
    {
        DialogScript.PlayDialog(11);
    }
}
