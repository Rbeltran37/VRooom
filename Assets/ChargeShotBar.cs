using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class ChargeShotBar : MonoBehaviour
{
    public InputActionProperty trigger;
    private bool triggerPressed;
    private bool success;
    public gun gunScript;

    void OnDisable()
    {
        success = false;
    }

    void Update()
    {
        float triggerValue = trigger.action.ReadValue<float>();

        if (triggerValue > 0.3) {
            if (success) {
                gunScript.ShootChargedShot();
            }
            else {
                gunScript.FailedChargedShot();
            }
            gameObject.SetActive(false);
        }
    }

    public void IndicatorInSuccessArea() {
        success = true;
    }

    public void IndicatorOutOfSuccessArea() {
        success = false;
    }

    public void OutOfTime() {
        gunScript.FailedChargedShot();
        gameObject.SetActive(false);
    }
}
