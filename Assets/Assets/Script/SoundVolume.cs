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

		mixerMusic.GetFloat("Musica", out mus);
        mixerMusic.GetFloat("SFx", out sfx);

	}
	
	// Update is called once per frame
	void Update () {
		mixerMusic.SetFloat("Musica", sliderMusic.value);
		mixerMusic.SetFloat("SFx", sliderSFx.value);
    }
}
