using UnityEngine;
using System.Collections;

public class Sight : MonoBehaviour {
	private bool sight;
	private Enemy parent;
	public AudioClip achouSound;
	private AudioSource source;
	public GameObject alertSymbol;

	// Use this for initialization
	void Start () {
		sight = false;
		parent = transform.parent.GetComponent<Enemy> ();
	}

	void Awake () {

		source = GetComponent<AudioSource>();

	}

	void OnTriggerEnter2D(Collider2D col){
		if (col.name == "Player" && parent.state!= 7 && !sight) {
			source.PlayOneShot(achouSound,.5f);

			SpriteRenderer renderer = alertSymbol.GetComponent<SpriteRenderer> ();
			Color color = renderer.color;
			color.a = 1.0f;
			renderer.color = color;
		}
	}

	void OnTriggerStay2D (Collider2D col){
		if (col.name == "Player" && parent.state!= 7 && !sight) {
			parent.setState (2);
//			parent.GetComponent<Police>().onSight = true;
			parent.GetComponentInChildren<Light> ().color = Color.red;
			GameObject.Find("Main Game").GetComponent<MatrixMap>().alertBool = true;
		}
	}

	void OnTriggerExit2D (Collider2D col){
		if (col.tag == "Player" && parent.state == 5 && sight && transform.parent.GetComponent<Police> () != null) {
			transform.parent.GetComponent<Police>().onSight = false;
			transform.parent.GetComponentInChildren<Light> ().color = Color.yellow;
			GameObject.FindGameObjectWithTag ("MainGame").GetComponent<MatrixMap> ().onSightCheck (GameObject.FindGameObjectWithTag ("Player").transform.position);
		} else if (col.tag == "Decoy") {
			if (parent.tag == "Police") {
				parent.GetComponent<Police> ().decoy (col.transform.position);
			} else if(parent.tag == "Farmer"){
				parent.GetComponent<Farmer> ().decoy (col.transform.position);
			}
		}
	}
}