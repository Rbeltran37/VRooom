using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class TakeDownBoss : MonoBehaviour
{
    public InputActionProperty moveStick;
    public Animator motorcycleAnimator;
    public Animator cameraOffset;
    private bool canSlide = true;
    public GameObject boss;
    public float bossSpeed;
    private Vector3 bossdestination = new Vector3(16.3f, 0, -34.2f);
    private bool movingBoss1;
    private bool movingBoss2;
    public Animator bossBikeAnimation;
    public Animator bossAnimation;
    public GameObject bossEnemy;
    public GameObject[] roads;
    public Dialog dialogScript;
    public GameOver gameOverScript;
    public XRBaseController rightController;
    public XRBaseController leftController;
    public AudioSource slidingAudio;
    public GameObject slowDust;
    public GameObject fastDust;

    void Start()
    {
        dialogScript.PlayDialog(18);
    }

    void Update()
    {
        if (canSlide)
        {
            SlideIntoBoss();
        }

        if (movingBoss1)
        {
            MoveBoss1();
        }

        if(movingBoss2)
        {
            MoveBoss2();
        }
    }

    void SlideIntoBoss()
    {
        Vector2 xAxisValue = moveStick.action.ReadValue<Vector2>();

        if (xAxisValue.y < -.7)
        {
            canSlide = false;
            movingBoss1 = true;
            motorcycleAnimator.Play("Motorcycle Slide");
            cameraOffset.Play("Sliding");
            slidingAudio.Play();
        }
    }

    void MoveBoss1()
    {
        boss.transform.position = Vector3.MoveTowards(boss.transform.position, bossdestination, bossSpeed * Time.deltaTime);

        if (Vector3.Distance(boss.transform.position, bossdestination) < 0.1f)
        {
            movingBoss1 = false;
            movingBoss2 = true;
            bossBikeAnimation.Play("fall");
            bossdestination = new Vector3(16.3f, 0, 0);
            bossSpeed = 1;
            Invoke("BossFallAnimation", 2);

            rightController.SendHapticImpulse(0.9f, 0.5f);
            leftController.SendHapticImpulse(0.9f, 0.5f);
        }
    }

    void MoveBoss2()
    {
        boss.transform.position = Vector3.MoveTowards(boss.transform.position, bossdestination, bossSpeed * Time.deltaTime);

        if (Vector3.Distance(boss.transform.position, bossdestination) < 0.1f)
        {
            movingBoss2 = false;
        }
    }

    void BossFallAnimation()
    {
        bossSpeed = 25;
        ChangeRoadSpeed();
        Invoke("DisableScript", 1.5f);
        slowDust.SetActive(true);
        fastDust.SetActive(false);
    }

    void BossRoll()
    {
        bossAnimation.Play("Roll");
    }

    void ChangeRoadSpeed()
    {
        foreach (GameObject road in roads)
        {
            road.GetComponent<MoveRoad>().speed = 0;
        }
    }

    void DisableScript()
    {
        this.enabled = false;
        gameOverScript.enabled = true;
    }
}
