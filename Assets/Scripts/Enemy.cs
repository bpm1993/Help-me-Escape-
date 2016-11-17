using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour {
	public int state { set; get;}
	public float slowMoSpeed { set; get;}
	public bool onSight { set; get;}
	public float CONST_SPEED { set; get; }
	public float CONST_ROTATION { set; get; }
	public float speed { set; get;}
	float startTime;
	bool slowMo;

	// Use this for initialization
	protected virtual void Start () {
		slowMo = false;
		state = 1;
		slowMoSpeed = 1.0f;
		onSight = false;
	}
	
	// Update is called once per frame
	protected virtual void Update () {
		if (slowMo) {
			float t = (Time.time - startTime) / 2f;
			slowMoSpeed = Mathf.SmoothStep (1f, 0.3f, t);
		} else if (!slowMo && slowMoSpeed < 1.0f) {
			float t = (Time.time - startTime) / 2f;
			slowMoSpeed = Mathf.SmoothStep (0.3f, 1f, t);
		}
	}

	public void slowMotion(){
		startTime = Time.time;
		slowMo = true;
		Invoke("resetSlowMoSpeed", 5.0f);
	}

	public void mindControl(){
		setState (7);
		StartCoroutine (setState(1, 7.0f));
	}

	IEnumerator setState(int state, float delayTime){
		yield return new WaitForSeconds(delayTime);
		this.state = state;
	}

	public void resetState(){
		speed = CONST_SPEED;
		setState (1);
	}

	void resetSlowMoSpeed(){
		startTime = Time.time;
		slowMo = false;
	}

	public void setState(int stateNumber){
		this.state = stateNumber;
		if (state == 1) {
			this.state = stateNumber;
		}
	}

	public void LookAt(Vector3 nextPosition){
		Quaternion target = Quaternion.LookRotation (Vector3.forward, nextPosition - transform.position);
		transform.rotation = Quaternion.Slerp(transform.rotation, target, (Time.deltaTime * 2.5f) * slowMoSpeed);
	}

}
