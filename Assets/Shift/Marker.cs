using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Marker : MonoBehaviour
{
    public DragRace dragRaceScript;
    // Start is called before the first frame update
    public void InSuccessArea()
    {
        dragRaceScript.inSuccessArea = true;
    }

    public void InFailArea()
    {
        dragRaceScript.inSuccessArea = false;
    }

    public void OutOfTime()
    {
        dragRaceScript.Failed();
    }
}
