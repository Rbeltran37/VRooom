using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tank : MonoBehaviour
{
    public GameObject[] tankBullets;
    public Transform bulletSpawnPoint;
    public Transform[] firstLine;
    public float timer;
    private bool shootAttack;
    private bool doneSpawningLine;
    private int spawnRow;
    private int startOfIndex;
    private int endOfIndex = 14;
    public float tankSpeed;
    private Vector3 destination = new Vector3(9.5f, -0.36f, 0.92f);
    private Vector3 leftXBound = new Vector3(9.5f, -0.36f, 0.92f);
    private Vector3 rightXBound = new Vector3(27.5f, -0.36f, 0.92f);
    private Vector3 preMoveToPlayerPos;
    private bool movingSideways = true;
    private bool moveTowardsPlayer;
    private bool moveAwayPlayer;
    private float timeUntilChargePlayer;
    public int health;
    private bool moveAttack;
    private bool switchToMoveAttackInProgress;
    private Vector3 endPosition = new Vector3(18.5f, -0.36f, .92f);
    private bool movingToStartPosition = true;
    public GameObject explosion;
    // Start is called before the first frame update
    void Start()
    {
        timeUntilChargePlayer = Random.Range(3f, 6f);
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;

        if (movingToStartPosition)
        {
            moveToStartingPositiob();
        }

        if (shootAttack)
        {
            spawnFirstLine();
        }

        if (switchToMoveAttackInProgress)
        {
            switchToMoveAttack();
        }

        if (moveAttack)
        {
            TankMoving();
        }
    }

    void spawnFirstLine()
    {
        if (!doneSpawningLine)
        {
            for (int i = startOfIndex; i < endOfIndex; i++)
            {
                tankBullets[i].SetActive(true);
                doneSpawningLine = true;
            }
        }

        for (int i = startOfIndex; i < endOfIndex; i++)
        {
            tankBullets[i].transform.position = new Vector3(Mathf.Lerp(bulletSpawnPoint.position.x, firstLine[i].position.x, timer / 2), Mathf.Lerp(bulletSpawnPoint.position.y, firstLine[i].position.y, timer / 2), Mathf.Lerp(bulletSpawnPoint.position.z, firstLine[i].position.z, timer / 2));
        }

        if (timer >= 2)
        {
            for (int i = startOfIndex; i < endOfIndex; i++)
            {
                tankBullets[i].GetComponent<TankBullet>().enabled = true;
            }

            if (spawnRow < 5)
            {
                timer = 0;
                doneSpawningLine = false;
                spawnRow++;
                startOfIndex += 14;
                endOfIndex += 14;
            }
            else
            {
                shootAttack = false;
                switchToMoveAttackInProgress = true;
                timer = 0;
            }
        }
    }

    void switchToMoveAttack()
    {
        if (timer >= 12)
        {
            switchToMoveAttackInProgress = false;
            moveAttack = true;
            timer = 0;
        }
    }

    void TankMoving()
    {
        transform.position = Vector3.MoveTowards(transform.position, destination, tankSpeed * Time.deltaTime);

        if (movingSideways)
        {
            tankSpeed = 30;

            if (Vector3.Distance(transform.position, destination) < 0.1f)
            {
                destination = (destination == leftXBound) ? rightXBound : leftXBound;
            }

            if (timer >= timeUntilChargePlayer)
            {
                preMoveToPlayerPos = transform.position;
                movingSideways = false;
                moveTowardsPlayer = true;
            }
        }

        if (moveTowardsPlayer)
        {
            tankSpeed = 35;
            destination = new Vector3(transform.position.x, transform.position.y, -30f);

            if (Vector3.Distance(transform.position, new Vector3(transform.position.x, transform.position.y, -30f)) < 0.1f)
            {
                destination = preMoveToPlayerPos;
                moveAwayPlayer = true;
                moveTowardsPlayer = false;
            }
        }

        if (moveAwayPlayer)
        {
            tankSpeed = 35;

            if (Vector3.Distance(transform.position, preMoveToPlayerPos) < 0.1f)
            {
                movingSideways = true;
                moveAwayPlayer = false;
                timer = 0;
            }
        }
    }

    void moveToStartingPositiob()
    {
        tankSpeed = 150;
        transform.position = Vector3.MoveTowards(transform.position, endPosition, tankSpeed * Time.deltaTime);

        if (Vector3.Distance(transform.position, endPosition) < 0.1f)
        {
            tankSpeed = 35;
            movingToStartPosition = false;
            shootAttack = true;
        }
    }

    void Hit()
    {
        health--;

        if (health <= 0)
        {
            explosion.transform.position = transform.position;
            explosion.SetActive(true);
            gameObject.SetActive(false);
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player Laser")
        {
            Hit();
            other.gameObject.SetActive(false);
        }

        if (other.tag == "Motorcycle")
        {
            other.GetComponent<PlayerHealth>().Hit();
        }
    }
}
