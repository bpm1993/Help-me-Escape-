﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MatrixMap : MonoBehaviour {
	public GameObject decoy;
	public Material shine;

	public bool warned = false;
	private GameObject[,] matrix;
	//Daniel
	//MIND
	public Image controleMentalImg;
	private bool coolingDownMind;
	public float waitTimeMind = 5.0f;
	private float secondsTimeMind = 0.0f;
	private float startTimeMind;
	//DISTRACTION
	public Image DistractionImg;
	private bool coolingDownDistraction;
	public float waitTimeDistraction = 5.0f;
	private float secondsDistraction = 0.0f;
	private float startTimeDistraction;
	//SLOW MO
	public Image SlowMoImg;
	private bool coolingDownSlow;
	public float waitTimeSlow = 5.0f;
	private float secondsTimeSlow = 0.0f;
	private float startTimeSlow;
	//Fim Daniel

	float shineTimer;
	bool isShine;


	void Start () {
		matrix = new GameObject[42, 42];
		startTimeMind = Time.time;
		startTimeDistraction = Time.time;
		startTimeSlow = Time.time;
		isShine = false;
		shineTimer = Time.time;
		shine.SetFloat ("_Adjust", 2);
	}
	void Update(){
		setBrightness ();

		//Mind
		if (coolingDownMind == true && secondsTimeMind<=waitTimeMind)
		{
			secondsTimeMind = Time.timeSinceLevelLoad - startTimeMind;
			controleMentalImg.fillAmount = secondsTimeMind/waitTimeMind;
//			print (secondsTime/waitTime);
			if (secondsTimeMind/waitTimeMind >= 1.0f) {
				coolingDownMind = false;
			}
		}
		//DISTRACTION
		if (coolingDownDistraction == true && secondsDistraction<=waitTimeDistraction)
		{
			secondsDistraction = Time.timeSinceLevelLoad - startTimeDistraction;
			DistractionImg.fillAmount = secondsDistraction/waitTimeDistraction;
			//			print (secondsTime/waitTime);
			if (secondsDistraction/waitTimeDistraction >= 1.0f) {
				coolingDownDistraction = false;
			}
		}
		//SLOW MO
		if (coolingDownSlow == true && secondsTimeSlow<=waitTimeSlow)
		{
			secondsTimeSlow = Time.timeSinceLevelLoad - startTimeSlow;
			SlowMoImg.fillAmount = secondsTimeSlow/waitTimeSlow;
			//			print (secondsTime/waitTime);
			if (secondsTimeSlow/waitTimeSlow >= 1.0f) {
				coolingDownSlow = false;
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

	public void distraction(){
		print ("DECOY");
		coolingDownDistraction = true;
		startTimeDistraction = Time.timeSinceLevelLoad;
		waitTimeDistraction = secondsDistraction + 5.0f;
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		GameObject instantDecoy = (GameObject)Instantiate(this.decoy);
		instantDecoy.transform.position = player.transform.position;
	}

	public void mindControl(){
		print ("MIND");
		coolingDownMind = true;
		startTimeMind = Time.timeSinceLevelLoad;
		waitTimeMind = secondsTimeMind + 5.0f;

		GameObject[] enemies = GameObject.FindGameObjectsWithTag ("Police");
		for (int count = 0; count < enemies.Length; count++) {
			if (enemies[count] != gameObject) {
				enemies[count].GetComponent<Enemy>().mindControl ();
			}
		}

		enemies = GameObject.FindGameObjectsWithTag ("Farmer");
		for (int count = 0; count < enemies.Length; count++) {
			if (enemies[count] != gameObject) {
				enemies[count].GetComponent<Enemy>().mindControl ();
			}
		}
	}

	public void slowMotion(){
		print ("SLOW MO");
		coolingDownSlow = true;
		startTimeSlow = Time.timeSinceLevelLoad;
		waitTimeSlow = secondsTimeSlow + 5.0f;

		GameObject[] enemies = GameObject.FindGameObjectsWithTag ("Police");
		for (int count = 0; count < enemies.Length; count++) {
			if (enemies[count] != gameObject) {
				enemies[count].GetComponent<Enemy>().slowMotion ();
			}
		}

		enemies = GameObject.FindGameObjectsWithTag ("Farmer");
		for (int count = 0; count < enemies.Length; count++) {
			if (enemies[count] != gameObject) {
				enemies[count].GetComponent<Enemy>().slowMotion ();
			}
		}
	}

	public void setBrightness(){
		print (shineTimer);
		float t = (Time.time - shineTimer) / 1f;
		if (isShine) {
			shine.SetFloat("_Adjust",Mathf.SmoothStep (2f, 4f, t));
		} else {
			shine.SetFloat("_Adjust",Mathf.SmoothStep (4f, 2f, t));
		}

		if (t >= 1f) {
			shineTimer = Time.time;
			if (isShine) {
				isShine = false;
			} else {
				isShine = true;
			}
		}
	}
}
	