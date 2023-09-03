using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.XR.Oculus;

public class Framerate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Performance.TrySetDisplayRefreshRate(90f);
    }
}
