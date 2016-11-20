#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// verts
struct verts_t112097634;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_verts112097634.h"

#pragma once
// verts[]
struct vertsU5BU5D_t1640356567  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) verts_t112097634 * m_Items[1];

public:
	inline verts_t112097634 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline verts_t112097634 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, verts_t112097634 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
