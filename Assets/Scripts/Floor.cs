using UnityEngine;
using System.Collections;

public class Floor : MonoBehaviour {
	private Color curColor;
	public Material newMat;
	public AudioClip milhoSound;
	private AudioSource source;
//	private int cornsDobrados;
//	private int redCorns;

	// Use this for initialization
	void Start () {
		curColor = Color.red;
//		redCorns = gameObject.GetComponentInParent<CreateMap>().redCorns;
	}

	void Awake () {

		source = GetComponent<AudioSource>();

	}

	void OnTriggerEnter2D(Collider2D col) {
		if (col.name == "Player") {
			changeMaterial ();
//			cornsDobrados++;

		}
	}

	public void SetColorVar(float colorVar){
		Material mat = GetComponent<Renderer> ().material;
		mat.SetColor ("_EmissionColor", curColor * colorVar);
	}

	public void changeMaterial(){
		GetComponent<Renderer> ().material = newMat;
		GetComponent<Renderer> ().material.color = Color.green;
		GameObject.Find("Main Game").GetComponent<MatrixMap>().CornDobrado();
		source.PlayOneShot(milhoSound,.2f);
	}
}
