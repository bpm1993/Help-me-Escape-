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
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

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
	// UnityEngine.AudioClip Floor::milhoSound
	AudioClip_t794140988 * ___milhoSound_4;
	// UnityEngine.AudioSource Floor::source
	AudioSource_t1740077639 * ___source_5;

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

	inline static int32_t get_offset_of_milhoSound_4() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___milhoSound_4)); }
	inline AudioClip_t794140988 * get_milhoSound_4() const { return ___milhoSound_4; }
	inline AudioClip_t794140988 ** get_address_of_milhoSound_4() { return &___milhoSound_4; }
	inline void set_milhoSound_4(AudioClip_t794140988 * value)
	{
		___milhoSound_4 = value;
		Il2CppCodeGenWriteBarrier(&___milhoSound_4, value);
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___source_5)); }
	inline AudioSource_t1740077639 * get_source_5() const { return ___source_5; }
	inline AudioSource_t1740077639 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(AudioSource_t1740077639 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier(&___source_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
