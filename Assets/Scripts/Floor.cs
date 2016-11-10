using UnityEngine;
using System.Collections;

public class Floor : MonoBehaviour {
	private Color curColor;

	// Use this for initialization
	void Start () {
		curColor = Color.red;
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnTriggerEnter2D(Collider2D col) {
		if (col.name == "Player") {
			curColor = Color.green;
		}
	}

	public void SetColorVar(float colorVar){
		Material mat = GetComponent<Renderer> ().material;
		mat.SetColor ("_EmissionColor", curColor * colorVar);
	}
}
