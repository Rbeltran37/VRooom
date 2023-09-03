using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MotorcycleTakeoff : MonoBehaviour
{
    public AudioSource engineBoom;
    public AudioSource backgroundMusic;
    private bool audioClipIsPlaying;
    public MoveRoad moveRoadScript1;
    public MoveRoad moveRoadScript2;
    public MoveRoad moveRoadScript3;
    public MoveRoad moveRoadScript4;
    public MoveTitle moveTitleScript;
    public GameObject fastDust;
    public Dialog dialogScript;
    public GameObject bossOnMotorcycle;

    void Update()
    {
        if(!audioClipIsPlaying) {
            StartCoroutine(MoveRoads());
            engineBoom.Play();
            backgroundMusic.Play();
            audioClipIsPlaying = true;
        }

        if(audioClipIsPlaying && !engineBoom.isPlaying) {
            this.enabled = false;
        }
    }

    IEnumerator MoveRoads() {
        yield return new WaitForSeconds(0.5f);
        moveRoadScript1.enabled = true;
        moveRoadScript2.enabled = true;
        moveRoadScript3.enabled = true;
        moveRoadScript4.enabled = true;
        fastDust.SetActive(true);
        moveTitleScript.enabled = true;
        yield return new WaitForSeconds(3f);
        dialogScript.PlayDialog(1);
        bossOnMotorcycle.SetActive(true);
    }
}
