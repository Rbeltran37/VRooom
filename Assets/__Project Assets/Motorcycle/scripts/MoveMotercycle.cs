using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class MoveMotercycle : MonoBehaviour
{
    public CharacterController controller;
    public InputActionProperty moveStick;
    public float playerSpeed = 5.0f;
    public Animator motorcycleAnimator;
    public Animator cameraOffset;
    private bool canMove = true;
    public bool sliding;
    public ParticleSystem sparks;
    public MotorcycleGun motorcycleGunScript;
    public AudioSource slidingAudio;
    void Update()
    {
        Vector2 xAxisValue = moveStick.action.ReadValue<Vector2>();

        if (canMove)
        {
            Vector3 move = new Vector3(xAxisValue.x, 0, 0);
            controller.Move(move * Time.deltaTime * playerSpeed);
            motorcycleAnimator.SetFloat("Move Stick", xAxisValue.x);
        }

        if (xAxisValue.y < -.9 && !sliding)
        {
            canMove = false;
            sliding = true;
            motorcycleAnimator.Play("Motorcycle Slide");
            cameraOffset.Play("Sliding");
            motorcycleGunScript.canShoot = false;
            slidingAudio.Play();
        }
    }

    public void FinishedSliding()
    {
        motorcycleAnimator.StopPlayback();
        canMove = true;
        sliding = false;
        motorcycleGunScript.canShoot = true;
        slidingAudio.Stop();
    }

    public void PlaySparks()
    {
        sparks.Play();
    }

    public void StopSparks()
    {
        sparks.Stop();
    }
}
