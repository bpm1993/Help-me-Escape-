using UnityEngine;
using System.Collections;

public class Police : Enemy {

	private float[,] positions;
	private int index;
	private float speed;
	private bool stop;
	private Vector3 nextPosition;
	private Vector3 tempPosition;
	public Transform pivot;
	public Transform light;

	/*
     * States:
     * 1 = Normal;
     * 2 = Spot;
     * 3 = Decoy;
     * 4 = Time Stop;
     * 5 = Mind Control;
     * 6 = Run;
    */

	// Use this for initialization
	protected override void Start () {
		base.Start ();
		positions = new float[4, 2] {
			{ 2, 10 },
			{ -7, 10 },
			{ -10, -12 },
			{ 10, -10 },
		};
		index = 0;
		speed = 3f;
		nextPosition = new Vector3 (positions [index, 0], positions [index, 1], transform.position.z);
		LookAt (nextPosition);
	}

	// Update is called once per frame
	protected override void Update () {	
		base.Update ();
		if (state == 1) {
			LookAt (nextPosition);
			Walk ();
		} else if (state == 2 && stop != true) {
			stop = true;

		} else if (state == 3) {
			
		} else if (state == 5){
			LookAt (nextPosition);
			Walk ();
			Invoke ("resetState", 3f);
		} else if (state == 6){
			if (transform.position != nextPosition) {
				transform.position = Vector3.MoveTowards (transform.position, nextPosition, speed * Time.deltaTime * 2);
				Quaternion target = Quaternion.LookRotation (Vector3.forward, nextPosition - transform.position);
				transform.rotation = Quaternion.Slerp (transform.rotation, target, Time.deltaTime * 2.5f);
			} else {
				Destroy (transform.gameObject);
				Destroy (this);
			}
		}
	}

	void Walk(){
		if (transform.position == nextPosition && positions != null) {
			if (index == positions.GetLength (0) - 1) {
				index = 0;
			} else {
				index++;
			}
			nextPosition = new Vector3 (positions [index, 0], positions [index, 1], transform.position.z);
			nextPosition.z = transform.position.z;
		} else {
			transform.position = Vector3.MoveTowards (transform.position, nextPosition, (speed * Time.deltaTime) * slowMoSpeed);
		}
	}

	void resetNextPosition(){
		nextPosition = tempPosition;
		resetState ();
	}

	void OnTriggerEnter2D (Collider2D col){
		if (col.name == "Decoy" && state != 2) {
			setState (3);
			tempPosition = nextPosition;
			nextPosition = col.transform.position;
		}
	}
}
