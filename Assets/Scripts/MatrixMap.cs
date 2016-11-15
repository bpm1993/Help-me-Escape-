using UnityEngine;
using System.Collections;

public class MatrixMap : MonoBehaviour {
	public GameObject decoy;
	public bool warned = false;
	private GameObject[,] matrix;

	void Start () {
		matrix = new GameObject[42, 42];
	}
		
	public void addObject(GameObject obj, int x, int y){
		matrix [x, y] = obj;
	}

    internal static void addObject(GameObject dirt)
    {
        throw new System.NotImplementedException();
    }

	public void distraction(){
		Instantiate (decoy);
	}

	public void mindControl(){
		GameObject[] enemies = GameObject.FindGameObjectsWithTag ("Enemy");
		for (int count = 0; count < enemies.Length; count++) {
			if (enemies[count] != gameObject) {
				enemies[count].GetComponent<Enemy>().mindControl ();
			}
		}
	}

	public void slowMotion(){
		GameObject[] enemies = GameObject.FindGameObjectsWithTag ("Enemy");
		for (int count = 0; count < enemies.Length; count++) {
			if (enemies[count] != gameObject) {
				enemies[count].GetComponent<Enemy>().slowMotion ();
			}
		}
	}
}
	