#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pseudoSinCos.PseudoSinCos
struct  PseudoSinCos_t1206729005  : public Il2CppObject
{
public:

public:
};

struct PseudoSinCos_t1206729005_StaticFields
{
public:
	// System.Single[] pseudoSinCos.PseudoSinCos::SinArray
	SingleU5BU5D_t2316563989* ___SinArray_0;
	// System.Single[] pseudoSinCos.PseudoSinCos::CosArray
	SingleU5BU5D_t2316563989* ___CosArray_1;

public:
	inline static int32_t get_offset_of_SinArray_0() { return static_cast<int32_t>(offsetof(PseudoSinCos_t1206729005_StaticFields, ___SinArray_0)); }
	inline SingleU5BU5D_t2316563989* get_SinArray_0() const { return ___SinArray_0; }
	inline SingleU5BU5D_t2316563989** get_address_of_SinArray_0() { return &___SinArray_0; }
	inline void set_SinArray_0(SingleU5BU5D_t2316563989* value)
	{
		___SinArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___SinArray_0, value);
	}

	inline static int32_t get_offset_of_CosArray_1() { return static_cast<int32_t>(offsetof(PseudoSinCos_t1206729005_StaticFields, ___CosArray_1)); }
	inline SingleU5BU5D_t2316563989* get_CosArray_1() const { return ___CosArray_1; }
	inline SingleU5BU5D_t2316563989** get_address_of_CosArray_1() { return &___CosArray_1; }
	inline void set_CosArray_1(SingleU5BU5D_t2316563989* value)
	{
		___CosArray_1 = value;
		Il2CppCodeGenWriteBarrier(&___CosArray_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
