using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyLaserPool : MonoBehaviour
{
    public GameObject[] lasers;
    private int laserIndex;

    public void ShootLaser(Transform laserSpawnPoint, string typeOfShot)
    {
        if (laserIndex >= lasers.Length)
        {
            laserIndex = 0;
        }

        switch (typeOfShot)
        {
            case "straight shot":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y, laserSpawnPoint.eulerAngles.z);
                break;
            case "right shot":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y + 10, laserSpawnPoint.eulerAngles.z);
                break;
            case "left shot":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y - 10, laserSpawnPoint.eulerAngles.z);
                break;
            case "random shot":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y - Random.Range(-10.0f, 10.0f), laserSpawnPoint.eulerAngles.z);
                break;
            case "Akira Shot Right 0":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y, laserSpawnPoint.eulerAngles.z+3.5f);
                break;
            case "Akira Shot Right 1":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y, laserSpawnPoint.eulerAngles.z);
                break;
            case "Akira Shot Right 2":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y, laserSpawnPoint.eulerAngles.z-3.5f);
                break;
            case "Akira Shot Right 3":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y, laserSpawnPoint.eulerAngles.z-7);
                break;
            case "Akira Shot Right 4":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y, laserSpawnPoint.eulerAngles.z-10.5f);
                break;
            case "Akira Shot Right 5":
                lasers[laserIndex].transform.rotation = Quaternion.Euler(laserSpawnPoint.eulerAngles.x + 90, laserSpawnPoint.eulerAngles.y, laserSpawnPoint.eulerAngles.z-14f);
                break;
        }

        lasers[laserIndex].transform.position = laserSpawnPoint.position;
        lasers[laserIndex].SetActive(true);
        laserIndex++;
    }
}
