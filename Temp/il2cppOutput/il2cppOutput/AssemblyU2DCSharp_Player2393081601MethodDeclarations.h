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

// Player
struct Player_t2393081601;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m871706298 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C"  void Player_Start_m4113811386 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m2979953555 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::move(System.Single,System.Single)
extern "C"  void Player_move_m2036337077 (Player_t2393081601 * __this, float ___moveHorizontal0, float ___moveVertical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::footstep()
extern "C"  void Player_footstep_m3414727780 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Player_OnTriggerEnter2D_m2063740926 (Player_t2393081601 * __this, Collider2D_t1552025098 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
