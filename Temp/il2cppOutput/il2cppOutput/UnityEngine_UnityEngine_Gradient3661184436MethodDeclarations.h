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

// UnityEngine.Gradient
struct Gradient_t3661184436;
struct Gradient_t3661184436_marshaled_pinvoke;
struct Gradient_t3661184436_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Gradient3661184436.h"

// System.Void UnityEngine.Gradient::.ctor()
extern "C"  void Gradient__ctor_m3068495933 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C"  void Gradient_Init_m2544372343 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C"  void Gradient_Cleanup_m850820223 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C"  void Gradient_Finalize_m3875885829 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
extern "C"  Color_t4194546905  Gradient_Evaluate_m2694873412 (Gradient_t3661184436 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::INTERNAL_CALL_Evaluate(UnityEngine.Gradient,System.Single,UnityEngine.Color&)
extern "C"  void Gradient_INTERNAL_CALL_Evaluate_m620788655 (Il2CppObject * __this /* static, unused */, Gradient_t3661184436 * ___self0, float ___time1, Color_t4194546905 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Gradient_t3661184436;
struct Gradient_t3661184436_marshaled_pinvoke;

extern "C" void Gradient_t3661184436_marshal_pinvoke(const Gradient_t3661184436& unmarshaled, Gradient_t3661184436_marshaled_pinvoke& marshaled);
extern "C" void Gradient_t3661184436_marshal_pinvoke_back(const Gradient_t3661184436_marshaled_pinvoke& marshaled, Gradient_t3661184436& unmarshaled);
extern "C" void Gradient_t3661184436_marshal_pinvoke_cleanup(Gradient_t3661184436_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Gradient_t3661184436;
struct Gradient_t3661184436_marshaled_com;

extern "C" void Gradient_t3661184436_marshal_com(const Gradient_t3661184436& unmarshaled, Gradient_t3661184436_marshaled_com& marshaled);
extern "C" void Gradient_t3661184436_marshal_com_back(const Gradient_t3661184436_marshaled_com& marshaled, Gradient_t3661184436& unmarshaled);
extern "C" void Gradient_t3661184436_marshal_com_cleanup(Gradient_t3661184436_marshaled_com& marshaled);
