using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaveThroughContruction : MonoBehaviour
{
    public GameObject[] barricadesPicked;
    public int barricadesPickedIndex;
    public SpawnConstruction spawnConstructionScript;
    private Vector3 destination;
    public float speed;
    public Animator animator;
    public bool isSliding;
    public FirstEnemyWaves firstEnemyWavesScript;
    private bool firstBaracade = true;

    void Update()
    {
        if (firstBaracade)
        {
            if (barricadesPicked[barricadesPickedIndex] != null && barricadesPicked[barricadesPickedIndex].transform.position.z <= 220)
            {
                destination = new Vector3(barricadesPicked[barricadesPickedIndex].transform.position.x, transform.position.y, transform.position.z);
                transform.position = Vector3.MoveTowards(transform.position, destination, speed * Time.deltaTime);

                if (barricadesPicked[barricadesPickedIndex].transform.position.x > transform.position.x)
                {
                    animator.SetBool("Lean Right", true);
                }

                if (barricadesPicked[barricadesPickedIndex].transform.position.x < transform.position.x)
                {
                    animator.SetBool("Lean Left", true);
                }

                if (Vector3.Distance(transform.position, destination) < 0.1f)
                {
                    animator.SetBool("Lean Right", false);
                    animator.SetBool("Lean Left", false);
                    firstBaracade = false;
                }
            }
        }

        if (barricadesPicked[barricadesPickedIndex] != null && barricadesPicked[barricadesPickedIndex].transform.position.z <= 120)
        {
            destination = new Vector3(barricadesPicked[barricadesPickedIndex].transform.position.x, transform.position.y, transform.position.z);
            transform.position = Vector3.MoveTowards(transform.position, destination, speed * Time.deltaTime);

            if (Vector3.Distance(transform.position, destination) < 0.1f)
            {
                animator.SetBool("Lean Right", false);
                animator.SetBool("Lean Left", false);
            }

            if (barricadesPicked[barricadesPickedIndex].transform.position.z < 25)
            {
                animator.SetBool("Slide", true);
            }
        }

        if (barricadesPicked[barricadesPickedIndex] != null && barricadesPicked[barricadesPickedIndex].transform.position.z <= -20)
        {
            animator.SetBool("Slide", false);
            barricadesPickedIndex++;

            if (barricadesPicked[barricadesPickedIndex] != null)
            {
                if (barricadesPicked[barricadesPickedIndex].transform.position.x > transform.position.x)
                {
                    animator.SetBool("Lean Right", true);
                }

                if (barricadesPicked[barricadesPickedIndex].transform.position.x < transform.position.x)
                {
                    animator.SetBool("Lean Left", true);
                }
            }
        }

        if (barricadesPickedIndex > 1 && barricadesPicked[barricadesPickedIndex] == null)
        {
            this.enabled = false;
            firstEnemyWavesScript.enabled = true;
        }
    }
}
