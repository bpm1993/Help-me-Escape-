﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UtilLoading : MonoBehaviour {
    public static UtilLoading myInstance;
    [SerializeField]
    GameObject fadeObject;
    [SerializeField]
    string autoload;

	// Use this for initialization
	void Awake () {
        myInstance = this;
        fadeObject.SetActive(true);
	}
	
    IEnumerator Start()
    {
        FadeOut();
        if(autoload.Length > 0)
        {
            yield return StartCoroutine(MyDelayMethod(4));
            StartCoroutine("LoadLevel", autoload);
        }
    }
    public void LoadLevelNow(string level)
    {
		StartCoroutine("LoadLevel", level);
    }

    IEnumerator LoadLevel(string level)
    {
        FadeIn();
        yield return StartCoroutine(MyDelayMethod(1));
        StaticLoading.LoadLevel(level);
    }

    IEnumerator MyDelayMethod(float delay)
    {
        yield return new WaitForSeconds(delay);
    }

	// Update is called once per frame
	void Update () {
	
	}

    public void FadeIn()
    {
        fadeObject.GetComponent<Image>().canvasRenderer.SetAlpha(0.0f);
        fadeObject.GetComponent<Image>().CrossFadeAlpha(1.0F, 1, false);
    }

    public void FadeOut()
    {
        fadeObject.GetComponent<Image>().canvasRenderer.SetAlpha(1.0F);
        fadeObject.GetComponent<Image>().CrossFadeAlpha(0.0F, 1, false);
    }
}