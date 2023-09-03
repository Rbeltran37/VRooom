using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dialog : MonoBehaviour
{
    public Animator femalePortraitAnimator;
    public AudioSource femaleAudioSource;
    public AudioClip[] audioClips;
    public bool audioPlaying;
    void Update()
    {
        if(audioPlaying && !femaleAudioSource.isPlaying) {
            femalePortraitAnimator.Play("Fade Portrait Out");
            audioPlaying = false;
        }
    }

    public void PlayDialog(int audioClipsIndex) {
        femaleAudioSource.clip = audioClips[audioClipsIndex];
        femalePortraitAnimator.Play("Fade Portrait In");
        femaleAudioSource.Play();
        audioPlaying = true;
    }
}
