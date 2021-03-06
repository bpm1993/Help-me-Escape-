﻿using UnityEngine;

#if UNITY_EDITOR
	using UnityEditor;
#endif

[RequireComponent (typeof(MeshRenderer))]
[RequireComponent (typeof(MeshFilter))]
[ExecuteInEditMode]

public class ZippyLights2D : MonoBehaviour
{

	[HideInInspector]	public bool idle;
	// When idle the mesh generation is in pause mode, mesh is refreshed if light ray points move.
	[HideInInspector]	public bool lightEnabled = true;
	// Rays will only be cast if this property is enabled.
	
	[Header ("Light Settings")]

	[Tooltip ("How many rays and points the light emits.")]
	[Range (10, 720)]
	public int resolution = 50;

	[Tooltip ("Light area degrees.")]
	[Range (10, 360)]
	public float degrees = 360f;

	#if UNITY_EDITOR
			public float oldDegrees = 360f;
		#endif

	[Tooltip ("Only update the light if it is moving.")]
	public bool moveToUpdate;

	[Tooltip ("What physics layers light interacts with.")]
	public LayerMask layers = -1;

	[Tooltip ("Unity light to apply colors to.")]
	public Light unityLight;

	[Tooltip ("Object to follow.")]
	public Transform follow;


	[Header ("Range Settings")]

	[Tooltip ("How far the light travels.")]
	[Range (1f, 500f)]
	public float range = 15f;

	[Tooltip ("Enable range animation.")]
	public bool animateRange;

	[Tooltip ("How to scale range over time.")]
	public AnimationCurve rangeAnimation;

	[Tooltip ("Animated light range speed.")]
	[Range (0f, 5f)]
	public float animateRangeSpeed = 1f;

	[Tooltip ("Animated light distance.")]
	public float animateRangeScale = 1f;

	
	[Header ("Color Settings")]
	[Tooltip ("Enable vertex colors.")]
	public bool enableVertexColors = true;

	[Tooltip ("Fade edge transparancy.")]
	public bool vertexFade;

	[Tooltip ("Main color of light.")]
	public Color vertexColor = Color.white;

	Color vertexColorOuter = Color.white;

	[Tooltip ("Enable inner light color animation.")]
	public bool ColorCycleEnabled;

	[Tooltip ("Colors to apply over time.")]
	public Gradient ColorCycle;

	[Tooltip ("How fast to cycle colors over time.")]
	public float ColorCycleSpeed = 1f;

	[Tooltip ("Enable mesh color animation for edge of mesh.")]
	public bool ColorCycleOuterEnabled;

	[Tooltip ("Colors to apply over time.")]
	public Gradient ColorCycleOuter;

	[Tooltip ("How fast to cycle outer colors over time.")]
	public float ColorCycleSpeedOuter = 1f;

	[Header ("UV Settings")]
	[Tooltip ("Enable UV generation in mesh.")]
	public bool CreateUV = true;

	[Tooltip ("Size adjustment of mesh UV.")]
	public float UVScale = 1f;

	[Header ("Noise Settings")]
	[Tooltip ("Randomize positions of mesh verts.")]
	[Range (0f, 2f)]
	public float noise = 0;

	[Tooltip ("Delay between each randomization.")]
	[Range (0.01f, .5f)]
	public float noiseDelay = .05f;
	float noiseVal;

	[Header ("Sort Settings")]
	[Tooltip ("Sprite sorting order.")]
	public int sortingOrder = 1;

	[Tooltip ("Sprite sorting layer.")]
	[UnluckSoftware.SortingLayer]
	public int sortingLayer;

	[Header ("Particle Settings")]
	[Tooltip ("Particles emitted when a light ray hits something.")]
	public ParticleSystem particles;
	
	[Tooltip ("Delay between each particle emit.")]
	[Range (0.02f, .1f)]
	public float particleEmitDelay = .1f;
		
	[Tooltip ("How many rays emit particles.")]
	[Range (0.02f, .1f)]
	public float particleRayAmount = .1f;

	[Tooltip ("How many particles to emit.")]
	[Range (1f, 10)]
	public int particleEmitAmount = 2;

	[Tooltip ("Minimum distance light have to travel to emit particle.")]
	public float particleRangeLimitMin = .05f;

	[Tooltip ("Maximum distance light can travel to emit particle.")]
	public float particleRangeLimitMax = 5f;

	#if UNITY_EDITOR
	[Header("Editor Settings")]
	public bool updateInEditor = true;
#endif

