using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class StartGame : MonoBehaviour
{
    public XRBaseController leftController, rightController;
    public InputActionProperty leftGrip;
    public InputActionProperty rightGrip;
    private float hapticStrength;
    public AudioSource engineRev;
    private bool audioClipIsPlaying;
    public ShakeObject shakeObject;
    private float timer = 5;
    public Dialog DialogScript;
    public MotorcycleTakeoff motorcycleTakeoffScript;
    public GameObject slowDust;
    public AudioSource oncomingTrafficAudio;

    void Update()
    {
        float leftGripValue = leftGrip.action.ReadValue<float>();
        float rightGripValue = rightGrip.action.ReadValue<float>();
        timer += Time.deltaTime;

        if (timer >= 10)
        {
            DialogScript.PlayDialog(0);
            timer = 0;
        }

        if (leftGripValue >= 0.5f && rightGripValue >= 0.5f)
        {
            if (!audioClipIsPlaying)
            {
                DialogScript.femaleAudioSource.Stop();
                timer = 0;
                slowDust.SetActive(false);
                audioClipIsPlaying = true;
                engineRev.Play();
                shakeObject.enabled = true;
            }
        }

        if (engineRev.isPlaying)
        {
            hapticStrength += Time.deltaTime / 5;
            leftController.SendHapticImpulse(hapticStrength, 0.1f);
            rightController.SendHapticImpulse(hapticStrength, 0.1f);
        }

        if (!engineRev.isPlaying && audioClipIsPlaying)
        {
            motorcycleTakeoffScript.enabled = true;
            this.enabled = false;
            oncomingTrafficAudio.Stop();
        }
    }
}
