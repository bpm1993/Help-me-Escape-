#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Footstep
struct  Footstep_t459837530  : public MonoBehaviour_t667441552
{
public:
	// System.Single Footstep::count
	float ___count_2;
	// System.Single Footstep::startTime
	float ___startTime_3;

public:
	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Footstep_t459837530, ___count_2)); }
	inline float get_count_2() const { return ___count_2; }
	inline float* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(float value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(Footstep_t459837530, ___startTime_3)); }
	inline float get_startTime_3() const { return ___startTime_3; }
	inline float* get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(float value)
	{
		___startTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
