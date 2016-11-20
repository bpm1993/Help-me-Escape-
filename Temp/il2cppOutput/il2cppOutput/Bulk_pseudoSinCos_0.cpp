#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "pseudoSinCos_U3CModuleU3E86524790.h"
#include "pseudoSinCos_U3CModuleU3E86524790MethodDeclarations.h"
#include "pseudoSinCos_pseudoSinCos_PseudoSinCos1206729005.h"
#include "pseudoSinCos_pseudoSinCos_PseudoSinCos1206729005MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void pseudoSinCos.PseudoSinCos::initPseudoSinCos()
extern Il2CppClass* SingleU5BU5D_t2316563989_il2cpp_TypeInfo_var;
extern Il2CppClass* PseudoSinCos_t1206729005_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t PseudoSinCos_initPseudoSinCos_m3788777539_MetadataUsageId;
extern "C"  void PseudoSinCos_initPseudoSinCos_m3788777539 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PseudoSinCos_initPseudoSinCos_m3788777539_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		((PseudoSinCos_t1206729005_StaticFields*)PseudoSinCos_t1206729005_il2cpp_TypeInfo_var->static_fields)->set_SinArray_0(((SingleU5BU5D_t2316563989*)SZArrayNew(SingleU5BU5D_t2316563989_il2cpp_TypeInfo_var, (uint32_t)((int32_t)360))));
		((PseudoSinCos_t1206729005_StaticFields*)PseudoSinCos_t1206729005_il2cpp_TypeInfo_var->static_fields)->set_CosArray_1(((SingleU5BU5D_t2316563989*)SZArrayNew(SingleU5BU5D_t2316563989_il2cpp_TypeInfo_var, (uint32_t)((int32_t)360))));
		V_0 = 0;
		goto IL_0051;
	}

IL_0023:
	{
		SingleU5BU5D_t2316563989* L_0 = ((PseudoSinCos_t1206729005_StaticFields*)PseudoSinCos_t1206729005_il2cpp_TypeInfo_var->static_fields)->get_SinArray_0();
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_3 = sinf(((float)((float)(((float)((float)L_2)))*(float)(0.0174532924f))));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)L_3);
		SingleU5BU5D_t2316563989* L_4 = ((PseudoSinCos_t1206729005_StaticFields*)PseudoSinCos_t1206729005_il2cpp_TypeInfo_var->static_fields)->get_CosArray_1();
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		float L_7 = cosf(((float)((float)(((float)((float)L_6)))*(float)(0.0174532924f))));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_9 = V_0;
		V_1 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)360)))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
