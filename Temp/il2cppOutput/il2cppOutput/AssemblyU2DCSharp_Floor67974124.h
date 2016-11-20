#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Floor
struct  Floor_t67974124  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color Floor::curColor
	Color_t4194546905  ___curColor_2;
	// UnityEngine.Material Floor::newMat
	Material_t3870600107 * ___newMat_3;

public:
	inline static int32_t get_offset_of_curColor_2() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___curColor_2)); }
	inline Color_t4194546905  get_curColor_2() const { return ___curColor_2; }
	inline Color_t4194546905 * get_address_of_curColor_2() { return &___curColor_2; }
	inline void set_curColor_2(Color_t4194546905  value)
	{
		___curColor_2 = value;
	}

	inline static int32_t get_offset_of_newMat_3() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___newMat_3)); }
	inline Material_t3870600107 * get_newMat_3() const { return ___newMat_3; }
	inline Material_t3870600107 ** get_address_of_newMat_3() { return &___newMat_3; }
	inline void set_newMat_3(Material_t3870600107 * value)
	{
		___newMat_3 = value;
		Il2CppCodeGenWriteBarrier(&___newMat_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
