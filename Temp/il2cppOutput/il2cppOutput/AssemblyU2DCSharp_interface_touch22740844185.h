#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// Camera
struct Camera_t2011082565;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// interface_touch2
struct  interface_touch2_t2740844185  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject interface_touch2::cLight
	GameObject_t3674682005 * ___cLight_2;
	// UnityEngine.GameObject interface_touch2::cubeL
	GameObject_t3674682005 * ___cubeL_3;
	// Camera interface_touch2::cam
	Camera_t2011082565 * ___cam_4;
	// System.Int32 interface_touch2::lightCount
	int32_t ___lightCount_6;

public:
	inline static int32_t get_offset_of_cLight_2() { return static_cast<int32_t>(offsetof(interface_touch2_t2740844185, ___cLight_2)); }
	inline GameObject_t3674682005 * get_cLight_2() const { return ___cLight_2; }
	inline GameObject_t3674682005 ** get_address_of_cLight_2() { return &___cLight_2; }
	inline void set_cLight_2(GameObject_t3674682005 * value)
	{
		___cLight_2 = value;
		Il2CppCodeGenWriteBarrier(&___cLight_2, value);
	}

	inline static int32_t get_offset_of_cubeL_3() { return static_cast<int32_t>(offsetof(interface_touch2_t2740844185, ___cubeL_3)); }
	inline GameObject_t3674682005 * get_cubeL_3() const { return ___cubeL_3; }
	inline GameObject_t3674682005 ** get_address_of_cubeL_3() { return &___cubeL_3; }
	inline void set_cubeL_3(GameObject_t3674682005 * value)
	{
		___cubeL_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeL_3, value);
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(interface_touch2_t2740844185, ___cam_4)); }
	inline Camera_t2011082565 * get_cam_4() const { return ___cam_4; }
	inline Camera_t2011082565 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_t2011082565 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier(&___cam_4, value);
	}

	inline static int32_t get_offset_of_lightCount_6() { return static_cast<int32_t>(offsetof(interface_touch2_t2740844185, ___lightCount_6)); }
	inline int32_t get_lightCount_6() const { return ___lightCount_6; }
	inline int32_t* get_address_of_lightCount_6() { return &___lightCount_6; }
	inline void set_lightCount_6(int32_t value)
	{
		___lightCount_6 = value;
	}
};

struct interface_touch2_t2740844185_StaticFields
{
public:
	// System.Int32 interface_touch2::vertexCount
	int32_t ___vertexCount_5;

public:
	inline static int32_t get_offset_of_vertexCount_5() { return static_cast<int32_t>(offsetof(interface_touch2_t2740844185_StaticFields, ___vertexCount_5)); }
	inline int32_t get_vertexCount_5() const { return ___vertexCount_5; }
	inline int32_t* get_address_of_vertexCount_5() { return &___vertexCount_5; }
	inline void set_vertexCount_5(int32_t value)
	{
		___vertexCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