	float lightTime;

	Vector3[] points;
	// Holds list of all point raycast hits and default point positions.
	[HideInInspector]	Vector3[] pointsX;
	// Previous version of points, used to compare positions from newly genereated points with the previous.
	[HideInInspector]	public Vector3[] pointsP;
	// Holds list of only point positions where the raycast hit something, no default point positions.
	[HideInInspector]	public float[] str;
	// List of how far away a "points" point is from center.
	[HideInInspector]	public Vector3 savePos;
	// Used to detect if light has moved.
	[HideInInspector]	public Quaternion saveRot;
	// Used to dect if light has rotated.
	Mesh lightMesh;
	// Mesh used for generated light.

	// References to components
	[HideInInspector]	public Transform cacheTransform;
	[HideInInspector]	public Transform cacheParticleTransform;
	[HideInInspector]	MeshRenderer cacheMeshRenderer;
	MeshFilter cacheMeshFilter;
	int pointsPlenght = 0;
	
	float degreeResolution;


	void Awake ()
	{
		Init ();
		Noise ();
		EmitParticles ();
		cacheTransform = transform;
	}

	void OnEnable ()
	{
		if (particles)
			particles.Clear ();
#if UNITY_EDITOR
		if (!Application.isPlaying) {
			Init();
			Brighten();
		}
#endif
	}

	void Noise ()
	{
		Invoke ("Noise", noiseDelay);
		if (!lightEnabled || noise <= 0)
			return;
		noiseVal = 0;
		noiseVal = Random.Range (-noise, noise);
	}

	void EmitParticles ()
	{
		Invoke ("EmitParticles", particleEmitDelay);
		if (!lightEnabled || !particles || pointsP == null)
			return;
		for (int i = 0; i < pointsPlenght; i++) {
			cacheParticleTransform.position = pointsP [i];
			particles.Emit (particleEmitAmount);
		}
	}

	public void Init ()
	{	
		if (lightMesh == null)
			lightMesh = new Mesh ();
		if (cacheMeshFilter == null)
			cacheMeshFilter = gameObject.GetComponent<MeshFilter> ();
		cacheMeshRenderer = gameObject.GetComponent<MeshRenderer> ();
		cacheMeshRenderer.sortingOrder = sortingOrder;
		if (!cacheTransform)
			cacheTransform = transform;
		if (particles && !cacheParticleTransform)
			cacheParticleTransform = particles.transform;
		if (points == null)
			points = new Vector3[resolution];
		degreeResolution = degrees / resolution;
	}

	void Update ()
	{
#if UNITY_EDITOR
		if (!updateInEditor) return;
		if (!Application.isPlaying) {
			Init();			
		}
		
#endif
		Brighten ();
	}

	public void Brighten ()
	{
		if (follow) {
			cacheTransform.position = new Vector3 (follow.position.x, follow.position.y, 0);
			if (degrees < 360)
				cacheTransform.eulerAngles = new Vector3 (0, 0, follow.eulerAngles.z - degrees * .5f);
		}
		if (!cacheMeshRenderer.isVisible) {
			lightEnabled = false;
			return;
		} else if (lightEnabled == false) {
			lightEnabled = true;
		}
		lightTime = Time.time;
#if UNITY_EDITOR
		if (!Application.isPlaying) lightTime = (float)EditorApplication.timeSinceStartup;
#endif
		if (Application.isPlaying && moveToUpdate && savePos == cacheTransform.position && saveRot == cacheTransform.rotation)
			return;
		ScanPoints ();
		MeshGen ();
		savePos = cacheTransform.position;
		saveRot = cacheTransform.rotation;
		if (!lightEnabled)
			return;
		if (ColorCycleEnabled) {
			Color c = ColorCycle.Evaluate (lightTime * ColorCycleSpeed % 1);
			vertexColor = c;
			if (unityLight)
				unityLight.color = c;
		}
		if (ColorCycleOuterEnabled) {
			Color c = ColorCycleOuter.Evaluate (lightTime * ColorCycleSpeedOuter % 1);
			vertexColorOuter = c;
			if (unityLight && !ColorCycleEnabled)
				unityLight.color = c;
		}
		if (animateRange)
			range = rangeAnimation.Evaluate (lightTime * animateRangeSpeed % 1) * animateRangeScale;
	}

