using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explosion : MonoBehaviour
{
    public Transform redCircle;
    public GameObject explosion;
    private float timer = 0;
    public float timeForRocketHit;
    public Transform rocketSpawnPoint;
    public GameObject rocket;
    // Start is called before the first frame update
    void OnEnable()
    {
        timer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        redCircle.localScale = new Vector3(Mathf.Lerp(0f, .78f, timer/timeForRocketHit), Mathf.Lerp(0f, .78f, timer/timeForRocketHit), 1);
        rocket.transform.position = new Vector3(Mathf.Lerp(rocketSpawnPoint.position.x, transform.position.x, timer/timeForRocketHit), Mathf.Lerp(rocketSpawnPoint.position.y, transform.position.y, timer/timeForRocketHit), Mathf.Lerp(rocketSpawnPoint.position.z, transform.position.z, timer/timeForRocketHit));

        if (redCircle.localScale.x == .78f)
        {
            explosion.SetActive(true);
            rocket.SetActive(false);
            gameObject.SetActive(false);
        }
    }
}
