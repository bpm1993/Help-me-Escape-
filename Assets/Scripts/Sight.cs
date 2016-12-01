using UnityEngine;
using System.Collections;

public class Sight : MonoBehaviour {
	private Enemy parent;
	public AudioClip achouSound;
	private AudioSource source;
	public GameObject alertSymbol;
	private Vector3 searchPosition;

	// Use this for initialization
	void Start () {
		parent = transform.parent.GetComponent<Enemy> ();
	}

	void Awake () {

		source = GetComponent<AudioSource>();

	}

	void OnTriggerEnter2D(Collider2D col){
		if (col.name == "Player" && parent.state!= 7 && !parent.onSight) {
			source.PlayOneShot(achouSound,.5f);

			SpriteRenderer renderer = alertSymbol.GetComponent<SpriteRenderer> ();
			Color color = renderer.color;
			color.a = 1.0f;
			renderer.color = color;
		}
	}

	void OnTriggerStay2D (Collider2D col){
		if (col.name == "Player") {
			GameObject.Find("Main Game").GetComponent<MatrixMap>().alertBool = true;
		}

		if (col.name == "Player" && parent.state!= 7 && !parent.onSight) {
			parent.setState (2);
			parent.onSight = true;
			parent.GetComponentInChildren<ZippyLights2D> ().vertexColor = Color.red;
		}
	}

	void OnTriggerExit2D (Collider2D col){
		if (col.tag == "Player" && parent.state == 2 && parent.onSight && transform.parent.GetComponent<Police> () != null) {
			transform.parent.GetComponent<Police>().onSight = false;
			transform.parent.GetComponentInChildren<ZippyLights2D> ().vertexColor = Color.yellow;
			parent.state = 0;
			searchPosition = GameObject.Find ("Player").transform.position;
			Invoke ("policeCallback", 3f);
		} else if (col.tag == "Decoy") {
			if (parent.tag == "Police") {
				parent.GetComponent<Police> ().decoy (col.transform.position);
			} else if(parent.tag == "Farmer"){
				parent.GetComponent<Farmer> ().decoy (col.transform.position);
			}
		}
	}

	void policeCallback(){
		parent.GetComponent<Police> ().inspectPosition (searchPosition);
	}
}