	void ScanPoints ()
	{
		degreeResolution = degrees / resolution;

		if (points == null || points.Length != resolution)
			points = new Vector3[resolution];
		if (pointsP == null || pointsP.Length != resolution)
			pointsP = new Vector3[resolution];
		if (str == null || str.Length != resolution)
			str = new float[resolution];
		
		pointsPlenght = 0;
		Vector3 d = cacheTransform.up;
		int pr = (int)(resolution * particleRayAmount);
		Vector3 f = Vector3.forward;
		for (int i = 0; i < resolution; i++) {
			Quaternion q = Quaternion.AngleAxis ((float)(i * degreeResolution) + noiseVal, f);
			Vector3 qd = q * d;
			RaycastHit2D hit = Physics2D.Raycast (cacheTransform.position, qd, range, layers);

			float dist = hit.distance;
			if (hit) {
				//Identificando se a luz bateu no player
				if (hit.collider.gameObject.name == "Player") {
					this.vertexColor = Color.white;
				}
				if (particles && dist < particleRangeLimitMax && dist > particleRangeLimitMin && i % pr == Random.Range (0, pr + 1)) {
					pointsP [pointsPlenght] = hit.point;
					pointsPlenght++;
				}
				points [i] = hit.point;
				str [i] = 1 - dist / range;
			} else {
				points [i] = cacheTransform.position + qd * range;
				str [i] = 0;
			}
		}
	}

	public void ResizeArray (int size, ref Vector3[] arr)
	{
		Vector3[] tmp = new Vector3[size];
		for (int c = 0; c < size; c++) {
			tmp [c] = arr [c];
		}
		arr = tmp;
	}

	bool ComparePoints ()
	{
		if (points.Length != pointsX.Length)
			return true;
		if (pointsX.Length == 0)
			return true;
		for (int i = 0; i < points.Length; i++) {
			if (points [i] != pointsX [i])
				return true;
		}
		return false;
	}

	void MeshGen ()
	{
		if (Application.isPlaying && pointsX != null && ComparePoints () == false) {
			idle = true;
			return;
		} else {
			idle = false;
		}
		int l = points.Length + 2;
		Vector3[] verts = new Vector3[l];
		int[] tris = new int[l * 3 + 3];
		Color[] colors = new Color[l];
		verts [0] = cacheTransform.InverseTransformPoint (cacheTransform.position);
		colors [0] = vertexColor;
		
		for (int i = 0; i < points.Length + 1; i++) {
			int i2 = i + 1;
			verts [i2] = cacheTransform.InverseTransformPoint (points [i % points.Length]);
			if (enableVertexColors) {
				float s = 1;
				if (vertexFade)
					s = str [i % points.Length];
				colors [i2] = new Color (vertexColor.r, vertexColor.g, vertexColor.b, s);
				if (ColorCycleOuterEnabled) {	
					Color c = new Color (vertexColorOuter.r, vertexColorOuter.g, vertexColorOuter.b, s);
					colors [i2] += c * s;
				}
			}
		}
		if (lightMesh.vertices.Length != verts.Length) {
			lightMesh.Clear ();
			int n = 0;
			if (degrees < 360)
				n = -2;
			int x = 0;
			for (var i = 0; i < verts.Length + n; i++) {
				tris [x] = (i + 1) % verts.Length;
				x++;
				tris [x] = i % verts.Length;
				x++;
				tris [x] = 0;
				x++;
			}
			lightMesh.vertices = verts;
			lightMesh.triangles = tris;
		} else {
			lightMesh.vertices = verts;
		}
		
		if (enableVertexColors)
			lightMesh.colors = colors;
		else
			lightMesh.colors = null;
		
		if (CreateUV) {
			Vector2[] u = new Vector2[verts.Length];
			float r = range * UVScale;
			for (int i = 0; i < verts.Length; i++) {
				float r2 = r * .5f;
				u [i] = new Vector2 (verts [i].x / r2 + .5f, verts [i].y / r2 + .5f);
			}
			lightMesh.uv = u;
		} else {
			lightMesh.uv = null;
		}
		if (pointsX != null && pointsX.Length != resolution)
			return;
		cacheMeshFilter.mesh = lightMesh;
		int len = points.Length;
		pointsX = new Vector3[len];
		System.Array.Copy (points, pointsX, len);
	}

	//Force the light to update, might be needed when going down or up to 360 degrees.
	public void ForceUpdate ()
	{
		resolution++;
		Init ();
		Brighten ();	
		resolution--;
	}

	#if UNITY_EDITOR
	void OnDrawGizmos() {
		if (oldDegrees != degrees) {
			ForceUpdate();
			oldDegrees = degrees;
		}
	}
#endif
}
