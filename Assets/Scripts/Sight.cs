using UnityEngine;
using System.Collections;

public class Sight : MonoBehaviour {
	private bool sight;
	private Enemy parent;

	// Use this for initialization
	void Start () {
		sight = false;
		parent = transform.parent.GetComponent<Enemy> ();
	}

	void OnTriggerStay2D (Collider2D col){
		if (col.name == "Player" && parent.state != 5 && !sight) {
			parent.setState (2);
			sight = true;
		}
	}
}