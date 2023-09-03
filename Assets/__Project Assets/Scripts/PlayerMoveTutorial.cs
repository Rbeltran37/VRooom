using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMoveTutorial : MonoBehaviour
{
    public Dialog dialogScript;
    public MoveMotercycle moveMotercycleScript;
    public Transform player;
    private Vector3 playerStartingPosition;
    private bool playerMoved;
    private bool playerSlide;
    public SpawnConstruction spawnConstructionScript;
    // Start is called before the first frame update
    void Start()
    {
        playerStartingPosition = player.position;
        moveMotercycleScript.enabled = true;
        dialogScript.PlayDialog(2);
    }

    // Update is called once per frame
    void Update()
    {
        if (!playerMoved)
        {
            if (Vector3.Distance(player.position, playerStartingPosition) > 2f)
            {
                dialogScript.PlayDialog(3);
                playerMoved = true;
            }
        }

        if(playerMoved && !playerSlide)
        {
            if (moveMotercycleScript.sliding == true)
            {
                playerSlide = true;
                dialogScript.PlayDialog(4);
                spawnConstructionScript.enabled = true;
                this.enabled = false;
            }
        }
    }
}
