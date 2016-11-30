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
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sight
struct  Sight_t79882621  : public MonoBehaviour_t667441552
{
public:
	// Enemy Sight::parent
	Enemy_t67100520 * ___parent_2;
	// UnityEngine.AudioClip Sight::achouSound
	AudioClip_t794140988 * ___achouSound_3;
	// UnityEngine.AudioSource Sight::source
	AudioSource_t1740077639 * ___source_4;
	// UnityEngine.GameObject Sight::alertSymbol
	GameObject_t3674682005 * ___alertSymbol_5;
	// UnityEngine.Vector3 Sight::searchPosition
	Vector3_t4282066566  ___searchPosition_6;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___parent_2)); }
	inline Enemy_t67100520 * get_parent_2() const { return ___parent_2; }
	inline Enemy_t67100520 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(Enemy_t67100520 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier(&___parent_2, value);
	}

	inline static int32_t get_offset_of_achouSound_3() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___achouSound_3)); }
	inline AudioClip_t794140988 * get_achouSound_3() const { return ___achouSound_3; }
	inline AudioClip_t794140988 ** get_address_of_achouSound_3() { return &___achouSound_3; }
	inline void set_achouSound_3(AudioClip_t794140988 * value)
	{
		___achouSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___achouSound_3, value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___source_4)); }
	inline AudioSource_t1740077639 * get_source_4() const { return ___source_4; }
	inline AudioSource_t1740077639 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(AudioSource_t1740077639 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier(&___source_4, value);
	}

	inline static int32_t get_offset_of_alertSymbol_5() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___alertSymbol_5)); }
	inline GameObject_t3674682005 * get_alertSymbol_5() const { return ___alertSymbol_5; }
	inline GameObject_t3674682005 ** get_address_of_alertSymbol_5() { return &___alertSymbol_5; }
	inline void set_alertSymbol_5(GameObject_t3674682005 * value)
	{
		___alertSymbol_5 = value;
		Il2CppCodeGenWriteBarrier(&___alertSymbol_5, value);
	}

	inline static int32_t get_offset_of_searchPosition_6() { return static_cast<int32_t>(offsetof(Sight_t79882621, ___searchPosition_6)); }
	inline Vector3_t4282066566  get_searchPosition_6() const { return ___searchPosition_6; }
	inline Vector3_t4282066566 * get_address_of_searchPosition_6() { return &___searchPosition_6; }
	inline void set_searchPosition_6(Vector3_t4282066566  value)
	{
		___searchPosition_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
