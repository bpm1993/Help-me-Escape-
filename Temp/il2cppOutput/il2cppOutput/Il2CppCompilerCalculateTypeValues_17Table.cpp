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
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_FollowLight2d1846313207.h"
#include "AssemblyU2DCSharp_verts112097634.h"
#include "AssemblyU2DCSharp_DynamicLight727943223.h"
#include "AssemblyU2DCSharp_interface_touch2305171641.h"
#include "AssemblyU2DCSharp_interface_touch22740844185.h"
#include "AssemblyU2DCSharp_rotate3369786715.h"
#include "AssemblyU2DCSharp_Camera2011082565.h"
#include "AssemblyU2DCSharp_CreateEnemies1439904106.h"
#include "AssemblyU2DCSharp_CreateMap2602318496.h"
#include "AssemblyU2DCSharp_Decoy65907020.h"
#include "AssemblyU2DCSharp_Enemy67100520.h"
#include "AssemblyU2DCSharp_Enemy_U3CsetStateU3Ec__Iterator01189739353.h"
#include "AssemblyU2DCSharp_FPSDisplay2522274745.h"
#include "AssemblyU2DCSharp_Farmer2097126275.h"
#include "AssemblyU2DCSharp_Floor67974124.h"
#include "AssemblyU2DCSharp_Footstep459837530.h"
#include "AssemblyU2DCSharp_MatrixMap3049394619.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "AssemblyU2DCSharp_Police2396164414.h"
#include "AssemblyU2DCSharp_Police_U3CsetStateU3Ec__Iterator1827510468.h"
#include "AssemblyU2DCSharp_Sight79882621.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3053238933.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3379220410.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_fpsClass1351734799.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (U3CModuleU3E_t86524799), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (FollowLight2d_t1846313207), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1701[1] = 
{
	FollowLight2d_t1846313207::get_offset_of_toFollow_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (verts_t112097634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[4] = 
{
	verts_t112097634::get_offset_of_U3CangleU3Ek__BackingField_0(),
	verts_t112097634::get_offset_of_U3ClocationU3Ek__BackingField_1(),
	verts_t112097634::get_offset_of_U3CposU3Ek__BackingField_2(),
	verts_t112097634::get_offset_of_U3CendpointU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (DynamicLight_t727943223), -1, sizeof(DynamicLight_t727943223_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1703[9] = 
{
	DynamicLight_t727943223::get_offset_of_version_2(),
	DynamicLight_t727943223::get_offset_of_lightMaterial_3(),
	DynamicLight_t727943223::get_offset_of_allMeshes_4(),
	DynamicLight_t727943223::get_offset_of_allVertices_5(),
	DynamicLight_t727943223::get_offset_of_lightRadius_6(),
	DynamicLight_t727943223::get_offset_of_lightSegments_7(),
	DynamicLight_t727943223::get_offset_of_lightMesh_8(),
	DynamicLight_t727943223::get_offset_of_layer_9(),
	DynamicLight_t727943223_StaticFields::get_offset_of_U3CU3Ef__amU24cache8_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (interface_touch_t2305171641), -1, sizeof(interface_touch_t2305171641_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1704[3] = 
{
	interface_touch_t2305171641::get_offset_of_cLight_2(),
	interface_touch_t2305171641::get_offset_of_cubeL_3(),
	interface_touch_t2305171641_StaticFields::get_offset_of_vertexCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (interface_touch2_t2740844185), -1, sizeof(interface_touch2_t2740844185_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1705[5] = 
{
	interface_touch2_t2740844185::get_offset_of_cLight_2(),
	interface_touch2_t2740844185::get_offset_of_cubeL_3(),
	interface_touch2_t2740844185::get_offset_of_cam_4(),
	interface_touch2_t2740844185_StaticFields::get_offset_of_vertexCount_5(),
	interface_touch2_t2740844185::get_offset_of_lightCount_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (rotate_t3369786715), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (Camera_t2011082565), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1707[4] = 
{
	Camera_t2011082565::get_offset_of_offset_2(),
	Camera_t2011082565::get_offset_of_target_3(),
	Camera_t2011082565::get_offset_of_lastX_4(),
	Camera_t2011082565::get_offset_of_lastY_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (CreateEnemies_t1439904106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[2] = 
{
	CreateEnemies_t1439904106::get_offset_of_farmer_2(),
	CreateEnemies_t1439904106::get_offset_of_farmerQuant_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (CreateMap_t2602318496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[4] = 
{
	CreateMap_t2602318496::get_offset_of_bush_2(),
	CreateMap_t2602318496::get_offset_of_dirtGO_3(),
	CreateMap_t2602318496::get_offset_of_lightDirt_4(),
	CreateMap_t2602318496::get_offset_of_redCorns_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (Decoy_t65907020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1710[3] = 
{
	Decoy_t65907020::get_offset_of_startTime_2(),
	Decoy_t65907020::get_offset_of_targets_3(),
	Decoy_t65907020::get_offset_of_enemiesCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (Enemy_t67100520), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[8] = 
{
	Enemy_t67100520::get_offset_of_startTime_2(),
	Enemy_t67100520::get_offset_of_slowMo_3(),
	Enemy_t67100520::get_offset_of_U3CstateU3Ek__BackingField_4(),
	Enemy_t67100520::get_offset_of_U3CslowMoSpeedU3Ek__BackingField_5(),
	Enemy_t67100520::get_offset_of_U3ConSightU3Ek__BackingField_6(),
	Enemy_t67100520::get_offset_of_U3CCONST_SPEEDU3Ek__BackingField_7(),
	Enemy_t67100520::get_offset_of_U3CCONST_ROTATIONU3Ek__BackingField_8(),
	Enemy_t67100520::get_offset_of_U3CspeedU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (U3CsetStateU3Ec__Iterator0_t1189739353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1712[7] = 
{
	U3CsetStateU3Ec__Iterator0_t1189739353::get_offset_of_delayTime_0(),
	U3CsetStateU3Ec__Iterator0_t1189739353::get_offset_of_state_1(),
	U3CsetStateU3Ec__Iterator0_t1189739353::get_offset_of_U24PC_2(),
	U3CsetStateU3Ec__Iterator0_t1189739353::get_offset_of_U24current_3(),
	U3CsetStateU3Ec__Iterator0_t1189739353::get_offset_of_U3CU24U3EdelayTime_4(),
	U3CsetStateU3Ec__Iterator0_t1189739353::get_offset_of_U3CU24U3Estate_5(),
	U3CsetStateU3Ec__Iterator0_t1189739353::get_offset_of_U3CU3Ef__this_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (FPSDisplay_t2522274745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1713[1] = 
{
	FPSDisplay_t2522274745::get_offset_of_deltaTime_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (Farmer_t2097126275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1714[7] = 
{
	Farmer_t2097126275::get_offset_of_positions_10(),
	Farmer_t2097126275::get_offset_of_index_11(),
	Farmer_t2097126275::get_offset_of_stop_12(),
	Farmer_t2097126275::get_offset_of_nextPosition_13(),
	Farmer_t2097126275::get_offset_of_tempPosition_14(),
	Farmer_t2097126275::get_offset_of_pivot_15(),
	Farmer_t2097126275::get_offset_of_light_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (Floor_t67974124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1715[2] = 
{
	Floor_t67974124::get_offset_of_curColor_2(),
	Floor_t67974124::get_offset_of_newMat_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (Footstep_t459837530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1716[2] = 
{
	Footstep_t459837530::get_offset_of_count_2(),
	Footstep_t459837530::get_offset_of_startTime_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (MatrixMap_t3049394619), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1717[23] = 
{
	MatrixMap_t3049394619::get_offset_of_decoy_2(),
	MatrixMap_t3049394619::get_offset_of_shine_3(),
	MatrixMap_t3049394619::get_offset_of_warned_4(),
	MatrixMap_t3049394619::get_offset_of_matrix_5(),
	MatrixMap_t3049394619::get_offset_of_controleMentalImg_6(),
	MatrixMap_t3049394619::get_offset_of_coolingDownMind_7(),
	MatrixMap_t3049394619::get_offset_of_waitTimeMind_8(),
	MatrixMap_t3049394619::get_offset_of_secondsTimeMind_9(),
	MatrixMap_t3049394619::get_offset_of_startTimeMind_10(),
	MatrixMap_t3049394619::get_offset_of_DistractionImg_11(),
	MatrixMap_t3049394619::get_offset_of_coolingDownDistraction_12(),
	MatrixMap_t3049394619::get_offset_of_waitTimeDistraction_13(),
	MatrixMap_t3049394619::get_offset_of_secondsDistraction_14(),
	MatrixMap_t3049394619::get_offset_of_startTimeDistraction_15(),
	MatrixMap_t3049394619::get_offset_of_SlowMoImg_16(),
	MatrixMap_t3049394619::get_offset_of_coolingDownSlow_17(),
	MatrixMap_t3049394619::get_offset_of_waitTimeSlow_18(),
	MatrixMap_t3049394619::get_offset_of_secondsTimeSlow_19(),
	MatrixMap_t3049394619::get_offset_of_startTimeSlow_20(),
	MatrixMap_t3049394619::get_offset_of_redCorns_21(),
	MatrixMap_t3049394619::get_offset_of_cornsDobrados_22(),
	MatrixMap_t3049394619::get_offset_of_shineTimer_23(),
	MatrixMap_t3049394619::get_offset_of_isShine_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { sizeof (Player_t2393081601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1718[8] = 
{
	Player_t2393081601::get_offset_of_speed_2(),
	Player_t2393081601::get_offset_of_lastFoot_3(),
	Player_t2393081601::get_offset_of_rightFoot_4(),
	Player_t2393081601::get_offset_of_leftFoot_5(),
	Player_t2393081601::get_offset_of_foot1_6(),
	Player_t2393081601::get_offset_of_foot2_7(),
	Player_t2393081601::get_offset_of_gameControl_8(),
	Player_t2393081601::get_offset_of_lastFootBool_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (Police_t2396164414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1719[9] = 
{
	Police_t2396164414::get_offset_of_positions_10(),
	Police_t2396164414::get_offset_of_index_11(),
	Police_t2396164414::get_offset_of_nextPosition_12(),
	Police_t2396164414::get_offset_of_tempPosition_13(),
	Police_t2396164414::get_offset_of_light_14(),
	Police_t2396164414::get_offset_of_lastPos_15(),
	Police_t2396164414::get_offset_of_isRotating_16(),
	Police_t2396164414::get_offset_of_rotationTimer_17(),
	Police_t2396164414::get_offset_of_rotation_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (U3CsetStateU3Ec__Iterator1_t1827510468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1720[7] = 
{
	U3CsetStateU3Ec__Iterator1_t1827510468::get_offset_of_delayTime_0(),
	U3CsetStateU3Ec__Iterator1_t1827510468::get_offset_of_state_1(),
	U3CsetStateU3Ec__Iterator1_t1827510468::get_offset_of_U24PC_2(),
	U3CsetStateU3Ec__Iterator1_t1827510468::get_offset_of_U24current_3(),
	U3CsetStateU3Ec__Iterator1_t1827510468::get_offset_of_U3CU24U3EdelayTime_4(),
	U3CsetStateU3Ec__Iterator1_t1827510468::get_offset_of_U3CU24U3Estate_5(),
	U3CsetStateU3Ec__Iterator1_t1827510468::get_offset_of_U3CU3Ef__this_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1721 = { sizeof (Sight_t79882621), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1721[2] = 
{
	Sight_t79882621::get_offset_of_sight_2(),
	Sight_t79882621::get_offset_of_parent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1722 = { sizeof (U3CPrivateImplementationDetailsU3E_t3053238938), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1722[1] = 
{
	U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1723 = { sizeof (U24ArrayTypeU2432_t3379220412)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2432_t3379220412_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1724 = { sizeof (U3CModuleU3E_t86524800), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1725 = { sizeof (fpsClass_t1351734799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1725[4] = 
{
	fpsClass_t1351734799::get_offset_of_updateInterval_2(),
	fpsClass_t1351734799::get_offset_of_accum_3(),
	fpsClass_t1351734799::get_offset_of_frames_4(),
	fpsClass_t1351734799::get_offset_of_timeleft_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
