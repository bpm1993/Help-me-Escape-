using UnityEngine;
using System.Collections;

public class Police : Enemy {

	private float[,] positions;
	private int index;
	private Vector3 nextPosition;
	private Vector3 tempPosition;
	private Vector3 lastPos;
	private bool isRotating;
	private float rotationTimer;
	private float rotation;
	private bool stop;

	public AudioClip achouSound;
	private AudioSource source;
	public GameObject alertSymbol;

	private Vector3 searchPosition;

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
		source = GetComponent<AudioSource>();
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
			nextPosition = GameObject.Find ("Player").transform.position;
			Walk ();
			LookAt (nextPosition);
			speed = 4.5f;
		} else if (state == 3) {
			LookAt (nextPosition);
		} else if (state == 4) {
			if (transform.position == nextPosition) {
				if (!stop) {
					if (index == positions.GetLength (0) - 1) {
						transform.GetComponentInChildren<ZippyLights2D> ().vertexColor = Color.white;
						StartCoroutine (setState (1, 2f));
						stop = true;
					} else {
						index++;
						nextPosition = new Vector3 (positions [index, 0], positions [index, 1], transform.position.z);
						stop = true;
					}
				} else {
					StartCoroutine (Stop ());
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

	public override void decoy(Vector3 position){
		base.decoy (position);
		setState (9);
		tempPosition = nextPosition;
		nextPosition = position;
	}

	IEnumerator Stop(){
		stop = false;
		yield return new WaitForSeconds (2);
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
		positions = new float[8, 2] {
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) },
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) },
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) },
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) },
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) },
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) },
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) },
			{ position.x + Random.Range(-3, 3), position.y + Random.Range(-3, 3) }
		};
		index = 0;
		speed = 2f;
		nextPosition = new Vector3 (positions [index, 0], positions [index, 1], transform.position.z);
		stop = true;
		setState (4);
	}

	void inspect(){
		if(Vector3.Distance(transform.position, nextPosition) < 3f){
			speed = 2.0f;
		}
		LookAt (nextPosition);
		transform.position = Vector3.MoveTowards (transform.position, nextPosition, (speed * Time.deltaTime) * slowMoSpeed);
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
		if (col.name == "Player") {
			GameObject.Find("Main Game").GetComponent<MatrixMap>().PlayerPego();
			Time.timeScale = 0;
		}
	}

	public override void onSightEnter(){
		base.onSightEnter ();
		if (state != 7 && !onSight) {
			source.PlayOneShot(achouSound,.5f);

			SpriteRenderer renderer = alertSymbol.GetComponent<SpriteRenderer> ();
			Color color = renderer.color;
			color.a = 1.0f;
			renderer.color = color;
		}
	}

	public override void onSightStay(){
		base.onSightStay ();

		if (state != 7 && !onSight) {
			setState (2);
			onSight = true;
			GetComponentInChildren<ZippyLights2D> ().vertexColor = Color.red;

		}

		GameObject.Find("Main Game").GetComponent<MatrixMap>().alertBool = true;
	}

	public override void onSightExit(){
		base.onSightExit ();

		if (state == 2 && onSight) {
			onSight = false;
			GetComponentInChildren<ZippyLights2D> ().vertexColor = Color.yellow;
			state = 0;
			searchPosition = GameObject.Find ("Player").transform.position;
			Invoke ("policeCallback", 3f);
		}
	}

	void policeCallback(){
		inspectPosition (searchPosition);
	}
}