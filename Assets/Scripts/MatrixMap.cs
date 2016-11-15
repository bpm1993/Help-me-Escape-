using UnityEngine;
using System.Collections;

public class MatrixMap : MonoBehaviour {
	public bool warned = false;
	float windForce = 0.0f;
	float timer = 0;
	float timerStop = 0;
	bool changeWind = true;
	private float startTime;
	int slowMotion;
	private GameObject[,] matrix;
	float random;
	float xPos;
	float yPos;

	void Start () {
		matrix = new GameObject[42, 42];
		slowMotion = 0;
		startTime = Time.time;
	}

	void Update(){
		timer = timer + Time.deltaTime;
		if (slowMotion == 1) {
			timerStop = timerStop + Time.deltaTime;
			if (Time.timeScale > 0.2f) {
				float t = (Time.time - startTime) / 1f;
				Time.timeScale = Mathf.SmoothStep (1f, 0.2f, t);
			} else {
				if (timerStop >= 3f) {
					StopSlowMotion ();
				}
			}

		} else if (slowMotion == 2) {
			timerStop = timerStop + Time.deltaTime;
			if (Time.timeScale < 1f) {
				float t = (Time.time - startTime) / 1f;
				Time.timeScale = Mathf.SmoothStep (0.2f, 1f, t);
			} else {
				slowMotion = 0;
			}
		}
	}

	void StopSlowMotion(){
		startTime = Time.time;
		slowMotion = 2;
		timerStop = 0;
	}

	public void StartSlowMotion(){
		if (slowMotion == 0) {
			startTime = Time.time;
			slowMotion = 1;
			timerStop = 0;
		}
	}

	void Wind(bool change){
		
		if (change) {
			float random2 = float.Parse(Random.Range (0.0f, 1f).ToString("N2"));
			random = float.Parse(Random.Range (0.0f, 1f).ToString("N2"));
			xPos = random - float.Parse(Random.Range (0.0f, 1f).ToString("N2"));
			yPos = (1f - xPos);
		}
			
		for (int count = 0; count < 40; count++) {
			for (int count2 = 0; count2 < 40; count2++) {
				if (matrix [count, count2].transform.childCount > 0) {
					GameObject corn = matrix [count, count2].transform.GetChild(0).gameObject;
					corn.transform.GetChild (3).transform.position = Vector3.Lerp (corn.transform.GetChild (3).transform.position, 
						corn.transform.position - new Vector3 (xPos, yPos - 1f, corn.transform.GetChild (3).transform.position.z),
						0.03f);
				}
			}
		}
	}

	public void addObject(GameObject obj, int x, int y){
		matrix [x, y] = obj;
	}

    internal static void addObject(GameObject dirt)
    {
        throw new System.NotImplementedException();
    }
}
	