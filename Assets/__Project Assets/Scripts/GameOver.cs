using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameOver : MonoBehaviour
{
    public Dialog dialogScript;
    public TMP_Text missionComplete;
    public TMP_Text damageTaken;
    public TMP_Text hitsTaken;
    public PlayerHealth playerHealthScript;
    public GameObject background;
    public GameObject buttons;
    public GameObject LeftraycastHand;
    public GameObject rightraycastHand;
    public PauseMenu pauseMenuScript;
    void Start()
    {
        pauseMenuScript.enabled = false;
        dialogScript.PlayDialog(19);
        Invoke("MissionCompleteText", 3f);
        Invoke("PostStats", 3.5f);
        Invoke("EnableButtons", 4f);
    }

    void MissionCompleteText()
    {
        background.SetActive(true);
        missionComplete.enabled = true;
    }

    void PostStats()
    {
        damageTaken.enabled = true;
        hitsTaken.SetText(playerHealthScript.timesHit.ToString());
        hitsTaken.enabled = true;
    }

    void EnableButtons()
    {
        buttons.SetActive(true);
        LeftraycastHand.SetActive(true);
        rightraycastHand.SetActive(true);
    }
}
