using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour {
	public int state { set; get;}

	// Use this for initialization
	void Start () {
		state = 1;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void setState(int stateNumber){
		this.state = stateNumber;
		if (state == 1) {
			this.state = stateNumber;
		}
	}
}
