using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OculusMenu : MonoBehaviour
{
    private bool _paused;
 
    [ContextMenu("Pause ON")]  private void PauseON() => Pause(true);
    [ContextMenu("Pause OFF")] private void PauseOFF() => Pause(false);
 
    public void OnApplicationPause(bool pauseStatus)
    {
        // https://docs.unity3d.com/ScriptReference/MonoBehaviour.OnApplicationPause.html
        //Debug.Log($"OnApplicationPause received {pauseStatus}");
        Pause(pauseStatus);
    }
 
    void OnApplicationFocus(bool hasFocus)
    {
        // https://docs.unity3d.com/ScriptReference/MonoBehaviour.OnApplicationFocus.html
        //Debug.Log($"OnApplicationFocus received {hasFocus}");
   
        // honestly do not want this to require Game window has focus in editor
        #if !UNITY_EDITOR
        Pause(!hasFocus);
        #endif
    }
 
    public void Pause(bool pauseStatus)
    {
        if (pauseStatus == true)
        {
            Time.timeScale = 0;
            AudioListener.pause = true;
        }
        else
        {
            Time.timeScale = 1;
            AudioListener.pause = false;
        }
        _paused = pauseStatus;
        //Debug.Log($"Pause: {pauseStatus}");
    }
}
