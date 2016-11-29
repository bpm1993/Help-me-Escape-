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
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.GameObject
struct GameObject_t3674682005;

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
	// UnityEngine.AudioClip Sight::achouSound
	AudioClip_t794140988 * ___achouSound_4;
	// UnityEngine.AudioSource Sight::source
	AudioSource_t1740077639 * ___source_5;
	// UnityEngine.GameObject Sight::alertSymbol
	GameObject_t3674682005 * ___alertSymbol_6;

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

	inline static int32_t get_offset_of_achouSound_4() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___achouSound_4)); }
	inline AudioClip_t794140988 * get_achouSound_4() const { return ___achouSound_4; }
	inline AudioClip_t794140988 ** get_address_of_achouSound_4() { return &___achouSound_4; }
	inline void set_achouSound_4(AudioClip_t794140988 * value)
	{
		___achouSound_4 = value;
		Il2CppCodeGenWriteBarrier(&___achouSound_4, value);
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___source_5)); }
	inline AudioSource_t1740077639 * get_source_5() const { return ___source_5; }
	inline AudioSource_t1740077639 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(AudioSource_t1740077639 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier(&___source_5, value);
	}

	inline static int32_t get_offset_of_alertSymbol_6() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___alertSymbol_6)); }
	inline GameObject_t3674682005 * get_alertSymbol_6() const { return ___alertSymbol_6; }
	inline GameObject_t3674682005 ** get_address_of_alertSymbol_6() { return &___alertSymbol_6; }
	inline void set_alertSymbol_6(GameObject_t3674682005 * value)
	{
		___alertSymbol_6 = value;
		Il2CppCodeGenWriteBarrier(&___alertSymbol_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
