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

// DynamicLight
struct DynamicLight_t727943223;
// System.Collections.Generic.List`1<verts>
struct List_1_t1480283186;
// verts
struct verts_t112097634;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_verts112097634.h"

// System.Void DynamicLight::.ctor()
extern "C"  void DynamicLight__ctor_m4221876292 (DynamicLight_t727943223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DynamicLight::Start()
extern "C"  void DynamicLight_Start_m3169014084 (DynamicLight_t727943223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DynamicLight::LateUpdate()
extern "C"  void DynamicLight_LateUpdate_m2473401487 (DynamicLight_t727943223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DynamicLight::FixedUpdate()
extern "C"  void DynamicLight_FixedUpdate_m241980095 (DynamicLight_t727943223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DynamicLight::getAllMeshes()
extern "C"  void DynamicLight_getAllMeshes_m660014470 (DynamicLight_t727943223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DynamicLight::resetBounds()
extern "C"  void DynamicLight_resetBounds_m2098217126 (DynamicLight_t727943223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DynamicLight::setLight()
extern "C"  void DynamicLight_setLight_m3199465908 (DynamicLight_t727943223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DynamicLight::renderLightMesh()
extern "C"  void DynamicLight_renderLightMesh_m319491119 (DynamicLight_t727943223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DynamicLight::sortList(System.Collections.Generic.List`1<verts>)
extern "C"  void DynamicLight_sortList_m1397936802 (DynamicLight_t727943223 * __this, List_1_t1480283186 * ___lista0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DynamicLight::drawLinePerVertex()
extern "C"  void DynamicLight_drawLinePerVertex_m4113849963 (DynamicLight_t727943223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DynamicLight::getVectorAngle(System.Boolean,System.Single,System.Single)
extern "C"  float DynamicLight_getVectorAngle_m3450060167 (DynamicLight_t727943223 * __this, bool ___pseudo0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DynamicLight::pseudoAngle(System.Single,System.Single)
extern "C"  float DynamicLight_pseudoAngle_m2598408581 (DynamicLight_t727943223 * __this, float ___dx0, float ___dy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DynamicLight::<sortList>m__0(verts,verts)
extern "C"  int32_t DynamicLight_U3CsortListU3Em__0_m403569571 (Il2CppObject * __this /* static, unused */, verts_t112097634 * ___item10, verts_t112097634 * ___item21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
