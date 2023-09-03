using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootRicket : MonoBehaviour
{
    public GameObject[] rockets;
    public GameObject[] redCircles;
    private int rocketsIndex;
    private float timer;
    public float timeBetweenShots;
    private float xAxisPosition;
    private float disableScriptTimer;
    public TrailerCrash trailerCrashScript;
    public Dialog DialogScript;
    private bool playMidpointAudio;
    // Start is called before the first frame update
    void OnEnable()
    {
        timer = 1;
        disableScriptTimer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        disableScriptTimer += Time.deltaTime;

        if (timer > timeBetweenShots)
        {
            while(redCircles[rocketsIndex].activeSelf == true)
            {
                rocketsIndex = Random.Range(0,5);
            }

            redCircles[rocketsIndex].SetActive(true);
            rockets[rocketsIndex].SetActive(true);
            timer = 0;
        }

        if (disableScriptTimer >= 20)
        {
            this.enabled = false;
            trailerCrashScript.enabled = true;
        }

        if (disableScriptTimer >= 10 && !playMidpointAudio)
        {
            DialogScript.PlayDialog(12);
            playMidpointAudio = true;
        }
    }
}
