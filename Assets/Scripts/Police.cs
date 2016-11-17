using UnityEngine;
using System.Collections;

public class Police : Enemy {

	private float[,] positions;
	private int index;
	private Vector3 nextPosition;
	private Vector3 tempPosition;
	public Transform light;
	private Vector3 lastPos;
	private bool isRotating;
	private float rotationTimer;
	private float rotation;

	/*
     * States:
     * 1 = Normal;
     * 2 = Spot;
     * 3 = Warned;
     * 4 = Inspect;
     * 5 = Chase;
     * 6 = Spot;
     * 7 = Mind Control;
     * 8 = Time Stop;
     * 9 = Decoy;
     * 10 = Stop;
    */

	// Use this for initialization
	protected override void Start () {
		base.Start ();
		positions = new float[4, 2] {
			{ Random.Range(-15, 15), Random.Range(-15, 15) },
			{ Random.Range(-15, 15), Random.Range(-15, 15) },
			{ Random.Range(-15, 15), Random.Range(-15, 15) },
			{ Random.Range(-15, 15), Random.Range(-15, 15) },
		};
		index = 0;
		speed = 3f;
		rotation = transform.rotation.z;
		this.CONST_ROTATION = rotation;
		this.CONST_SPEED = speed;
		isRotating = false;
		rotationTimer = Time.time;
		nextPosition = new Vector3 (transform.position.x, 0, transform.position.z);
		LookAt (nextPosition);
	}

	// Update is called once per frame
	protected override void Update () {
		base.Update ();
		if (state == 1) {
			LookAt (nextPosition);
			Walk ();
		} else if (state == 2) {
			GameObject mainGame = GameObject.Find ("Main Game");
			if (mainGame.GetComponent<MatrixMap> ().warned) {
				state = 5;
			} else {
				mainGame.GetComponent<MatrixMap> ().warned = true;
			}
			state = 10;
			callPolice ();
		} else if (state == 3) {
			LookAt (nextPosition);
		} else if (state == 4) {
			if (transform.position == nextPosition) {
				if (index == positions.GetLength (0) - 1) {
					StartCoroutine (setState (1, 2f));
				} else {
					index++;
				}
			} else {
				inspect ();
			}
		} else if (state == 5) {
			LookAt (nextPosition);
			GameObject player = GameObject.Find ("Player");
			nextPosition = player.transform.position;
			speed = 4.5f;
			Walk ();
		} else if (state == 6) {
			if (transform.position != nextPosition) {
				transform.position = Vector3.MoveTowards (transform.position, nextPosition, (speed * Time.deltaTime * 2) * slowMoSpeed);
				Quaternion target = Quaternion.LookRotation (Vector3.forward, nextPosition - transform.position);
				transform.rotation = Quaternion.Slerp (transform.rotation, target, Time.deltaTime * 2.5f);
			} else {
				Destroy (transform.gameObject);
				Destroy (this);
			}
		} else if (state == 7) {
			LookAt (nextPosition);
			Walk ();
		} else if (state == 9) {
			LookAt (nextPosition);
		}
	}

	public void decoy(Vector3 position){
		setState (9);
		tempPosition = nextPosition;
		nextPosition = position;
	}

	void Walk(){
		if (transform.position == nextPosition && positions != null) {
			if (index == positions.GetLength (0) - 1) {
				positions = new float[4, 2] {
					{ Random.Range(-15, 15), Random.Range(-15, 15) },
					{ Random.Range(-15, 15), Random.Range(-15, 15) },
					{ Random.Range(-15, 15), Random.Range(-15, 15) },
					{ Random.Range(-15, 15), Random.Range(-15, 15) },
				};
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

	void callPolice(){
		GameObject[] allPolices = GameObject.FindGameObjectsWithTag ("Police");
		for (int count = 0; count < allPolices.Length; count++) {
			if (allPolices[count] != gameObject) {
				allPolices[count].GetComponent<Police>().getWarned ();
			}
		}
		StartCoroutine (setState(5, 2.0f));
	}

	protected void getWarned(){
		StartCoroutine (setState(5, 2.0f));
	}

	public void inspectPosition(Vector3 position){
		positions = new float[2, 2] {
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) },
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) },
		};
		print (positions [0, 0] + " " + positions [0, 1]);
		print (positions [1, 0] + " " + positions [1, 1]);
		setState (4);
	}

	void inspect(){
		float t = (Time.time - rotationTimer) / 1f;
		if (isRotating) {
			rotation = Mathf.SmoothStep (-30f, 30f, t);
		} else {
			rotation = Mathf.SmoothStep (30f, -30f, t);
		}
		Vector3 sight = transform.FindChild ("Sight").transform.rotation.eulerAngles;

		transform.FindChild ("Sight").transform.Rotate(new Vector3(sight.x, sight.y, rotation));

		if (t >= 1f) {
			rotationTimer = Time.time;
			if (isRotating) {
				isRotating = false;
			} else {
				isRotating = true;
			}
		}

		if(Vector3.Distance(transform.position, nextPosition) < 3f){
			speed = 2.0f;
		}
		Walk();
	}

	void resetNextPosition(){
		nextPosition = tempPosition;
		resetState ();
	}

	IEnumerator setState(int state, float delayTime){
		yield return new WaitForSeconds(delayTime);
		this.state = state;
	}

	void OnTriggerEnter2D (Collider2D col){
		if (col.tag == "Decoy" && state != 2) {
			decoy (col.transform.position);
		}
	}
}
