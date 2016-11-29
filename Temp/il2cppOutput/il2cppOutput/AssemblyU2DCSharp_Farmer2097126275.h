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

// Farmer
struct  Farmer_t2097126275  : public Enemy_t67100520
{
public:
	// System.Single[,] Farmer::positions
	SingleU5BU2CU5D_t2316563990* ___positions_10;
	// System.Int32 Farmer::index
	int32_t ___index_11;
	// System.Boolean Farmer::stop
	bool ___stop_12;
	// UnityEngine.Vector3 Farmer::nextPosition
	Vector3_t4282066566  ___nextPosition_13;
	// UnityEngine.Vector3 Farmer::tempPosition
	Vector3_t4282066566  ___tempPosition_14;
	// UnityEngine.Transform Farmer::pivot
	Transform_t1659122786 * ___pivot_15;
	// UnityEngine.Transform Farmer::light
	Transform_t1659122786 * ___light_16;

public:
	inline static int32_t get_offset_of_positions_10() { return static_cast<int32_t>(offsetof(Farmer_t2097126275, ___positions_10)); }
	inline SingleU5BU2CU5D_t2316563990* get_positions_10() const { return ___positions_10; }
	inline SingleU5BU2CU5D_t2316563990** get_address_of_positions_10() { return &___positions_10; }
	inline void set_positions_10(SingleU5BU2CU5D_t2316563990* value)
	{
		___positions_10 = value;
		Il2CppCodeGenWriteBarrier(&___positions_10, value);
	}

	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(Farmer_t2097126275, ___index_11)); }
	inline int32_t get_index_11() const { return ___index_11; }
	inline int32_t* get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(int32_t value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_stop_12() { return static_cast<int32_t>(offsetof(Farmer_t2097126275, ___stop_12)); }
	inline bool get_stop_12() const { return ___stop_12; }
	inline bool* get_address_of_stop_12() { return &___stop_12; }
	inline void set_stop_12(bool value)
	{
		___stop_12 = value;
	}

	inline static int32_t get_offset_of_nextPosition_13() { return static_cast<int32_t>(offsetof(Farmer_t2097126275, ___nextPosition_13)); }
	inline Vector3_t4282066566  get_nextPosition_13() const { return ___nextPosition_13; }
	inline Vector3_t4282066566 * get_address_of_nextPosition_13() { return &___nextPosition_13; }
	inline void set_nextPosition_13(Vector3_t4282066566  value)
	{
		___nextPosition_13 = value;
	}

	inline static int32_t get_offset_of_tempPosition_14() { return static_cast<int32_t>(offsetof(Farmer_t2097126275, ___tempPosition_14)); }
	inline Vector3_t4282066566  get_tempPosition_14() const { return ___tempPosition_14; }
	inline Vector3_t4282066566 * get_address_of_tempPosition_14() { return &___tempPosition_14; }
	inline void set_tempPosition_14(Vector3_t4282066566  value)
	{
		___tempPosition_14 = value;
	}

	inline static int32_t get_offset_of_pivot_15() { return static_cast<int32_t>(offsetof(Farmer_t2097126275, ___pivot_15)); }
	inline Transform_t1659122786 * get_pivot_15() const { return ___pivot_15; }
	inline Transform_t1659122786 ** get_address_of_pivot_15() { return &___pivot_15; }
	inline void set_pivot_15(Transform_t1659122786 * value)
	{
		___pivot_15 = value;
		Il2CppCodeGenWriteBarrier(&___pivot_15, value);
	}

	inline static int32_t get_offset_of_light_16() { return static_cast<int32_t>(offsetof(Farmer_t2097126275, ___light_16)); }
	inline Transform_t1659122786 * get_light_16() const { return ___light_16; }
	inline Transform_t1659122786 ** get_address_of_light_16() { return &___light_16; }
	inline void set_light_16(Transform_t1659122786 * value)
	{
		___light_16 = value;
		Il2CppCodeGenWriteBarrier(&___light_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
