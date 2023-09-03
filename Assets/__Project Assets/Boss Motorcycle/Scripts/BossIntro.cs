using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossIntro : MonoBehaviour
{
    public bool isMoving = true;
    public float speed;
    private Vector3 destination = new(12, 0, -30);
    private int destinationNumber = 1;
    public Animator animator;
    public PlayerMoveTutorial playerMoveTutorialScript;

    void Update()
    {
        if (isMoving)
        {
            transform.position = Vector3.MoveTowards(transform.position, destination, speed * Time.deltaTime);

            if (Vector3.Distance(transform.position, destination) < 0.1f)
            {
                if (destinationNumber == 1)
                {
                    isMoving = false;
                    Invoke("SecondPosition", 1.5f);
                }

                if (destinationNumber == 2)
                {
                    this.enabled = false;
                    playerMoveTutorialScript.enabled = true;
                    animator.SetBool("Lean Right", false);
                }
                destinationNumber++;
            }
        }
    }

    void SecondPosition()
    {
        destination = new Vector3(16.5f, 0, -8);
        speed = 20;
        isMoving = true;
        animator.SetBool("Lean Right", true);
    }
}
