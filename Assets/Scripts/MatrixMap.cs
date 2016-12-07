using UnityEngine;
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
	//Condicao de vitoria
	private int redCorns;
	private int cornsDobrados;
	private bool pego;
	//layout perda
	public Image panelFinal;
	public Text finalText;
	//layout perigo
	public Image alertPerigoBorder;
	private float alertTimer = 3;
	public bool alertBool;
	//Text milhos que faltam
	public Text milhosRestantesText;
	public Text timerText;
	public float timeLeft;
	private bool terminouATempo = true;
	public bool naoFoiVisto = true;
	//Fim Daniel

	float shineTimer;
	bool isShine;

	float fireflyTimer;


	void Start () {
		matrix = new GameObject[42, 42];
		startTimeMind = Time.time;
		startTimeDistraction = Time.time;
		startTimeSlow = Time.time;
		isShine = false;
		shineTimer = Time.time;
		shine.SetFloat ("_Adjust", 2);
		pego = false;
		fireflyTimer = Time.time;
		Time.timeScale = 1;
		//condicao de vitoria
//		redCorns = gameObject.GetComponentInParent<CreateMap>().redCorns;
//		print ("Red: " + redCorns);

	}
	void Update(){

		timeLeft -= Time.deltaTime;
		float minutos = timeLeft / 60;
		float segundos = timeLeft % 60;
		timerText.text = Mathf.Floor(minutos)+ ":" + Mathf.Round(segundos);
		if(timeLeft < 0){
			terminouATempo = false;
		}

		float delta = Time.time - fireflyTimer;
		int rand = Random.Range (0, 10);
		if (delta >= 5f) {
			if (rand >= 5) {
				gameObject.GetComponent<FireflyManager> ().addFirefly ();
			} else {
				fireflyTimer = Time.time;
			}
		}

		setBrightness ();

		if (cornsDobrados == redCorns) {
			print ("VENCEU");
			Time.timeScale = 0;
			finalText.text = "Você está mais perto de ser resgatado!";
			if (panelFinal.transform.position.x > 0){
				panelFinal.transform.position = Vector3.MoveTowards(panelFinal.transform.position, new Vector3(panelFinal.transform.parent.position.x, panelFinal.transform.position.y, panelFinal.transform.position.z), 150f);
			}
		}

		if (pego == true) {
			finalText.text = "Você foi levado para a área 51!";
			Time.timeScale = 0;
			if (panelFinal.transform.position.x > 0){
				panelFinal.transform.position = Vector3.MoveTowards(panelFinal.transform.position, new Vector3(panelFinal.transform.parent.position.x, panelFinal.transform.position.y, panelFinal.transform.position.z), 150f);
			}
		}

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
//		if (alertBool == true) {
			PlayerEmPerigo ();
//		}
	}

	public void PlayerVisto (){
		naoFoiVisto = false;
	}

	public void PlayerPego (){
		pego = true;
	}

	public void RecebeRedCorns(int numberOfRedCorns){
		redCorns = numberOfRedCorns;
		milhosRestantesText.text = redCorns.ToString ();
	}

	public void CornDobrado(){
		cornsDobrados++;
		int milhosRestantes = redCorns - cornsDobrados;
		milhosRestantesText.text = milhosRestantes.ToString();
	}

	public void PlayerEmPerigo(){
		if (alertBool) {
			
			Color color = alertPerigoBorder.color;
			float t = (Time.time - alertTimer) / 1.0f;
			if (alertBool) {
//			shine.SetFloat("_Adjust",Mathf.SmoothStep (2f, 4f, t));
				color.a = t / 1.5f;
			} else {
//			shine.SetFloat("_Adjust",Mathf.SmoothStep (4f, 2f, t));
				color.a = t / 1.5f;
			}
			alertPerigoBorder.color = color;

			if (t >= 1.0f) {
				alertTimer = Time.time;
				if (alertBool) {
					alertBool = false;
				} else {
					alertBool = true;
				}
			}
		} else {
			alertBool = false;
			Color color = alertPerigoBorder.color;
			color.a = 0.0f;
			alertPerigoBorder.color = color;
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

	public void onSightCheck(Vector3 position){
		bool check = false;
		GameObject[] enemies = GameObject.FindGameObjectsWithTag ("Police");
		for (int count = 0; count < enemies.Length; count++) {
			if (enemies [count].GetComponent<Police>().onSight) {
				check = true;
			}
		}

		if (!check) {
			for (int count = 0; count < enemies.Length; count++) {
				enemies [count].GetComponent<Police>().inspectPosition(position);
			}
		}
	}

	public void test(){
		print ("teste");
	}

	public void tentarNovamente(){
		Application.LoadLevel (Application.loadedLevel);
	}
}
	