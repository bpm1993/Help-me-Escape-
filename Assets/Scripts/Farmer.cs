using UnityEngine;
using System.Collections;

public class Farmer : Enemy {

	private float[,] positions;
	private int index;
	private bool stop;
	private Vector3 nextPosition;
	private Vector3 tempPosition;
	public Transform pivot;
	public Transform light;

	public AudioClip achouSound;
	private AudioSource source;
	public GameObject alertSymbol;

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
		onSight = false;
		source = GetComponent<AudioSource>();
		positions = new float[4, 2] {
			{ 2, 10 },
			{ -7, 10 },
			{ -10, -12 },
			{ 10, -10 },
		};
		index = 0;
		speed = 3f;
		this.CONST_SPEED = speed;
		nextPosition = new Vector3 (positions [index, 0], positions [index, 1], transform.position.z);
		LookAt (nextPosition);
	}

	public override void decoy(Vector3 position){
		base.decoy(position);
		setState (3);
		tempPosition = nextPosition;
		nextPosition = position;
	}
	
	// Update is called once per frame
	protected override void Update () {
		base.Update ();
		if (state == 1) {
			LookAt (nextPosition);
			Walk ();
		} else if (state == 2 && stop != true) {
			stop = true;
			callPolice ();
		} else if (state == 5) {
			LookAt (nextPosition);
			Walk ();
			Invoke ("resetState", 3f);
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
		
	void callPolice(){
		Invoke ("runAway", 2f);
	}

	void runAway(){
		state = 6;
		stop = false;
		nextPosition = new Vector3 (transform.position.x, 30f, transform.position.z);
	}

	void resetNextPosition(){
		nextPosition = tempPosition;
		resetState ();
	}

	void OnTriggerEnter2D (Collider2D col){
		if (col.tag == "Decoy" && state != 2) {
			decoy (col.transform.position);
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

			onSight = true;
			Invoke ("runAway", 3f);
			setState (2);
		}
	}

	public override void onSightStay(){

	}

	public override void onSightExit(){

	}
}
