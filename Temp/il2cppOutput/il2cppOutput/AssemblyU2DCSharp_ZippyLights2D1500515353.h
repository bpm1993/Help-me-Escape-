#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t4202674828;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.Gradient
struct Gradient_t3661184436;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;
// UnityEngine.MeshFilter
struct MeshFilter_t3839065225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZippyLights2D
struct  ZippyLights2D_t1500515353  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean ZippyLights2D::idle
	bool ___idle_2;
	// System.Boolean ZippyLights2D::lightEnabled
	bool ___lightEnabled_3;
	// System.Int32 ZippyLights2D::resolution
	int32_t ___resolution_4;
	// System.Single ZippyLights2D::degrees
	float ___degrees_5;
	// System.Boolean ZippyLights2D::moveToUpdate
	bool ___moveToUpdate_6;
	// UnityEngine.LayerMask ZippyLights2D::layers
	LayerMask_t3236759763  ___layers_7;
	// UnityEngine.Light ZippyLights2D::unityLight
	Light_t4202674828 * ___unityLight_8;
	// UnityEngine.Transform ZippyLights2D::follow
	Transform_t1659122786 * ___follow_9;
	// System.Single ZippyLights2D::range
	float ___range_10;
	// System.Boolean ZippyLights2D::animateRange
	bool ___animateRange_11;
	// UnityEngine.AnimationCurve ZippyLights2D::rangeAnimation
	AnimationCurve_t3667593487 * ___rangeAnimation_12;
	// System.Single ZippyLights2D::animateRangeSpeed
	float ___animateRangeSpeed_13;
	// System.Single ZippyLights2D::animateRangeScale
	float ___animateRangeScale_14;
	// System.Boolean ZippyLights2D::enableVertexColors
	bool ___enableVertexColors_15;
	// System.Boolean ZippyLights2D::vertexFade
	bool ___vertexFade_16;
	// UnityEngine.Color ZippyLights2D::vertexColor
	Color_t4194546905  ___vertexColor_17;
	// UnityEngine.Color ZippyLights2D::vertexColorOuter
	Color_t4194546905  ___vertexColorOuter_18;
	// System.Boolean ZippyLights2D::ColorCycleEnabled
	bool ___ColorCycleEnabled_19;
	// UnityEngine.Gradient ZippyLights2D::ColorCycle
	Gradient_t3661184436 * ___ColorCycle_20;
	// System.Single ZippyLights2D::ColorCycleSpeed
	float ___ColorCycleSpeed_21;
	// System.Boolean ZippyLights2D::ColorCycleOuterEnabled
	bool ___ColorCycleOuterEnabled_22;
	// UnityEngine.Gradient ZippyLights2D::ColorCycleOuter
	Gradient_t3661184436 * ___ColorCycleOuter_23;
	// System.Single ZippyLights2D::ColorCycleSpeedOuter
	float ___ColorCycleSpeedOuter_24;
	// System.Boolean ZippyLights2D::CreateUV
	bool ___CreateUV_25;
	// System.Single ZippyLights2D::UVScale
	float ___UVScale_26;
	// System.Single ZippyLights2D::noise
	float ___noise_27;
	// System.Single ZippyLights2D::noiseDelay
	float ___noiseDelay_28;
	// System.Single ZippyLights2D::noiseVal
	float ___noiseVal_29;
	// System.Int32 ZippyLights2D::sortingOrder
	int32_t ___sortingOrder_30;
	// System.Int32 ZippyLights2D::sortingLayer
	int32_t ___sortingLayer_31;
	// UnityEngine.ParticleSystem ZippyLights2D::particles
	ParticleSystem_t381473177 * ___particles_32;
	// System.Single ZippyLights2D::particleEmitDelay
	float ___particleEmitDelay_33;
	// System.Single ZippyLights2D::particleRayAmount
	float ___particleRayAmount_34;
	// System.Int32 ZippyLights2D::particleEmitAmount
	int32_t ___particleEmitAmount_35;
	// System.Single ZippyLights2D::particleRangeLimitMin
	float ___particleRangeLimitMin_36;
	// System.Single ZippyLights2D::particleRangeLimitMax
	float ___particleRangeLimitMax_37;
	// System.Single ZippyLights2D::lightTime
	float ___lightTime_38;
	// UnityEngine.Vector3[] ZippyLights2D::points
	Vector3U5BU5D_t215400611* ___points_39;
	// UnityEngine.Vector3[] ZippyLights2D::pointsX
	Vector3U5BU5D_t215400611* ___pointsX_40;
	// UnityEngine.Vector3[] ZippyLights2D::pointsP
	Vector3U5BU5D_t215400611* ___pointsP_41;
	// System.Single[] ZippyLights2D::str
	SingleU5BU5D_t2316563989* ___str_42;
	// UnityEngine.Vector3 ZippyLights2D::savePos
	Vector3_t4282066566  ___savePos_43;
	// UnityEngine.Quaternion ZippyLights2D::saveRot
	Quaternion_t1553702882  ___saveRot_44;
	// UnityEngine.Mesh ZippyLights2D::lightMesh
	Mesh_t4241756145 * ___lightMesh_45;
	// UnityEngine.Transform ZippyLights2D::cacheTransform
	Transform_t1659122786 * ___cacheTransform_46;
	// UnityEngine.Transform ZippyLights2D::cacheParticleTransform
	Transform_t1659122786 * ___cacheParticleTransform_47;
	// UnityEngine.MeshRenderer ZippyLights2D::cacheMeshRenderer
	MeshRenderer_t2804666580 * ___cacheMeshRenderer_48;
	// UnityEngine.MeshFilter ZippyLights2D::cacheMeshFilter
	MeshFilter_t3839065225 * ___cacheMeshFilter_49;
	// System.Int32 ZippyLights2D::pointsPlenght
	int32_t ___pointsPlenght_50;
	// System.Single ZippyLights2D::degreeResolution
	float ___degreeResolution_51;

