#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FireflyManager
struct  FireflyManager_t1380629136  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 FireflyManager::quantity
	int32_t ___quantity_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> FireflyManager::fireflies
	List_1_t747900261 * ___fireflies_3;
	// UnityEngine.GameObject FireflyManager::firefly
	GameObject_t3674682005 * ___firefly_4;

public:
	inline static int32_t get_offset_of_quantity_2() { return static_cast<int32_t>(offsetof(FireflyManager_t1380629136, ___quantity_2)); }
	inline int32_t get_quantity_2() const { return ___quantity_2; }
	inline int32_t* get_address_of_quantity_2() { return &___quantity_2; }
	inline void set_quantity_2(int32_t value)
	{
		___quantity_2 = value;
	}

	inline static int32_t get_offset_of_fireflies_3() { return static_cast<int32_t>(offsetof(FireflyManager_t1380629136, ___fireflies_3)); }
	inline List_1_t747900261 * get_fireflies_3() const { return ___fireflies_3; }
	inline List_1_t747900261 ** get_address_of_fireflies_3() { return &___fireflies_3; }
	inline void set_fireflies_3(List_1_t747900261 * value)
	{
		___fireflies_3 = value;
		Il2CppCodeGenWriteBarrier(&___fireflies_3, value);
	}

	inline static int32_t get_offset_of_firefly_4() { return static_cast<int32_t>(offsetof(FireflyManager_t1380629136, ___firefly_4)); }
	inline GameObject_t3674682005 * get_firefly_4() const { return ___firefly_4; }
	inline GameObject_t3674682005 ** get_address_of_firefly_4() { return &___firefly_4; }
	inline void set_firefly_4(GameObject_t3674682005 * value)
	{
		___firefly_4 = value;
		Il2CppCodeGenWriteBarrier(&___firefly_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
