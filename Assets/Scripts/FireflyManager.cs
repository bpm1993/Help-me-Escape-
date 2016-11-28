using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class FireflyManager : MonoBehaviour {
	private int quantity;
	private List<GameObject> fireflies;
	public GameObject firefly;

	// Use this for initialization
	void Start () {
		fireflies = new List<GameObject> (5);
		quantity = 0;
	}

	public void addFirefly(){
		if(quantity < 5){
			quantity++;
			GameObject newFirefly = (GameObject)Instantiate (firefly);

			int directionX = Random.Range (0, 2);
			int directionY = Random.Range (0, 2);

			print (directionX);
			print (directionY);

			if (directionX == 0 && directionY == 0) {
				newFirefly.transform.position = new Vector3 (-22f, Random.Range(-20f, 20f));
			}
			else if (directionX == 0 && directionY == 1) {
				newFirefly.transform.position = new Vector3 (Random.Range(-20f, 20f), -22f);
			}
			else if (directionX == 1 && directionY == 0) {
				newFirefly.transform.position = new Vector3 (22f, Random.Range(-20f, 20f));
			}
			else if (directionX == 1 && directionY == 1) {
				newFirefly.transform.position = new Vector3 (Random.Range(-20f, 20f), 22f );
			}
			newFirefly.GetComponentInChildren<Firefly>().setDirection (directionX, directionY);

			fireflies.Add (newFirefly);
		}
	}

	public void removeFirefly(GameObject deadFirefly){
		fireflies.Remove (deadFirefly);
		quantity--;
	}
}
