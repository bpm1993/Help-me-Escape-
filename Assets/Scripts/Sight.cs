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
		if (col.name == "Player" && parent.state!= 7 && !sight) {
			parent.setState (2);
			sight = true;
			parent.GetComponentInChildren<Light> ().color = Color.red;
		}
	}

	void OnTriggerExit2D (Collider2D col){
		if (col.name == "Player" && parent.state == 2 && sight && parent.GetComponent<Police>() != null) {
			parent.setState (4);
			sight = false;
			parent.GetComponentInChildren<Light> ().color = Color.yellow;
		}
	}
}