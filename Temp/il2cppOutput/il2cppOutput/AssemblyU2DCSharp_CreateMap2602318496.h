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

// CreateMap
struct  CreateMap_t2602318496  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CreateMap::bush
	GameObject_t3674682005 * ___bush_2;
	// UnityEngine.GameObject CreateMap::dirtGO
	GameObject_t3674682005 * ___dirtGO_3;
	// UnityEngine.GameObject CreateMap::lightDirt
	GameObject_t3674682005 * ___lightDirt_4;
	// System.Int32 CreateMap::redCorns
	int32_t ___redCorns_5;

public:
	inline static int32_t get_offset_of_bush_2() { return static_cast<int32_t>(offsetof(CreateMap_t2602318496, ___bush_2)); }
	inline GameObject_t3674682005 * get_bush_2() const { return ___bush_2; }
	inline GameObject_t3674682005 ** get_address_of_bush_2() { return &___bush_2; }
	inline void set_bush_2(GameObject_t3674682005 * value)
	{
		___bush_2 = value;
		Il2CppCodeGenWriteBarrier(&___bush_2, value);
	}

	inline static int32_t get_offset_of_dirtGO_3() { return static_cast<int32_t>(offsetof(CreateMap_t2602318496, ___dirtGO_3)); }
	inline GameObject_t3674682005 * get_dirtGO_3() const { return ___dirtGO_3; }
	inline GameObject_t3674682005 ** get_address_of_dirtGO_3() { return &___dirtGO_3; }
	inline void set_dirtGO_3(GameObject_t3674682005 * value)
	{
		___dirtGO_3 = value;
		Il2CppCodeGenWriteBarrier(&___dirtGO_3, value);
	}

	inline static int32_t get_offset_of_lightDirt_4() { return static_cast<int32_t>(offsetof(CreateMap_t2602318496, ___lightDirt_4)); }
	inline GameObject_t3674682005 * get_lightDirt_4() const { return ___lightDirt_4; }
	inline GameObject_t3674682005 ** get_address_of_lightDirt_4() { return &___lightDirt_4; }
	inline void set_lightDirt_4(GameObject_t3674682005 * value)
	{
		___lightDirt_4 = value;
		Il2CppCodeGenWriteBarrier(&___lightDirt_4, value);
	}

	inline static int32_t get_offset_of_redCorns_5() { return static_cast<int32_t>(offsetof(CreateMap_t2602318496, ___redCorns_5)); }
	inline int32_t get_redCorns_5() const { return ___redCorns_5; }
	inline int32_t* get_address_of_redCorns_5() { return &___redCorns_5; }
	inline void set_redCorns_5(int32_t value)
	{
		___redCorns_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
