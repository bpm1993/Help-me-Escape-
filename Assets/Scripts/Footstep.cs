using UnityEngine;
using System.Collections;

public class Footstep : MonoBehaviour {
    float count;
    private float startTime;
	// Use this for initialization
	void Start () {
        count = 0;
        startTime = Time.time;
	}
	
	// Update is called once per frame
	void Update () {
        count = count + Time.deltaTime;
        float t = (Time.time - startTime) / 2f;
        GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, Mathf.SmoothStep(1f, 0f, t));
        if (count >= 2f)
        {
            Destroy(transform.gameObject);
            Destroy(this);
        }
	}
}
