using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.UI;

public class Player : MonoBehaviour {
	private float speed = 5.0f;
	private Vector2 lastFoot;
    public Transform rightFoot;
    public Transform leftFoot;
	public GameObject foot1;
	public GameObject foot2;
	public GameObject gameControl;
	private bool lastFootBool;
	//Daniel
	public Image controleMentalImg;
	public bool coolingDown;
	public float waitTime = 5.0f;
	private float secondsTime = 0.0f;
	private float startTime;
	//Fim Daniel

	// Use this for initialization
	void Start () {
		lastFoot = this.transform.position;
		lastFootBool = false;
		startTime = Time.time;
	
	}

	// Update is called once per frame
	void Update () {
		float moveHorizontal = CrossPlatformInputManager.GetAxis("Horizontal");
		float moveVertical = CrossPlatformInputManager.GetAxis("Vertical");

		move (moveHorizontal, moveVertical);
		footstep ();

		if (coolingDown == true && secondsTime<=waitTime)
		{
			//Reduce fill amount over 30 seconds

			secondsTime = Time.timeSinceLevelLoad - startTime;
			controleMentalImg.fillAmount = secondsTime/waitTime;
			print (secondsTime/waitTime);
			if (secondsTime/waitTime >= 1.0f) {
				startTime = Time.timeSinceLevelLoad;
				//				secondsTime = Time.timeSinceLevelLoad - startTime;
				waitTime = secondsTime + 5.0f;
			}
		}
	}

	void move(float moveHorizontal, float moveVertical) {
		Vector3 move = new Vector3 (moveHorizontal, moveVertical, 0);
		transform.position += move * speed * Time.deltaTime;
        if (move != Vector3.zero){
            float angle = (Mathf.Atan2(move.y, move.x) * Mathf.Rad2Deg) - 90;
            transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
        }
        else
        {
            transform.rotation = transform.rotation;
        }
	}

	void footstep(){
		if(Vector2.Distance(transform.position, lastFoot) > 0.7f){
			if (lastFootBool) {
				GameObject foot =(GameObject)Instantiate (this.foot1);
				foot.transform.position = new Vector3 (rightFoot.position.x, rightFoot.position.y, 0.5f);
                foot.transform.rotation = transform.rotation;
				lastFoot = this.transform.position;
				lastFootBool = false;
			} else {
				GameObject foot =(GameObject)Instantiate (this.foot2);
				foot.transform.position = new Vector3 (leftFoot.position.x, leftFoot.position.y, 0.5f);
                float angle = (Mathf.Atan2(transform.position.y, transform.position.x) * Mathf.Rad2Deg) - 90;
                foot.transform.rotation = transform.rotation;
				lastFoot = this.transform.position;
				lastFootBool = true;
			}
		}
	}

	void OnTriggerEnter2D (Collider2D col){
		if (col.name == "Corn" && col.transform.parent.name == "Dirt 1(Clone)") {
			Material mat = col.transform.parent.GetComponent<Renderer> ().material;
			mat.SetColor ("_EmissionColor", Color.green * 0.2f);
			Destroy (col.gameObject);
		}
	}
}
