using UnityEngine;
using System.Collections;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SoundVolume : MonoBehaviour {
    public AudioMixer mixerMusic;
    public Slider sliderMusic;
    public Slider sliderSFx;

	// Use this for initialization
	void Start () {
        float mus = sliderMusic.value;
        float sfx = sliderSFx.value;

		mixerMusic.GetFloat("musicVol", out mus);
        mixerMusic.GetFloat("sfxVol", out sfx);

	}
	
	// Update is called once per frame
	void Update () {
		mixerMusic.SetFloat("musicVol", sliderMusic.value);
		mixerMusic.SetFloat("sfxVol", sliderSFx.value);
    }
}
