using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossDialog : MonoBehaviour
{
    public Animator bossPortraitAnimator;
    public AudioSource bossAudioSource;
    public AudioClip[] audioClips;
    public bool audioPlaying;
    public bool triggerDialog;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(audioPlaying && !bossAudioSource.isPlaying) {
            bossPortraitAnimator.Play("Fade Portrait Out");
            audioPlaying = false;
        }

        if(triggerDialog) {
            Dialog1();
        }
    }

    public void Dialog1() {
        bossAudioSource.clip = audioClips[0];
        bossPortraitAnimator.Play("Fade Portrait In");
        bossAudioSource.Play();
        audioPlaying = true;

        triggerDialog = false;
    }
}
