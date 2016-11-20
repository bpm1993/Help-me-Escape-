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

// Enemy
struct Enemy_t67100520;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m1781972739 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_state(System.Int32)
extern "C"  void Enemy_set_state_m2334097286 (Enemy_t67100520 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Enemy::get_state()
extern "C"  int32_t Enemy_get_state_m2479311671 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_slowMoSpeed(System.Single)
extern "C"  void Enemy_set_slowMoSpeed_m2134268419 (Enemy_t67100520 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Enemy::get_slowMoSpeed()
extern "C"  float Enemy_get_slowMoSpeed_m3484813672 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_onSight(System.Boolean)
extern "C"  void Enemy_set_onSight_m4164155929 (Enemy_t67100520 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy::get_onSight()
extern "C"  bool Enemy_get_onSight_m2670094026 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_CONST_SPEED(System.Single)
extern "C"  void Enemy_set_CONST_SPEED_m2531908988 (Enemy_t67100520 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Enemy::get_CONST_SPEED()
extern "C"  float Enemy_get_CONST_SPEED_m60118351 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_CONST_ROTATION(System.Single)
extern "C"  void Enemy_set_CONST_ROTATION_m3349918259 (Enemy_t67100520 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Enemy::get_CONST_ROTATION()
extern "C"  float Enemy_get_CONST_ROTATION_m3595454904 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_speed(System.Single)
extern "C"  void Enemy_set_speed_m555917216 (Enemy_t67100520 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Enemy::get_speed()
extern "C"  float Enemy_get_speed_m1696823467 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m729110531 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m1133442154 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::slowMotion()
extern "C"  void Enemy_slowMotion_m3559746840 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::mindControl()
extern "C"  void Enemy_mindControl_m1474319916 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Enemy::setState(System.Int32,System.Single)
extern "C"  Il2CppObject * Enemy_setState_m4283867774 (Enemy_t67100520 * __this, int32_t ___state0, float ___delayTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::resetState()
extern "C"  void Enemy_resetState_m675388867 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::resetSlowMoSpeed()
extern "C"  void Enemy_resetSlowMoSpeed_m3501466166 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::setState(System.Int32)
extern "C"  void Enemy_setState_m358080673 (Enemy_t67100520 * __this, int32_t ___stateNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::LookAt(UnityEngine.Vector3)
extern "C"  void Enemy_LookAt_m1522720870 (Enemy_t67100520 * __this, Vector3_t4282066566  ___nextPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
