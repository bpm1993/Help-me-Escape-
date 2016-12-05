using UnityEngine;
using System.Collections;

public class Firefly : MonoBehaviour {
	int numberOfTicks;
	private int directionX;
	private int directionY;

	// Use this for initialization
	void Start () {
		numberOfTicks = 0;
	}
	
	// Update is called once per frame
	void Update () {
		numberOfTicks++;

		if (directionX == 0 && directionY == 0) {
			float seno = (1f * Mathf.Sin (numberOfTicks * 0.02f * Mathf.PI));
			transform.position = new Vector3 (transform.position.x + 0.03f, transform.parent.position.y + seno, transform.position.z);
		}
		else if (directionX == 0 && directionY == 1) {
			float seno = (1f * Mathf.Sin (numberOfTicks * 0.02f * Mathf.PI));
			transform.position = new Vector3 (transform.parent.position.x + seno, transform.position.y + 0.03f, transform.position.z);
		}
		else if (directionX == 1 && directionY == 0) {
			float seno = (1f * Mathf.Sin (numberOfTicks * 0.02f * Mathf.PI));
			transform.position = new Vector3 (transform.position.x - 0.03f, transform.parent.position.y + seno, transform.position.z);
		}
		else if (directionX == 1 && directionY == 1) {
			float seno = (1f * Mathf.Sin (numberOfTicks * 0.02f * Mathf.PI));
			transform.position = new Vector3 (transform.parent.position.x + seno, transform.position.y - 0.03f, transform.position.z);
		}

		if (transform.position.y > 23 || transform.position.y < -23 || transform.position.x > 23 || transform.position.x < -23) {
			die ();
		}
	}

	public void setDirection(int directionX, int directionY){
		this.directionX = directionX;
		this.directionY = directionY;
	}

	void die(){
		GameObject.FindGameObjectWithTag ("MainGame").GetComponent<FireflyManager> ().removeFirefly (this.gameObject);
		Destroy (transform.parent.gameObject);
		Destroy (this);
	}
}
