using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PauseMenu : MonoBehaviour
{
    public InputActionProperty leftMenuButton;
    public bool paused;
    private bool menuButtonPressed;
    public GameObject pauseMenu;
    public Transform playerLocation;
    public GameObject leftRaycastHand;
    public GameObject righttRaycastHand;
    void Update()
    {
        float leftMenuValue = leftMenuButton.action.ReadValue<float>();

        if (!menuButtonPressed && leftMenuValue > .5)
        {
            PausedMenu();
            menuButtonPressed = true;
        }
        
        if (leftMenuValue == 0)
        {
            menuButtonPressed = false;
        }
    }
    
    void PausedMenu()
    {
        paused = !paused;

        if (paused)
        {
            pauseMenu.transform.position = new Vector3(playerLocation.position.x, pauseMenu.transform.position.y, pauseMenu.transform.position.z);
            AudioListener.pause = true;
            leftRaycastHand.SetActive(true);
            righttRaycastHand.SetActive(true);
            Time.timeScale = 0;
            pauseMenu.SetActive(true);
        }

        if (!paused)
        {
            pauseMenu.SetActive(false);
            leftRaycastHand.SetActive(false);
            righttRaycastHand.SetActive(false);
            AudioListener.pause = false;
            Time.timeScale = 1;
        }
    }
}
