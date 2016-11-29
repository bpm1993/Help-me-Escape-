#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Camera
struct  Camera_t2011082565  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 Camera::offset
	Vector3_t4282066566  ___offset_2;
	// UnityEngine.Transform Camera::target
	Transform_t1659122786 * ___target_3;
	// System.Single Camera::lastX
	float ___lastX_4;
	// System.Single Camera::lastY
	float ___lastY_5;

public:
	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___offset_2)); }
	inline Vector3_t4282066566  get_offset_2() const { return ___offset_2; }
	inline Vector3_t4282066566 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Vector3_t4282066566  value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___target_3)); }
	inline Transform_t1659122786 * get_target_3() const { return ___target_3; }
	inline Transform_t1659122786 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t1659122786 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_lastX_4() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___lastX_4)); }
	inline float get_lastX_4() const { return ___lastX_4; }
	inline float* get_address_of_lastX_4() { return &___lastX_4; }
	inline void set_lastX_4(float value)
	{
		___lastX_4 = value;
	}

	inline static int32_t get_offset_of_lastY_5() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___lastY_5)); }
	inline float get_lastY_5() const { return ___lastY_5; }
	inline float* get_address_of_lastY_5() { return &___lastY_5; }
	inline void set_lastY_5(float value)
	{
		___lastY_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
