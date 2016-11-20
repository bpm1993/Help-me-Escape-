#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.PolygonCollider2D[]
struct PolygonCollider2DU5BU5D_t313525459;
// System.Collections.Generic.List`1<verts>
struct List_1_t1480283186;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// System.Comparison`1<verts>
struct Comparison_1_t3123426117;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DynamicLight
struct  DynamicLight_t727943223  : public MonoBehaviour_t667441552
{
public:
	// System.String DynamicLight::version
	String_t* ___version_2;
	// UnityEngine.Material DynamicLight::lightMaterial
	Material_t3870600107 * ___lightMaterial_3;
	// UnityEngine.PolygonCollider2D[] DynamicLight::allMeshes
	PolygonCollider2DU5BU5D_t313525459* ___allMeshes_4;
	// System.Collections.Generic.List`1<verts> DynamicLight::allVertices
	List_1_t1480283186 * ___allVertices_5;
	// System.Single DynamicLight::lightRadius
	float ___lightRadius_6;
	// System.Int32 DynamicLight::lightSegments
	int32_t ___lightSegments_7;
	// UnityEngine.Mesh DynamicLight::lightMesh
	Mesh_t4241756145 * ___lightMesh_8;
	// UnityEngine.LayerMask DynamicLight::layer
	LayerMask_t3236759763  ___layer_9;

public:
	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(DynamicLight_t727943223, ___version_2)); }
	inline String_t* get_version_2() const { return ___version_2; }
	inline String_t** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(String_t* value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier(&___version_2, value);
	}

	inline static int32_t get_offset_of_lightMaterial_3() { return static_cast<int32_t>(offsetof(DynamicLight_t727943223, ___lightMaterial_3)); }
	inline Material_t3870600107 * get_lightMaterial_3() const { return ___lightMaterial_3; }
	inline Material_t3870600107 ** get_address_of_lightMaterial_3() { return &___lightMaterial_3; }
	inline void set_lightMaterial_3(Material_t3870600107 * value)
	{
		___lightMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___lightMaterial_3, value);
	}

	inline static int32_t get_offset_of_allMeshes_4() { return static_cast<int32_t>(offsetof(DynamicLight_t727943223, ___allMeshes_4)); }
	inline PolygonCollider2DU5BU5D_t313525459* get_allMeshes_4() const { return ___allMeshes_4; }
	inline PolygonCollider2DU5BU5D_t313525459** get_address_of_allMeshes_4() { return &___allMeshes_4; }
	inline void set_allMeshes_4(PolygonCollider2DU5BU5D_t313525459* value)
	{
		___allMeshes_4 = value;
		Il2CppCodeGenWriteBarrier(&___allMeshes_4, value);
	}

	inline static int32_t get_offset_of_allVertices_5() { return static_cast<int32_t>(offsetof(DynamicLight_t727943223, ___allVertices_5)); }
	inline List_1_t1480283186 * get_allVertices_5() const { return ___allVertices_5; }
	inline List_1_t1480283186 ** get_address_of_allVertices_5() { return &___allVertices_5; }
	inline void set_allVertices_5(List_1_t1480283186 * value)
	{
		___allVertices_5 = value;
		Il2CppCodeGenWriteBarrier(&___allVertices_5, value);
	}

	inline static int32_t get_offset_of_lightRadius_6() { return static_cast<int32_t>(offsetof(DynamicLight_t727943223, ___lightRadius_6)); }
	inline float get_lightRadius_6() const { return ___lightRadius_6; }
	inline float* get_address_of_lightRadius_6() { return &___lightRadius_6; }
	inline void set_lightRadius_6(float value)
	{
		___lightRadius_6 = value;
	}

	inline static int32_t get_offset_of_lightSegments_7() { return static_cast<int32_t>(offsetof(DynamicLight_t727943223, ___lightSegments_7)); }
	inline int32_t get_lightSegments_7() const { return ___lightSegments_7; }
	inline int32_t* get_address_of_lightSegments_7() { return &___lightSegments_7; }
	inline void set_lightSegments_7(int32_t value)
	{
		___lightSegments_7 = value;
	}

	inline static int32_t get_offset_of_lightMesh_8() { return static_cast<int32_t>(offsetof(DynamicLight_t727943223, ___lightMesh_8)); }
	inline Mesh_t4241756145 * get_lightMesh_8() const { return ___lightMesh_8; }
	inline Mesh_t4241756145 ** get_address_of_lightMesh_8() { return &___lightMesh_8; }
	inline void set_lightMesh_8(Mesh_t4241756145 * value)
	{
		___lightMesh_8 = value;
		Il2CppCodeGenWriteBarrier(&___lightMesh_8, value);
	}

	inline static int32_t get_offset_of_layer_9() { return static_cast<int32_t>(offsetof(DynamicLight_t727943223, ___layer_9)); }
	inline LayerMask_t3236759763  get_layer_9() const { return ___layer_9; }
	inline LayerMask_t3236759763 * get_address_of_layer_9() { return &___layer_9; }
	inline void set_layer_9(LayerMask_t3236759763  value)
	{
		___layer_9 = value;
	}
};

struct DynamicLight_t727943223_StaticFields
{
public:
	// System.Comparison`1<verts> DynamicLight::<>f__am$cache8
	Comparison_1_t3123426117 * ___U3CU3Ef__amU24cache8_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_10() { return static_cast<int32_t>(offsetof(DynamicLight_t727943223_StaticFields, ___U3CU3Ef__amU24cache8_10)); }
	inline Comparison_1_t3123426117 * get_U3CU3Ef__amU24cache8_10() const { return ___U3CU3Ef__amU24cache8_10; }
	inline Comparison_1_t3123426117 ** get_address_of_U3CU3Ef__amU24cache8_10() { return &___U3CU3Ef__amU24cache8_10; }
	inline void set_U3CU3Ef__amU24cache8_10(Comparison_1_t3123426117 * value)
	{
		___U3CU3Ef__amU24cache8_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
