using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class DragRace : MonoBehaviour
{
    public GameObject shifter;
    public GameObject speedometer;
    public InputActionProperty rightGripButton;
    private bool rightGripButtonPushed;
    public InputActionProperty leftGripButton;
    private bool leftGripButtonPushed;
    public Animator shifterAnimator;
    public bool inSuccessArea;
    private int gear = 1;
    public GameObject successText;
    public GameObject failText;
    private bool atStartingPosition;
    public GameObject player;
    public float playerSpeed;
    private Vector3 startingDestination = new Vector3(16.3f, 0, -35.7f);
    public MoveMotercycle moveMotercycleScript;
    public MotorcycleGun motorcycleGunScript;
    public Dialog dialogScript;
    public GameObject autopilotText;
    public GameObject boss;
    private bool moveBoss = true;
    public float bossSpeed;
    public Vector3 bossDestination = new Vector3 (16.5f, 0, 295);
    public bool canPushGripButton;
    public GameObject[] roads;
    public AudioSource boost;
    public AudioSource failedBoost;
    public TakeDownBoss takeDownBossScript;
    public Animator motorcycleAnimator;

    void Start()
    {
        autopilotText.SetActive(true);
        speedometer.SetActive(true);
    }

    void Update()
    {
        if (!atStartingPosition)
        {
            motorcycleGunScript.enabled = false;
            moveMotercycleScript.enabled = false;
            motorcycleAnimator.SetFloat("Move Stick", 0);
            moveToStartingPosition();
        }

        if (moveBoss)
        {
            moveBossToDestination();
        }

        float rightGripValue = rightGripButton.action.ReadValue<float>();
        float leftGripValue = leftGripButton.action.ReadValue<float>();

        if ((rightGripValue > 0.3f && !rightGripButtonPushed || leftGripValue > 0.3f && !leftGripButtonPushed) && canPushGripButton)
        {
            rightGripButtonPushed = true;
            leftGripButtonPushed = true;
            canPushGripButton = false;

            if (inSuccessArea)
            {
                boost.Play();
                successText.SetActive(true);
                gear++;
                moveBoss = true;
                ChangeGears();
            }

            else
            {
                Failed();
            }
        }

        if (rightGripValue <= 0.3f || leftGripValue <= 0.3f)
        {
            rightGripButtonPushed = false;
            leftGripButtonPushed = false;
        }
    }

    void moveToStartingPosition()
    {
        player.transform.position = Vector3.MoveTowards(player.transform.position, startingDestination, playerSpeed * Time.deltaTime);

        if (Vector3.Distance(player.transform.position, startingDestination) < 0.1f)
        {
            atStartingPosition = true;
            dialogScript.PlayDialog(17);
            Invoke("ChangeGears", 3.5f);
        }
    }

    void moveBossToDestination()
    {
        boss.transform.position = Vector3.MoveTowards(boss.transform.position, bossDestination, bossSpeed * Time.deltaTime);

        if (Vector3.Distance(boss.transform.position, bossDestination) < 0.1f)
        {
            moveBoss = false;
        }
    }

    public void ChangeGears()
    {
        switch (gear)
        {
            case 1:
                shifterAnimator.speed = .1f;
                Invoke("StartNextGear", 3);
                break;
            case 2:
                shifterAnimator.speed = .2f;
                Invoke("StartNextGear", 3);
                bossDestination = new Vector3 (16.3f, 0, 225);
                ChangeRoadSpeed();
                break;
            case 3:
                shifterAnimator.speed = .4f;
                Invoke("StartNextGear", 3);
                bossDestination = new Vector3 (16.3f, 0, 175);
                ChangeRoadSpeed();
                break;
            case 4:
                shifterAnimator.speed = .6f;
                Invoke("StartNextGear", 3);
                bossDestination = new Vector3 (16.3f, 0, 125);
                ChangeRoadSpeed();
                break;
            case 5:
                shifterAnimator.speed = .8f;
                Invoke("StartNextGear", 3);
                bossDestination = new Vector3 (16.3f, 0, 75);
                ChangeRoadSpeed();
                break;
            case 6:
                shifterAnimator.speed = 1f;
                Invoke("StartNextGear", 3);
                bossDestination = new Vector3 (16.3f, 0, 25);
                ChangeRoadSpeed();
                break;
            case 7:
                speedometer.SetActive(false);
                autopilotText.SetActive(false);
                bossDestination = new Vector3 (16.3f, 0, -25);
                ChangeRoadSpeed();
                Invoke("DisableScript", 2);
                break;
        }
        inSuccessArea = false;
        shifter.SetActive(false);
    }

    public void Failed()
    {
        failedBoost.Play();
        failText.SetActive(true);
        shifter.SetActive(false);
        ChangeGears();
    }

    void StartNextGear()
    {
        shifter.SetActive(true);
        canPushGripButton = true;
    }

    void ChangeRoadSpeed()
    {
        foreach (GameObject road in roads)
        {
            road.GetComponent<MoveRoad>().speed += 10;
        }
    }

    void DisableScript()
    {
        this.enabled = false;
        takeDownBossScript.enabled = true;
    }
}
