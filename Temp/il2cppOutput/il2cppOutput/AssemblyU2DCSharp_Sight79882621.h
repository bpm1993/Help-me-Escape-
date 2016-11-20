#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Enemy
struct Enemy_t67100520;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sight
struct  Sight_t79882621  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Sight::sight
	bool ___sight_2;
	// Enemy Sight::parent
	Enemy_t67100520 * ___parent_3;

public:
	inline static int32_t get_offset_of_sight_2() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___sight_2)); }
	inline bool get_sight_2() const { return ___sight_2; }
	inline bool* get_address_of_sight_2() { return &___sight_2; }
	inline void set_sight_2(bool value)
	{
		___sight_2 = value;
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___parent_3)); }
	inline Enemy_t67100520 * get_parent_3() const { return ___parent_3; }
	inline Enemy_t67100520 ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(Enemy_t67100520 * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier(&___parent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
