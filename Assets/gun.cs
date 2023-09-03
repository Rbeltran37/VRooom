using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class gun : MonoBehaviour
{
    public XRBaseController rightController;
    public InputActionProperty trigger;
    public GameObject bullet;
    public GameObject homingLaser;
    public Transform spawnPoint;
    private bool triggerPressed;
    public AudioSource gunShot;
    public Transform hand;
    private float rotationOffset;
    private float timer;
    public float range;
    private Vector3 directionOfRayCast = Vector3.left;
    public LineRenderer lineRender;
    private RaycastHit hit;
    public LayerMask layersToHit;
    public GameObject[] enemiesTargeted;
    private int enemiesTargetedIndex;
    public ParticleSystem chargingParticles;
    private bool chargeShot;
    private int numberOfTargets;
    private bool chargeShotInProgress;
    public GameObject chargeShotBar;
    public AudioSource lockOnAudio;
    public AudioSource chargeShotAudio;
    void Update()
    {
        float triggerValue = trigger.action.ReadValue<float>();

        if (triggerValue > 0.3 && !triggerPressed && !chargeShotInProgress)
        {
            triggerPressed = true;
            gunShot.Play();
            rightController.SendHapticImpulse(0.3f, 0.1f);
            GameObject spawnedBullet = Instantiate(bullet);
            spawnedBullet.transform.position = spawnPoint.position;
            spawnedBullet.transform.rotation = Quaternion.Euler(hand.transform.eulerAngles.x + rotationOffset, hand.transform.eulerAngles.y, hand.transform.eulerAngles.z);
            spawnedBullet.transform.Rotate(21.1f, 0.0f, 0.0f);
        }

        if (triggerPressed && !chargeShotInProgress)
        {
            timer += Time.deltaTime;
            if (timer > 0.5f)
            {
                chargeShot = true;
                rightController.SendHapticImpulse(0.5f, 0.1f);

                if (chargingParticles.isPlaying == false)
                {
                    chargingParticles.Play();
                }

                Ray theRay = new Ray(spawnPoint.position, spawnPoint.TransformDirection(directionOfRayCast * range));

                if (Physics.Raycast(theRay, out hit, 400, layersToHit))
                {
                    if (hit.transform.gameObject.GetComponent<EnableTarget>().TargetIndicator.activeSelf == false)
                    {
                        lockOnAudio.Play();
                        enemiesTargeted[enemiesTargetedIndex] = hit.transform.gameObject.GetComponent<EnableTarget>().TargetIndicator;
                        enemiesTargeted[enemiesTargetedIndex].SetActive(true);
                        enemiesTargetedIndex++;
                    }
                    //lineRender.enabled = true;
                    //lineRender.SetPosition(0, spawnPoint.position);
                    //lineRender.SetPosition(1, hit.point);
                    //Debug.DrawRay(spawnPoint.position, hit.point, Color.green);
                    //Debug.Log("HIT!");
                }
            }
        }

        if (triggerValue <= .3 && !chargeShotInProgress)
        {
            triggerPressed = false;
            //lineRender.enabled = false;
            timer = 0;

            if (chargeShot)
            {
                chargeShotInProgress = true;
                if (enemiesTargeted[0] == null) {
                    FailedChargedShot();
                }
                else {
                    chargeShotBar.SetActive(true);
                }
            }
        }
    }

    public void ShootChargedShot()
    {
        rightController.SendHapticImpulse(0.9f, 0.1f);
        chargeShotAudio.Play();
        for (int i = 0; i < enemiesTargeted.Length; i++)
        {
            if (enemiesTargeted[i] != null)
            {
                enemiesTargeted[i].SetActive(false);
                GameObject spawnedHomingLaser = Instantiate(homingLaser);
                spawnedHomingLaser.transform.position = spawnPoint.position;
                spawnedHomingLaser.GetComponent<HomingLaser>().target = enemiesTargeted[i].transform;
                enemiesTargeted[i] = null;
            }
        }
        enemiesTargetedIndex = 0;
        chargingParticles.Stop();
        chargeShot = false;
        triggerPressed = true;
        chargeShotInProgress = false;
    }

    public void FailedChargedShot()
    {
        //rightController.SendHapticImpulse(0.9f, 0.1f);
        for (int i = 0; i < enemiesTargeted.Length; i++)
        {
            if (enemiesTargeted[i] != null)
            {
                enemiesTargeted[i].SetActive(false);
                //GameObject spawnedHomingLaser = Instantiate(homingLaser);
                //spawnedHomingLaser.transform.position = spawnPoint.position;
                //spawnedHomingLaser.GetComponent<HomingLaser>().target = enemiesTargeted[i].transform;
                enemiesTargeted[i] = null;
            }
        }
        enemiesTargetedIndex = 0;
        chargingParticles.Stop();
        chargeShot = false;
        triggerPressed = true;
        chargeShotInProgress = false;
    }
}
