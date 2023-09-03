using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TruckEnemy : MonoBehaviour
{
    public EnemyLaserPool enemyLaserPoolScript;
    public Transform bulletSpawnPoint;
    private float timer;
    public Transform shootTarget;
    public float speed;
    private Vector3 position1 = new(3, .47f, -35.64f);
    private Vector3 position2 = new(30, .47f, -35.64f);
    private Vector3 moveToPosition = new(3, .47f, -35.64f);
    public GameObject[] bullets;
    private int bulletsIndex;

    void Update()
    {
        timer += Time.deltaTime;

        var step = speed * Time.deltaTime;
        shootTarget.position = Vector3.MoveTowards(shootTarget.position, moveToPosition, step);

        if (Vector3.Distance(shootTarget.position, moveToPosition) < 0.001f)
        {
            if (moveToPosition == position1)
            {
                moveToPosition = position2;
            }
            else
            {
                moveToPosition = position1;
            }
        }

        bulletSpawnPoint.transform.LookAt(shootTarget);

        if (timer >= .25f)
        {
            bullets[bulletsIndex].transform.SetPositionAndRotation(bulletSpawnPoint.position, bulletSpawnPoint.rotation);
            bullets[bulletsIndex].SetActive(true);

            bulletsIndex++;

            if (bulletsIndex >= bullets.Length)
            {
                bulletsIndex = 0;
            }

            timer = 0;
        }
    }
}
