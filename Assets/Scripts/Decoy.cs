﻿using UnityEngine;
using System.Collections;

public class Decoy : MonoBehaviour {
	private float startTime;
	private Collider2D[] targets;
	private int enemiesCount;

	// Use this for initialization
	void Start () {
		startTime = Time.time;
		targets = new Collider2D[10];
		enemiesCount = 0;
	}

	// Update is called once per frame
	void Update () {
		if (Time.time - startTime >= 10.0f) {
			DestroyMe ();
		}
	}

	void OnTriggerEnter2D (Collider2D col){
		if (col.GetComponent<Enemy>() != null) {
			targets [enemiesCount] = col;
			col.GetComponent<Enemy>().decoy();
			enemiesCount++;
		}
	}
		
	void DestroyMe(){
		while (enemiesCount > 0) {
			enemiesCount--;
			targets [enemiesCount].GetComponent<Enemy> ().setState (1);

		}
		Destroy (gameObject);
		Destroy (this);
	}
}
