#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Police
struct Police_t2396164414;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void Police::.ctor()
extern "C"  void Police__ctor_m210852125 (Police_t2396164414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::Start()
extern "C"  void Police_Start_m3452957213 (Police_t2396164414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::Update()
extern "C"  void Police_Update_m3968310672 (Police_t2396164414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::decoy(UnityEngine.Vector3)
extern "C"  void Police_decoy_m2412265394 (Police_t2396164414 * __this, Vector3_t4282066566  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::Walk()
extern "C"  void Police_Walk_m1039958032 (Police_t2396164414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::callPolice()
extern "C"  void Police_callPolice_m2650612227 (Police_t2396164414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::getWarned()
extern "C"  void Police_getWarned_m2502977334 (Police_t2396164414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::inspectPosition(UnityEngine.Vector3)
extern "C"  void Police_inspectPosition_m1199199969 (Police_t2396164414 * __this, Vector3_t4282066566  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::inspect()
extern "C"  void Police_inspect_m2621793519 (Police_t2396164414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::resetNextPosition()
extern "C"  void Police_resetNextPosition_m1419143366 (Police_t2396164414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Police::setState(System.Int32,System.Single)
extern "C"  Il2CppObject * Police_setState_m3694363700 (Police_t2396164414 * __this, int32_t ___state0, float ___delayTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Police::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Police_OnTriggerEnter2D_m4284227067 (Police_t2396164414 * __this, Collider2D_t1552025098 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
