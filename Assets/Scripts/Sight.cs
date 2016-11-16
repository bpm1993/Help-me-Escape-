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
		if (col.tag == "Player" && parent.state == 2 && sight && parent.GetComponent<Police> () != null) {
			parent.setState (4);
			sight = false;
			parent.GetComponentInChildren<Light> ().color = Color.yellow;
		} else if (col.tag == "Decoy") {
			if (parent.tag == "Police") {
				parent.GetComponent<Police> ().decoy (col.transform.position);
			} else if(parent.tag == "Farmer"){
				parent.GetComponent<Farmer> ().decoy (col.transform.position);
			}
		}
	}
}