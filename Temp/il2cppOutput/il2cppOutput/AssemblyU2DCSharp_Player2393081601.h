#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public MonoBehaviour_t667441552
{
public:
	// System.Single Player::speed
	float ___speed_2;
	// UnityEngine.Vector2 Player::lastFoot
	Vector2_t4282066565  ___lastFoot_3;
	// UnityEngine.Transform Player::rightFoot
	Transform_t1659122786 * ___rightFoot_4;
	// UnityEngine.Transform Player::leftFoot
	Transform_t1659122786 * ___leftFoot_5;
	// UnityEngine.GameObject Player::foot1
	GameObject_t3674682005 * ___foot1_6;
	// UnityEngine.GameObject Player::foot2
	GameObject_t3674682005 * ___foot2_7;
	// UnityEngine.GameObject Player::gameControl
	GameObject_t3674682005 * ___gameControl_8;
	// System.Boolean Player::lastFootBool
	bool ___lastFootBool_9;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_lastFoot_3() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___lastFoot_3)); }
	inline Vector2_t4282066565  get_lastFoot_3() const { return ___lastFoot_3; }
	inline Vector2_t4282066565 * get_address_of_lastFoot_3() { return &___lastFoot_3; }
	inline void set_lastFoot_3(Vector2_t4282066565  value)
	{
		___lastFoot_3 = value;
	}

	inline static int32_t get_offset_of_rightFoot_4() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___rightFoot_4)); }
	inline Transform_t1659122786 * get_rightFoot_4() const { return ___rightFoot_4; }
	inline Transform_t1659122786 ** get_address_of_rightFoot_4() { return &___rightFoot_4; }
	inline void set_rightFoot_4(Transform_t1659122786 * value)
	{
		___rightFoot_4 = value;
		Il2CppCodeGenWriteBarrier(&___rightFoot_4, value);
	}

	inline static int32_t get_offset_of_leftFoot_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___leftFoot_5)); }
	inline Transform_t1659122786 * get_leftFoot_5() const { return ___leftFoot_5; }
	inline Transform_t1659122786 ** get_address_of_leftFoot_5() { return &___leftFoot_5; }
	inline void set_leftFoot_5(Transform_t1659122786 * value)
	{
		___leftFoot_5 = value;
		Il2CppCodeGenWriteBarrier(&___leftFoot_5, value);
	}

	inline static int32_t get_offset_of_foot1_6() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___foot1_6)); }
	inline GameObject_t3674682005 * get_foot1_6() const { return ___foot1_6; }
	inline GameObject_t3674682005 ** get_address_of_foot1_6() { return &___foot1_6; }
	inline void set_foot1_6(GameObject_t3674682005 * value)
	{
		___foot1_6 = value;
		Il2CppCodeGenWriteBarrier(&___foot1_6, value);
	}

	inline static int32_t get_offset_of_foot2_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___foot2_7)); }
	inline GameObject_t3674682005 * get_foot2_7() const { return ___foot2_7; }
	inline GameObject_t3674682005 ** get_address_of_foot2_7() { return &___foot2_7; }
	inline void set_foot2_7(GameObject_t3674682005 * value)
	{
		___foot2_7 = value;
		Il2CppCodeGenWriteBarrier(&___foot2_7, value);
	}

	inline static int32_t get_offset_of_gameControl_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___gameControl_8)); }
	inline GameObject_t3674682005 * get_gameControl_8() const { return ___gameControl_8; }
	inline GameObject_t3674682005 ** get_address_of_gameControl_8() { return &___gameControl_8; }
	inline void set_gameControl_8(GameObject_t3674682005 * value)
	{
		___gameControl_8 = value;
		Il2CppCodeGenWriteBarrier(&___gameControl_8, value);
	}

	inline static int32_t get_offset_of_lastFootBool_9() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___lastFootBool_9)); }
	inline bool get_lastFootBool_9() const { return ___lastFootBool_9; }
	inline bool* get_address_of_lastFootBool_9() { return &___lastFootBool_9; }
	inline void set_lastFootBool_9(bool value)
	{
		___lastFootBool_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
