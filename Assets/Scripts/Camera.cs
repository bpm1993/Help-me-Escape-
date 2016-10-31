using UnityEngine;
using System.Collections;

public class Camera : MonoBehaviour {

	public Vector3 offset;
	public Transform target;
	private float lastX;
	private float lastY;

	void Update () {
		if (target.position.x < 11 &&
		    target.position.x > -13 &&
		    target.position.y < 15 &&
		    target.position.y > -17) {
			transform.position = new Vector3 (target.position.x + offset.x, target.position.y + offset.y, offset.z);
			lastX = target.position.x + offset.x;
			lastY = target.position.y + offset.y;
		} else if (target.position.x < 11 &&
		    target.position.x > -13) {
			transform.position = new Vector3 (target.position.x + offset.x, lastY, offset.z);
			lastX = target.position.x + offset.x; 
		} else if(target.position.y < 15 &&
			target.position.y > -17){
			transform.position = new Vector3 (lastX, target.position.y + offset.y, offset.z);
			lastY = target.position.y + offset.y;
		}
	}
}
