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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreateEnemies
struct  CreateEnemies_t1439904106  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CreateEnemies::farmer
	GameObject_t3674682005 * ___farmer_2;
	// System.Int32 CreateEnemies::farmerQuant
	int32_t ___farmerQuant_3;

public:
	inline static int32_t get_offset_of_farmer_2() { return static_cast<int32_t>(offsetof(CreateEnemies_t1439904106, ___farmer_2)); }
	inline GameObject_t3674682005 * get_farmer_2() const { return ___farmer_2; }
	inline GameObject_t3674682005 ** get_address_of_farmer_2() { return &___farmer_2; }
	inline void set_farmer_2(GameObject_t3674682005 * value)
	{
		___farmer_2 = value;
		Il2CppCodeGenWriteBarrier(&___farmer_2, value);
	}

	inline static int32_t get_offset_of_farmerQuant_3() { return static_cast<int32_t>(offsetof(CreateEnemies_t1439904106, ___farmerQuant_3)); }
	inline int32_t get_farmerQuant_3() const { return ___farmerQuant_3; }
	inline int32_t* get_address_of_farmerQuant_3() { return &___farmerQuant_3; }
	inline void set_farmerQuant_3(int32_t value)
	{
		___farmerQuant_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
