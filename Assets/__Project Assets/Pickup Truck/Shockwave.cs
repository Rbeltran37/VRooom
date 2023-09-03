using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shockwave : MonoBehaviour
{
    public float timer;
    public float timeToGetToDestination;
    public float shockwaveSpeed;
    public float timeBeforeBulletDisabled;
    // Start is called before the first frame update
    void OnEnable()
    {
        timer = 0;
        transform.localScale = new Vector3(0,0,0);
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        transform.localScale = new Vector3(Mathf.Lerp(0, 26, timer/1f), Mathf.Lerp(0, 2, timer/1f), Mathf.Lerp(0, 1, timer/1f));
        //transform.position = new Vector3(transform.position.x, Mathf.Lerp(transform.position.y, 2, timer/1), Mathf.Lerp(transform.position.z, -35, timer/5));

        //transform.Translate(shockwaveSpeed * Time.deltaTime * Vector3.back);

        if (timer >= 3)
        {
            gameObject.SetActive(false);
        }
    }

    void OnTriggerEnter(Collider other) 
    {
        if (other.CompareTag("Motorcycle"))
        {
            other.GetComponent<PlayerHealth>().Hit();
            gameObject.SetActive(false);
        }

        if (other.CompareTag("Player Laser"))
        {
            other.gameObject.SetActive(false);
        }
    }
}
