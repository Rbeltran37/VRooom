using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowTruckMoveIn : MonoBehaviour
{
    public float speed;
    public Vector3 destination;
    public TowTruckMoveSideways towTruckMoveSidewaysScript;
    public ThrowBarrel throwBarrelScript;
    public Animator throwingThugAnimator;
    void Start() {
        towTruckMoveSidewaysScript = GetComponent<TowTruckMoveSideways>();
        throwBarrelScript = GetComponent<ThrowBarrel>();
    }
    void Update()
    {
        var step =  speed * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, destination, step);

        if (Vector3.Distance(transform.position, destination) < 0.001f) {
            throwingThugAnimator.Play("Kicking Barrel");
            towTruckMoveSidewaysScript.enabled = true;
            throwBarrelScript.enabled = true;
            this.enabled = false;
        }
    }
}
