using UnityEngine;
using System.Collections;

public class CreateEnemies : MonoBehaviour {
	public GameObject farmer;
	public int farmerQuant;

	// Use this for initialization
	void Start () {
		for (int cont = 0; cont < farmerQuant; cont++) {
			GameObject tempFarmer = (GameObject)Instantiate (farmer);
			farmer.transform.position = new Vector3 (5.0f, 5.0f, 0);
		}
	}

	// Update is called once per frame
	void Update () {
		
	}
}
