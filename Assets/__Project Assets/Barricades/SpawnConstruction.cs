using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnConstruction : MonoBehaviour
{
    public GameObject[] barricades;
    public GameObject[] concreteBlocks;
    public Transform[] barricadeSpawnPoints;
    public Transform[] concreteBlockSpawnPoints;
    private int barricadesIndex;
    private int concreteBlocksIndex;
    private float timer;
    public float timeBetweenBarricadeLines;
    public GameObject constructionText;
    public WeaveThroughContruction weaveThroughContructionScript;
    private int barricadesPickedIndex;
    public FirstEnemyWaves firstEnemyWavesScript;
    public Dialog dialogScript;

    void OnEnable()
    {
        constructionText.SetActive(true);
        weaveThroughContructionScript.enabled = true;
        Invoke("StopConstruction", 30);
        Invoke("ConstructionDialog", 4f);
    }

    void Update()
    {
        timer += Time.deltaTime;

        if (timer >= timeBetweenBarricadeLines)
        {
            SpawnBarricadeAndConcreteBlocks();
            timer = 0;
        }
    }

    void SpawnBarricadeAndConcreteBlocks()
    {
        int barricadeLane = Random.Range(0, 5);

        barricades[barricadesIndex].transform.position = barricadeSpawnPoints[barricadeLane].position;
        barricades[barricadesIndex].SetActive(true);
        weaveThroughContructionScript.barricadesPicked[barricadesPickedIndex] = barricades[barricadesIndex];

        barricadesPickedIndex++;
        barricadesIndex++;

        if (barricadesIndex == barricades.Length)
        {
            barricadesIndex = 0;
        }

        for (int i = 0; i < 5; i++)
        {
            if (i != barricadeLane)
            {
                concreteBlocks[concreteBlocksIndex].transform.position = concreteBlockSpawnPoints[i].position;
                concreteBlocks[concreteBlocksIndex].SetActive(true);

                concreteBlocksIndex++;

                if (concreteBlocksIndex == concreteBlocks.Length)
                {
                    concreteBlocksIndex = 0;
                }
            }
        }
    }

    void StopConstruction()
    {
        this.enabled = false;
        //weaveThroughContructionScript.enabled = false;
        //firstEnemyWavesScript.enabled = true;
    }

    void ConstructionDialog()
    {
        dialogScript.PlayDialog(5);
    }
}
