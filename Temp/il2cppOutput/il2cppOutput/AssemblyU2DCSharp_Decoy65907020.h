#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1758559887;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Decoy
struct  Decoy_t65907020  : public MonoBehaviour_t667441552
{
public:
	// System.Single Decoy::startTime
	float ___startTime_2;
	// UnityEngine.Collider2D[] Decoy::targets
	Collider2DU5BU5D_t1758559887* ___targets_3;
	// System.Int32 Decoy::enemiesCount
	int32_t ___enemiesCount_4;

public:
	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(Decoy_t65907020, ___startTime_2)); }
	inline float get_startTime_2() const { return ___startTime_2; }
	inline float* get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(float value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of_targets_3() { return static_cast<int32_t>(offsetof(Decoy_t65907020, ___targets_3)); }
	inline Collider2DU5BU5D_t1758559887* get_targets_3() const { return ___targets_3; }
	inline Collider2DU5BU5D_t1758559887** get_address_of_targets_3() { return &___targets_3; }
	inline void set_targets_3(Collider2DU5BU5D_t1758559887* value)
	{
		___targets_3 = value;
		Il2CppCodeGenWriteBarrier(&___targets_3, value);
	}

	inline static int32_t get_offset_of_enemiesCount_4() { return static_cast<int32_t>(offsetof(Decoy_t65907020, ___enemiesCount_4)); }
	inline int32_t get_enemiesCount_4() const { return ___enemiesCount_4; }
	inline int32_t* get_address_of_enemiesCount_4() { return &___enemiesCount_4; }
	inline void set_enemiesCount_4(int32_t value)
	{
		___enemiesCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
