using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrailerCrash : MonoBehaviour
{
    public Animator trailerAnimator;
    public float speed;
    private bool truckMoving;
    public trailer trailerScript;
    public Dialog DialogScript;
    public ThirdEnemyWave thirdEnemyWaveScript;
    // Start is called before the first frame update
    void OnEnable()
    {
        trailerAnimator.enabled = true;
        DialogScript.PlayDialog(13);
    }

    // Update is called once per frame
    void Update()
    {
        if (truckMoving)
        {
            transform.Translate(Vector3.back * speed * Time.deltaTime);
        }

        if (transform.position.z <= -65)
        {
            this.enabled = false;
        }
    }

    public void MoveTruck()
    {
        truckMoving = true;
        trailerAnimator.enabled = false;
        transform.eulerAngles = new Vector3(0, 270, 0);
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Motorcycle")
        {
            other.GetComponent<PlayerHealth>().Hit();
        }
    }

    void OnDisable()
    {
        truckMoving = false;
        gameObject.SetActive(false);
        thirdEnemyWaveScript.enabled = true;
    }
}
