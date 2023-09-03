using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class MotorcycleGun : MonoBehaviour
{
    public XRBaseController rightController;
    public XRBaseController leftController;
    public InputActionProperty rightTrigger;
    public InputActionProperty leftTrigger;
    private bool triggerPressed;
    public AudioSource gunShot;
    public GameObject[] lasers;
    private int laserIndex;
    public Transform laserSpawnPoint;
    public Transform laserSpawnPoint2;
    public float rateOfFire;
    private float timer;
    public bool canShoot;
    public bool passedTutorial;

    void Update()
    {
        float rightTriggerValue = rightTrigger.action.ReadValue<float>();
        float leftTriggerValue = leftTrigger.action.ReadValue<float>();

        timer += Time.deltaTime;

        if (canShoot && (rightTriggerValue > 0.2 || leftTriggerValue > 0.2) && timer > rateOfFire)
        {
            timer = 0;
            gunShot.Play();
            rightController.SendHapticImpulse(0.3f, 0.1f);
            leftController.SendHapticImpulse(0.3f, 0.1f);

            if (laserIndex >= lasers.Length)
            {
                laserIndex = 0;
            }

            lasers[laserIndex].transform.position = laserSpawnPoint.position;
            lasers[laserIndex].SetActive(true);
            laserIndex++;

            if (laserIndex >= lasers.Length)
            {
                laserIndex = 0;
            }

            lasers[laserIndex].transform.position = laserSpawnPoint2.position;
            lasers[laserIndex].SetActive(true);
            laserIndex++;
        }
    }
}
