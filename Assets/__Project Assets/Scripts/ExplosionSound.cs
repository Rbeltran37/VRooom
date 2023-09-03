using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplosionSound : MonoBehaviour
{
    public AudioSource explosionAudio;
    // Start is called before the first frame update
    void OnEnable()
    {
        explosionAudio.Play();
    }
}
