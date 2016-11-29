#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[,]
struct SingleU5BU2CU5D_t2316563990;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "AssemblyU2DCSharp_Enemy67100520.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Police
struct  Police_t2396164414  : public Enemy_t67100520
{
public:
	// System.Single[,] Police::positions
	SingleU5BU2CU5D_t2316563990* ___positions_10;
	// System.Int32 Police::index
	int32_t ___index_11;
	// UnityEngine.Vector3 Police::nextPosition
	Vector3_t4282066566  ___nextPosition_12;
	// UnityEngine.Vector3 Police::tempPosition
	Vector3_t4282066566  ___tempPosition_13;
	// UnityEngine.Transform Police::light
	Transform_t1659122786 * ___light_14;
	// UnityEngine.Vector3 Police::lastPos
	Vector3_t4282066566  ___lastPos_15;
	// System.Boolean Police::isRotating
	bool ___isRotating_16;
	// System.Single Police::rotationTimer
	float ___rotationTimer_17;
	// System.Single Police::rotation
	float ___rotation_18;

public:
	inline static int32_t get_offset_of_positions_10() { return static_cast<int32_t>(offsetof(Police_t2396164414, ___positions_10)); }
	inline SingleU5BU2CU5D_t2316563990* get_positions_10() const { return ___positions_10; }
	inline SingleU5BU2CU5D_t2316563990** get_address_of_positions_10() { return &___positions_10; }
	inline void set_positions_10(SingleU5BU2CU5D_t2316563990* value)
	{
		___positions_10 = value;
		Il2CppCodeGenWriteBarrier(&___positions_10, value);
	}

	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(Police_t2396164414, ___index_11)); }
	inline int32_t get_index_11() const { return ___index_11; }
	inline int32_t* get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(int32_t value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_nextPosition_12() { return static_cast<int32_t>(offsetof(Police_t2396164414, ___nextPosition_12)); }
	inline Vector3_t4282066566  get_nextPosition_12() const { return ___nextPosition_12; }
	inline Vector3_t4282066566 * get_address_of_nextPosition_12() { return &___nextPosition_12; }
	inline void set_nextPosition_12(Vector3_t4282066566  value)
	{
		___nextPosition_12 = value;
	}

	inline static int32_t get_offset_of_tempPosition_13() { return static_cast<int32_t>(offsetof(Police_t2396164414, ___tempPosition_13)); }
	inline Vector3_t4282066566  get_tempPosition_13() const { return ___tempPosition_13; }
	inline Vector3_t4282066566 * get_address_of_tempPosition_13() { return &___tempPosition_13; }
	inline void set_tempPosition_13(Vector3_t4282066566  value)
	{
		___tempPosition_13 = value;
	}

	inline static int32_t get_offset_of_light_14() { return static_cast<int32_t>(offsetof(Police_t2396164414, ___light_14)); }
	inline Transform_t1659122786 * get_light_14() const { return ___light_14; }
	inline Transform_t1659122786 ** get_address_of_light_14() { return &___light_14; }
	inline void set_light_14(Transform_t1659122786 * value)
	{
		___light_14 = value;
		Il2CppCodeGenWriteBarrier(&___light_14, value);
	}

	inline static int32_t get_offset_of_lastPos_15() { return static_cast<int32_t>(offsetof(Police_t2396164414, ___lastPos_15)); }
	inline Vector3_t4282066566  get_lastPos_15() const { return ___lastPos_15; }
	inline Vector3_t4282066566 * get_address_of_lastPos_15() { return &___lastPos_15; }
	inline void set_lastPos_15(Vector3_t4282066566  value)
	{
		___lastPos_15 = value;
	}

	inline static int32_t get_offset_of_isRotating_16() { return static_cast<int32_t>(offsetof(Police_t2396164414, ___isRotating_16)); }
	inline bool get_isRotating_16() const { return ___isRotating_16; }
	inline bool* get_address_of_isRotating_16() { return &___isRotating_16; }
	inline void set_isRotating_16(bool value)
	{
		___isRotating_16 = value;
	}

	inline static int32_t get_offset_of_rotationTimer_17() { return static_cast<int32_t>(offsetof(Police_t2396164414, ___rotationTimer_17)); }
	inline float get_rotationTimer_17() const { return ___rotationTimer_17; }
	inline float* get_address_of_rotationTimer_17() { return &___rotationTimer_17; }
	inline void set_rotationTimer_17(float value)
	{
		___rotationTimer_17 = value;
	}

	inline static int32_t get_offset_of_rotation_18() { return static_cast<int32_t>(offsetof(Police_t2396164414, ___rotation_18)); }
	inline float get_rotation_18() const { return ___rotation_18; }
	inline float* get_address_of_rotation_18() { return &___rotation_18; }
	inline void set_rotation_18(float value)
	{
		___rotation_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
