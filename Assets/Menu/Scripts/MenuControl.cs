using UnityEngine;
using System.Collections;

public class MenuControl : MonoBehaviour {
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

	}
	public void EscolheFase() {
		print ("VAI FASE EU ESCOLHO VOCÊ");
		if (GameObject.Find ("simboloFase1").GetComponent<FaseButton> ().apertado) {
			Application.LoadLevel("Map1");
		}	
	}
}
