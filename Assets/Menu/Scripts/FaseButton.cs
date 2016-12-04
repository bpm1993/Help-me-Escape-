using UnityEngine;
using System.Collections;

public class FaseButton : MonoBehaviour {
	public GameObject nave;
	public bool apertado;
	// Use this for initialization
	void Start () {
	
	}

	void SetTransformX(){
		Vector2 endPosition = new Vector2 (transform.position.x, nave.transform.position.y);
		nave.transform.position = Vector3.Lerp(nave.transform.position, endPosition, 7 * Time.deltaTime);
//		if (nave.transform.position.x == transform.position.x) {
//			apertado = false;
//		}
	}
	void Update (){
		if (apertado) {
			SetTransformX ();
		}
	}
	void OnMouseDown() {
		print ("Cliquei");
		GameObject.Find ("simboloFase1").GetComponent<FaseButton> ().SetFalse();
		GameObject.Find ("simboloFase2").GetComponent<FaseButton> ().SetFalse();
		GameObject.Find ("simboloFase3").GetComponent<FaseButton> ().SetFalse();
		GameObject.Find ("simboloFase4").GetComponent<FaseButton> ().SetFalse();

		apertado = true;
//		Vector2 endPosition = new Vector2 (nave.transform.position.x, transform.position.y);
//		nave.transform.position = Vector3.Lerp(nave.transform.position, endPosition, 1 * Time.deltaTime);
	}
	void SetFalse(){
		apertado = false;
	}
}
