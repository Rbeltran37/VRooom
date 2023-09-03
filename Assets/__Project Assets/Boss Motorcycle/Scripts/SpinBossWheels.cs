using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpinBossWheels : MonoBehaviour
{
    public GameObject[] motorcycleWheels;
    public float wheelRotateSpeed;
    void Update()
    {
        foreach (GameObject wheel in motorcycleWheels) {
            wheel.transform.Rotate(Vector3.right * wheelRotateSpeed * Time.deltaTime);
        }
    }
}