public:
	inline static int32_t get_offset_of_idle_2() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___idle_2)); }
	inline bool get_idle_2() const { return ___idle_2; }
	inline bool* get_address_of_idle_2() { return &___idle_2; }
	inline void set_idle_2(bool value)
	{
		___idle_2 = value;
	}

	inline static int32_t get_offset_of_lightEnabled_3() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___lightEnabled_3)); }
	inline bool get_lightEnabled_3() const { return ___lightEnabled_3; }
	inline bool* get_address_of_lightEnabled_3() { return &___lightEnabled_3; }
	inline void set_lightEnabled_3(bool value)
	{
		___lightEnabled_3 = value;
	}

	inline static int32_t get_offset_of_resolution_4() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___resolution_4)); }
	inline int32_t get_resolution_4() const { return ___resolution_4; }
	inline int32_t* get_address_of_resolution_4() { return &___resolution_4; }
	inline void set_resolution_4(int32_t value)
	{
		___resolution_4 = value;
	}

	inline static int32_t get_offset_of_degrees_5() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___degrees_5)); }
	inline float get_degrees_5() const { return ___degrees_5; }
	inline float* get_address_of_degrees_5() { return &___degrees_5; }
	inline void set_degrees_5(float value)
	{
		___degrees_5 = value;
	}

	inline static int32_t get_offset_of_moveToUpdate_6() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___moveToUpdate_6)); }
	inline bool get_moveToUpdate_6() const { return ___moveToUpdate_6; }
	inline bool* get_address_of_moveToUpdate_6() { return &___moveToUpdate_6; }
	inline void set_moveToUpdate_6(bool value)
	{
		___moveToUpdate_6 = value;
	}

	inline static int32_t get_offset_of_layers_7() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___layers_7)); }
	inline LayerMask_t3236759763  get_layers_7() const { return ___layers_7; }
	inline LayerMask_t3236759763 * get_address_of_layers_7() { return &___layers_7; }
	inline void set_layers_7(LayerMask_t3236759763  value)
	{
		___layers_7 = value;
	}

	inline static int32_t get_offset_of_unityLight_8() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___unityLight_8)); }
	inline Light_t4202674828 * get_unityLight_8() const { return ___unityLight_8; }
	inline Light_t4202674828 ** get_address_of_unityLight_8() { return &___unityLight_8; }
	inline void set_unityLight_8(Light_t4202674828 * value)
	{
		___unityLight_8 = value;
		Il2CppCodeGenWriteBarrier(&___unityLight_8, value);
	}

	inline static int32_t get_offset_of_follow_9() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___follow_9)); }
	inline Transform_t1659122786 * get_follow_9() const { return ___follow_9; }
	inline Transform_t1659122786 ** get_address_of_follow_9() { return &___follow_9; }
	inline void set_follow_9(Transform_t1659122786 * value)
	{
		___follow_9 = value;
		Il2CppCodeGenWriteBarrier(&___follow_9, value);
	}

	inline static int32_t get_offset_of_range_10() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___range_10)); }
	inline float get_range_10() const { return ___range_10; }
	inline float* get_address_of_range_10() { return &___range_10; }
	inline void set_range_10(float value)
	{
		___range_10 = value;
	}

	inline static int32_t get_offset_of_animateRange_11() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___animateRange_11)); }
	inline bool get_animateRange_11() const { return ___animateRange_11; }
	inline bool* get_address_of_animateRange_11() { return &___animateRange_11; }
	inline void set_animateRange_11(bool value)
	{
		___animateRange_11 = value;
	}

	inline static int32_t get_offset_of_rangeAnimation_12() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___rangeAnimation_12)); }
	inline AnimationCurve_t3667593487 * get_rangeAnimation_12() const { return ___rangeAnimation_12; }
	inline AnimationCurve_t3667593487 ** get_address_of_rangeAnimation_12() { return &___rangeAnimation_12; }
	inline void set_rangeAnimation_12(AnimationCurve_t3667593487 * value)
	{
		___rangeAnimation_12 = value;
		Il2CppCodeGenWriteBarrier(&___rangeAnimation_12, value);
	}

	inline static int32_t get_offset_of_animateRangeSpeed_13() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___animateRangeSpeed_13)); }
	inline float get_animateRangeSpeed_13() const { return ___animateRangeSpeed_13; }
	inline float* get_address_of_animateRangeSpeed_13() { return &___animateRangeSpeed_13; }
	inline void set_animateRangeSpeed_13(float value)
	{
		___animateRangeSpeed_13 = value;
	}

	inline static int32_t get_offset_of_animateRangeScale_14() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___animateRangeScale_14)); }
	inline float get_animateRangeScale_14() const { return ___animateRangeScale_14; }
	inline float* get_address_of_animateRangeScale_14() { return &___animateRangeScale_14; }
	inline void set_animateRangeScale_14(float value)
	{
		___animateRangeScale_14 = value;
	}

	inline static int32_t get_offset_of_enableVertexColors_15() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___enableVertexColors_15)); }
	inline bool get_enableVertexColors_15() const { return ___enableVertexColors_15; }
	inline bool* get_address_of_enableVertexColors_15() { return &___enableVertexColors_15; }
	inline void set_enableVertexColors_15(bool value)
	{
		___enableVertexColors_15 = value;
	}

	inline static int32_t get_offset_of_vertexFade_16() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___vertexFade_16)); }
	inline bool get_vertexFade_16() const { return ___vertexFade_16; }
	inline bool* get_address_of_vertexFade_16() { return &___vertexFade_16; }
	inline void set_vertexFade_16(bool value)
	{
		___vertexFade_16 = value;
	}

	inline static int32_t get_offset_of_vertexColor_17() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___vertexColor_17)); }
	inline Color_t4194546905  get_vertexColor_17() const { return ___vertexColor_17; }
	inline Color_t4194546905 * get_address_of_vertexColor_17() { return &___vertexColor_17; }
	inline void set_vertexColor_17(Color_t4194546905  value)
	{
		___vertexColor_17 = value;
	}

	inline static int32_t get_offset_of_vertexColorOuter_18() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___vertexColorOuter_18)); }
	inline Color_t4194546905  get_vertexColorOuter_18() const { return ___vertexColorOuter_18; }
	inline Color_t4194546905 * get_address_of_vertexColorOuter_18() { return &___vertexColorOuter_18; }
	inline void set_vertexColorOuter_18(Color_t4194546905  value)
	{
		___vertexColorOuter_18 = value;
	}

	inline static int32_t get_offset_of_ColorCycleEnabled_19() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___ColorCycleEnabled_19)); }
	inline bool get_ColorCycleEnabled_19() const { return ___ColorCycleEnabled_19; }
	inline bool* get_address_of_ColorCycleEnabled_19() { return &___ColorCycleEnabled_19; }
	inline void set_ColorCycleEnabled_19(bool value)
	{
		___ColorCycleEnabled_19 = value;
	}

	inline static int32_t get_offset_of_ColorCycle_20() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___ColorCycle_20)); }
	inline Gradient_t3661184436 * get_ColorCycle_20() const { return ___ColorCycle_20; }
	inline Gradient_t3661184436 ** get_address_of_ColorCycle_20() { return &___ColorCycle_20; }
	inline void set_ColorCycle_20(Gradient_t3661184436 * value)
	{
		___ColorCycle_20 = value;
		Il2CppCodeGenWriteBarrier(&___ColorCycle_20, value);
	}

	inline static int32_t get_offset_of_ColorCycleSpeed_21() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___ColorCycleSpeed_21)); }
	inline float get_ColorCycleSpeed_21() const { return ___ColorCycleSpeed_21; }
	inline float* get_address_of_ColorCycleSpeed_21() { return &___ColorCycleSpeed_21; }
	inline void set_ColorCycleSpeed_21(float value)
	{
		___ColorCycleSpeed_21 = value;
	}

	inline static int32_t get_offset_of_ColorCycleOuterEnabled_22() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___ColorCycleOuterEnabled_22)); }
	inline bool get_ColorCycleOuterEnabled_22() const { return ___ColorCycleOuterEnabled_22; }
	inline bool* get_address_of_ColorCycleOuterEnabled_22() { return &___ColorCycleOuterEnabled_22; }
	inline void set_ColorCycleOuterEnabled_22(bool value)
	{
		___ColorCycleOuterEnabled_22 = value;
	}

	inline static int32_t get_offset_of_ColorCycleOuter_23() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___ColorCycleOuter_23)); }
	inline Gradient_t3661184436 * get_ColorCycleOuter_23() const { return ___ColorCycleOuter_23; }
	inline Gradient_t3661184436 ** get_address_of_ColorCycleOuter_23() { return &___ColorCycleOuter_23; }
	inline void set_ColorCycleOuter_23(Gradient_t3661184436 * value)
	{
		___ColorCycleOuter_23 = value;
		Il2CppCodeGenWriteBarrier(&___ColorCycleOuter_23, value);
	}

	inline static int32_t get_offset_of_ColorCycleSpeedOuter_24() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___ColorCycleSpeedOuter_24)); }
	inline float get_ColorCycleSpeedOuter_24() const { return ___ColorCycleSpeedOuter_24; }
	inline float* get_address_of_ColorCycleSpeedOuter_24() { return &___ColorCycleSpeedOuter_24; }
	inline void set_ColorCycleSpeedOuter_24(float value)
	{
		___ColorCycleSpeedOuter_24 = value;
	}

	inline static int32_t get_offset_of_CreateUV_25() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___CreateUV_25)); }
	inline bool get_CreateUV_25() const { return ___CreateUV_25; }
	inline bool* get_address_of_CreateUV_25() { return &___CreateUV_25; }
	inline void set_CreateUV_25(bool value)
	{
		___CreateUV_25 = value;
	}

	inline static int32_t get_offset_of_UVScale_26() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___UVScale_26)); }
	inline float get_UVScale_26() const { return ___UVScale_26; }
	inline float* get_address_of_UVScale_26() { return &___UVScale_26; }
	inline void set_UVScale_26(float value)
	{
		___UVScale_26 = value;
	}

	inline static int32_t get_offset_of_noise_27() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___noise_27)); }
	inline float get_noise_27() const { return ___noise_27; }
	inline float* get_address_of_noise_27() { return &___noise_27; }
	inline void set_noise_27(float value)
	{
		___noise_27 = value;
	}

	inline static int32_t get_offset_of_noiseDelay_28() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___noiseDelay_28)); }
	inline float get_noiseDelay_28() const { return ___noiseDelay_28; }
	inline float* get_address_of_noiseDelay_28() { return &___noiseDelay_28; }
	inline void set_noiseDelay_28(float value)
	{
		___noiseDelay_28 = value;
	}

	inline static int32_t get_offset_of_noiseVal_29() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___noiseVal_29)); }
	inline float get_noiseVal_29() const { return ___noiseVal_29; }
	inline float* get_address_of_noiseVal_29() { return &___noiseVal_29; }
	inline void set_noiseVal_29(float value)
	{
		___noiseVal_29 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_30() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___sortingOrder_30)); }
	inline int32_t get_sortingOrder_30() const { return ___sortingOrder_30; }
	inline int32_t* get_address_of_sortingOrder_30() { return &___sortingOrder_30; }
	inline void set_sortingOrder_30(int32_t value)
	{
		___sortingOrder_30 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_31() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___sortingLayer_31)); }
	inline int32_t get_sortingLayer_31() const { return ___sortingLayer_31; }
	inline int32_t* get_address_of_sortingLayer_31() { return &___sortingLayer_31; }
	inline void set_sortingLayer_31(int32_t value)
	{
		___sortingLayer_31 = value;
	}

	inline static int32_t get_offset_of_particles_32() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___particles_32)); }
	inline ParticleSystem_t381473177 * get_particles_32() const { return ___particles_32; }
	inline ParticleSystem_t381473177 ** get_address_of_particles_32() { return &___particles_32; }
	inline void set_particles_32(ParticleSystem_t381473177 * value)
	{
		___particles_32 = value;
		Il2CppCodeGenWriteBarrier(&___particles_32, value);
	}

	inline static int32_t get_offset_of_particleEmitDelay_33() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___particleEmitDelay_33)); }
	inline float get_particleEmitDelay_33() const { return ___particleEmitDelay_33; }
	inline float* get_address_of_particleEmitDelay_33() { return &___particleEmitDelay_33; }
	inline void set_particleEmitDelay_33(float value)
	{
		___particleEmitDelay_33 = value;
	}

	inline static int32_t get_offset_of_particleRayAmount_34() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___particleRayAmount_34)); }
	inline float get_particleRayAmount_34() const { return ___particleRayAmount_34; }
	inline float* get_address_of_particleRayAmount_34() { return &___particleRayAmount_34; }
	inline void set_particleRayAmount_34(float value)
	{
		___particleRayAmount_34 = value;
	}

	inline static int32_t get_offset_of_particleEmitAmount_35() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___particleEmitAmount_35)); }
	inline int32_t get_particleEmitAmount_35() const { return ___particleEmitAmount_35; }
	inline int32_t* get_address_of_particleEmitAmount_35() { return &___particleEmitAmount_35; }
	inline void set_particleEmitAmount_35(int32_t value)
	{
		___particleEmitAmount_35 = value;
	}

	inline static int32_t get_offset_of_particleRangeLimitMin_36() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___particleRangeLimitMin_36)); }
	inline float get_particleRangeLimitMin_36() const { return ___particleRangeLimitMin_36; }
	inline float* get_address_of_particleRangeLimitMin_36() { return &___particleRangeLimitMin_36; }
	inline void set_particleRangeLimitMin_36(float value)
	{
		___particleRangeLimitMin_36 = value;
	}

	inline static int32_t get_offset_of_particleRangeLimitMax_37() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___particleRangeLimitMax_37)); }
	inline float get_particleRangeLimitMax_37() const { return ___particleRangeLimitMax_37; }
	inline float* get_address_of_particleRangeLimitMax_37() { return &___particleRangeLimitMax_37; }
	inline void set_particleRangeLimitMax_37(float value)
	{
		___particleRangeLimitMax_37 = value;
	}

	inline static int32_t get_offset_of_lightTime_38() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___lightTime_38)); }
	inline float get_lightTime_38() const { return ___lightTime_38; }
	inline float* get_address_of_lightTime_38() { return &___lightTime_38; }
	inline void set_lightTime_38(float value)
	{
		___lightTime_38 = value;
	}

	inline static int32_t get_offset_of_points_39() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___points_39)); }
	inline Vector3U5BU5D_t215400611* get_points_39() const { return ___points_39; }
	inline Vector3U5BU5D_t215400611** get_address_of_points_39() { return &___points_39; }
	inline void set_points_39(Vector3U5BU5D_t215400611* value)
	{
		___points_39 = value;
		Il2CppCodeGenWriteBarrier(&___points_39, value);
	}

	inline static int32_t get_offset_of_pointsX_40() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___pointsX_40)); }
	inline Vector3U5BU5D_t215400611* get_pointsX_40() const { return ___pointsX_40; }
	inline Vector3U5BU5D_t215400611** get_address_of_pointsX_40() { return &___pointsX_40; }
	inline void set_pointsX_40(Vector3U5BU5D_t215400611* value)
	{
		___pointsX_40 = value;
		Il2CppCodeGenWriteBarrier(&___pointsX_40, value);
	}

	inline static int32_t get_offset_of_pointsP_41() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___pointsP_41)); }
	inline Vector3U5BU5D_t215400611* get_pointsP_41() const { return ___pointsP_41; }
	inline Vector3U5BU5D_t215400611** get_address_of_pointsP_41() { return &___pointsP_41; }
	inline void set_pointsP_41(Vector3U5BU5D_t215400611* value)
	{
		___pointsP_41 = value;
		Il2CppCodeGenWriteBarrier(&___pointsP_41, value);
	}

	inline static int32_t get_offset_of_str_42() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___str_42)); }
	inline SingleU5BU5D_t2316563989* get_str_42() const { return ___str_42; }
	inline SingleU5BU5D_t2316563989** get_address_of_str_42() { return &___str_42; }
	inline void set_str_42(SingleU5BU5D_t2316563989* value)
	{
		___str_42 = value;
		Il2CppCodeGenWriteBarrier(&___str_42, value);
	}

	inline static int32_t get_offset_of_savePos_43() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___savePos_43)); }
	inline Vector3_t4282066566  get_savePos_43() const { return ___savePos_43; }
	inline Vector3_t4282066566 * get_address_of_savePos_43() { return &___savePos_43; }
	inline void set_savePos_43(Vector3_t4282066566  value)
	{
		___savePos_43 = value;
	}

	inline static int32_t get_offset_of_saveRot_44() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___saveRot_44)); }
	inline Quaternion_t1553702882  get_saveRot_44() const { return ___saveRot_44; }
	inline Quaternion_t1553702882 * get_address_of_saveRot_44() { return &___saveRot_44; }
	inline void set_saveRot_44(Quaternion_t1553702882  value)
	{
		___saveRot_44 = value;
	}

	inline static int32_t get_offset_of_lightMesh_45() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___lightMesh_45)); }
	inline Mesh_t4241756145 * get_lightMesh_45() const { return ___lightMesh_45; }
	inline Mesh_t4241756145 ** get_address_of_lightMesh_45() { return &___lightMesh_45; }
	inline void set_lightMesh_45(Mesh_t4241756145 * value)
	{
		___lightMesh_45 = value;
		Il2CppCodeGenWriteBarrier(&___lightMesh_45, value);
	}

	inline static int32_t get_offset_of_cacheTransform_46() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___cacheTransform_46)); }
	inline Transform_t1659122786 * get_cacheTransform_46() const { return ___cacheTransform_46; }
	inline Transform_t1659122786 ** get_address_of_cacheTransform_46() { return &___cacheTransform_46; }
	inline void set_cacheTransform_46(Transform_t1659122786 * value)
	{
		___cacheTransform_46 = value;
		Il2CppCodeGenWriteBarrier(&___cacheTransform_46, value);
	}

	inline static int32_t get_offset_of_cacheParticleTransform_47() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___cacheParticleTransform_47)); }
	inline Transform_t1659122786 * get_cacheParticleTransform_47() const { return ___cacheParticleTransform_47; }
	inline Transform_t1659122786 ** get_address_of_cacheParticleTransform_47() { return &___cacheParticleTransform_47; }
	inline void set_cacheParticleTransform_47(Transform_t1659122786 * value)
	{
		___cacheParticleTransform_47 = value;
		Il2CppCodeGenWriteBarrier(&___cacheParticleTransform_47, value);
	}

	inline static int32_t get_offset_of_cacheMeshRenderer_48() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___cacheMeshRenderer_48)); }
	inline MeshRenderer_t2804666580 * get_cacheMeshRenderer_48() const { return ___cacheMeshRenderer_48; }
	inline MeshRenderer_t2804666580 ** get_address_of_cacheMeshRenderer_48() { return &___cacheMeshRenderer_48; }
	inline void set_cacheMeshRenderer_48(MeshRenderer_t2804666580 * value)
	{
		___cacheMeshRenderer_48 = value;
		Il2CppCodeGenWriteBarrier(&___cacheMeshRenderer_48, value);
	}

	inline static int32_t get_offset_of_cacheMeshFilter_49() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___cacheMeshFilter_49)); }
	inline MeshFilter_t3839065225 * get_cacheMeshFilter_49() const { return ___cacheMeshFilter_49; }
	inline MeshFilter_t3839065225 ** get_address_of_cacheMeshFilter_49() { return &___cacheMeshFilter_49; }
	inline void set_cacheMeshFilter_49(MeshFilter_t3839065225 * value)
	{
		___cacheMeshFilter_49 = value;
		Il2CppCodeGenWriteBarrier(&___cacheMeshFilter_49, value);
	}

	inline static int32_t get_offset_of_pointsPlenght_50() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___pointsPlenght_50)); }
	inline int32_t get_pointsPlenght_50() const { return ___pointsPlenght_50; }
	inline int32_t* get_address_of_pointsPlenght_50() { return &___pointsPlenght_50; }
	inline void set_pointsPlenght_50(int32_t value)
	{
		___pointsPlenght_50 = value;
	}

	inline static int32_t get_offset_of_degreeResolution_51() { return static_cast<int32_t>(offsetof(ZippyLights2D_t1500515353, ___degreeResolution_51)); }
	inline float get_degreeResolution_51() const { return ___degreeResolution_51; }
	inline float* get_address_of_degreeResolution_51() { return &___degreeResolution_51; }
	inline void set_degreeResolution_51(float value)
	{
		___degreeResolution_51 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
