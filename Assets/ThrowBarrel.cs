using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThrowBarrel : MonoBehaviour
{
    public GameObject[] barrels;
    public float timeBetweenThrows;
    private float timer;
    public Transform startingBarrelPosition;
    private int barrelsIndex;
    // Start is called before the first frame update
    void OnEnable()
    {
        //timer = timeBetweenThrows;
    }

    // Update is called once per frame
    /* void Update()
    {
        timer -= Time.deltaTime;

        if(timer <= 0) {
            if(barrelsIndex >= barrels.Length) {
                barrelsIndex = 0;
            }
            barrels[barrelsIndex].transform.position = startingBarrelPosition.position;
            barrels[barrelsIndex].SetActive(true);
            barrelsIndex++;
            timer = timeBetweenThrows;
        }
    } */

    public void Kickarrel()
    {
        if (barrelsIndex >= barrels.Length)
        {
            barrelsIndex = 0;
        }
        barrels[barrelsIndex].transform.position = startingBarrelPosition.position;
        barrels[barrelsIndex].SetActive(true);
        barrelsIndex++;
    }
}
