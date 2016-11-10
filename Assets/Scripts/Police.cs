﻿using UnityEngine;
using System.Collections;

public class Police : Enemy {

	private float[,] positions;
	private int index;
	private float speed;
	private Vector3 nextPosition;
	private Vector3 tempPosition;
	public Transform pivot;
	public Transform light;

	/*
     * States:
     * 1 = Normal;
     * 2 = Spot;
     * 3 = Warned;
     * 4 = Alert;
     * 5 = Chase;
     * 6 = Spot;
     * 7 = Decoy;
     * 8 = Time Stop;
     * 9 = Mind Control;
     * 10 = Stop;
    */

	// Use this for initialization
	protected override void Start () {
		base.Start ();
		state = 1;
		positions = new float[4, 2] {
			{ Random.Range(-15, 15), Random.Range(-15, 15) },
			{ Random.Range(-15, 15), Random.Range(-15, 15) },
			{ Random.Range(-15, 15), Random.Range(-15, 15) },
			{ Random.Range(-15, 15), Random.Range(-15, 15) },
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
		} else if (state == 2) {
			if (mainGame.warned) {
				setState (5, 0);
			} else {
				mainGame.warned = true;
			}
			state = 10;
			callPolice ();
		} else if (state == 3) {
			LookAt (nextPosition);
		} else if (state == 5) {
			LookAt (nextPosition);
			GameObject player = GameObject.FindObjectsOfType (typeof(Player));
			nextPosition = player.transform.position;
			speed = 6.0f;
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
		} else if (state == 10) {

		}
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
		Police[] allPolices = GameObject.FindObjectsOfType (typeof(Police));
		for (int count = 0; count < allPolices.Length; count++) {
			if (allPolices [count] != gameObject) {
				getWarned ();
			}
		}
		StartCoroutine (setState(3, 2.0f));
	}

	protected void getWarned(Vector3 position){
		StartCoroutine (setState(3, 2.0f));
		nextPosition = position;
	}

	void runAway(){
		state = 6;
		nextPosition = new Vector3 (transform.position.x, 30f, transform.position.z);
	}

	void resetNextPosition(){
		nextPosition = tempPosition;
		resetState ();
	}

	IEnumerator setState(int state, float delayTime){
		yield return new WaitForSeconds(delayTime);
	}

	void OnTriggerEnter2D (Collider2D col){
		if (col.name == "Decoy" && state != 2) {
			setState (3);
			tempPosition = nextPosition;
			nextPosition = col.transform.position;
		}
	}
}
