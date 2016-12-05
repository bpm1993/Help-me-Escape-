using UnityEngine;
using System.Collections;

public class Sight : MonoBehaviour {
	private Enemy parent;
	public AudioClip achouSound;
	private AudioSource source;
	public GameObject alertSymbol;


	// Use this for initialization
	void Start () {
		parent = transform.parent.GetComponent<Enemy> ();
	}

	void Awake () {



	}

	void OnTriggerEnter2D(Collider2D col){

	}

	void OnTriggerStay2D (Collider2D col){
		
	}

	void OnTriggerExit2D (Collider2D col){
		
	}


}