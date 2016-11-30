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
#include "AssemblyU2DCSharp_FPSDisplay2522274745.h"
#include "AssemblyU2DCSharp_Farmer2097126275.h"
#include "AssemblyU2DCSharp_Firefly815200861.h"
#include "AssemblyU2DCSharp_FireflyManager1380629136.h"
#include "AssemblyU2DCSharp_Floor67974124.h"
#include "AssemblyU2DCSharp_Footstep459837530.h"
#include "AssemblyU2DCSharp_MatrixMap3049394619.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "AssemblyU2DCSharp_Police2396164414.h"
#include "AssemblyU2DCSharp_Police_U3CStopU3Ec__Iterator13999298385.h"
#include "AssemblyU2DCSharp_Police_U3CsetStateU3Ec__Iterator1827510469.h"
#include "AssemblyU2DCSharp_Sight79882621.h"
#include "AssemblyU2DCSharp_UnluckSoftware_SortingLayerAttrib598482621.h"
#include "AssemblyU2DCSharp_ZippyLights2D1500515353.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3053238933.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3379220410.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (FPSDisplay_t2522274745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1700[1] = 
{
	FPSDisplay_t2522274745::get_offset_of_deltaTime_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (Farmer_t2097126275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1701[7] = 
{
	Farmer_t2097126275::get_offset_of_positions_10(),
	Farmer_t2097126275::get_offset_of_index_11(),
	Farmer_t2097126275::get_offset_of_stop_12(),
	Farmer_t2097126275::get_offset_of_nextPosition_13(),
	Farmer_t2097126275::get_offset_of_tempPosition_14(),
	Farmer_t2097126275::get_offset_of_pivot_15(),
	Farmer_t2097126275::get_offset_of_light_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (Firefly_t815200861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[3] = 
{
	Firefly_t815200861::get_offset_of_numberOfTicks_2(),
	Firefly_t815200861::get_offset_of_directionX_3(),
	Firefly_t815200861::get_offset_of_directionY_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (FireflyManager_t1380629136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[3] = 
{
	FireflyManager_t1380629136::get_offset_of_quantity_2(),
	FireflyManager_t1380629136::get_offset_of_fireflies_3(),
	FireflyManager_t1380629136::get_offset_of_firefly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (Floor_t67974124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1704[4] = 
{
	Floor_t67974124::get_offset_of_curColor_2(),
	Floor_t67974124::get_offset_of_newMat_3(),
	Floor_t67974124::get_offset_of_milhoSound_4(),
	Floor_t67974124::get_offset_of_source_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (Footstep_t459837530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1705[2] = 
{
	Footstep_t459837530::get_offset_of_count_2(),
	Footstep_t459837530::get_offset_of_startTime_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (MatrixMap_t3049394619), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[31] = 
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
	MatrixMap_t3049394619::get_offset_of_pego_23(),
	MatrixMap_t3049394619::get_offset_of_panelFinal_24(),
	MatrixMap_t3049394619::get_offset_of_finalText_25(),
	MatrixMap_t3049394619::get_offset_of_alertPerigoBorder_26(),
	MatrixMap_t3049394619::get_offset_of_alertTimer_27(),
	MatrixMap_t3049394619::get_offset_of_alertBool_28(),
	MatrixMap_t3049394619::get_offset_of_milhosRestantesText_29(),
	MatrixMap_t3049394619::get_offset_of_shineTimer_30(),
	MatrixMap_t3049394619::get_offset_of_isShine_31(),
	MatrixMap_t3049394619::get_offset_of_fireflyTimer_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (Player_t2393081601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1707[9] = 
{
	Player_t2393081601::get_offset_of_speed_2(),
	Player_t2393081601::get_offset_of_lastFoot_3(),
	Player_t2393081601::get_offset_of_rightFoot_4(),
	Player_t2393081601::get_offset_of_leftFoot_5(),
	Player_t2393081601::get_offset_of_foot1_6(),
	Player_t2393081601::get_offset_of_foot2_7(),
	Player_t2393081601::get_offset_of_gameControl_8(),
	Player_t2393081601::get_offset_of_lastFootBool_9(),
	Player_t2393081601::get_offset_of_milhoDobrado_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (Police_t2396164414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[10] = 
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
	Police_t2396164414::get_offset_of_stop_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (U3CStopU3Ec__Iterator1_t3999298385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[3] = 
{
	U3CStopU3Ec__Iterator1_t3999298385::get_offset_of_U24PC_0(),
	U3CStopU3Ec__Iterator1_t3999298385::get_offset_of_U24current_1(),
	U3CStopU3Ec__Iterator1_t3999298385::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (U3CsetStateU3Ec__Iterator2_t1827510469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1710[7] = 
{
	U3CsetStateU3Ec__Iterator2_t1827510469::get_offset_of_delayTime_0(),
	U3CsetStateU3Ec__Iterator2_t1827510469::get_offset_of_state_1(),
	U3CsetStateU3Ec__Iterator2_t1827510469::get_offset_of_U24PC_2(),
	U3CsetStateU3Ec__Iterator2_t1827510469::get_offset_of_U24current_3(),
	U3CsetStateU3Ec__Iterator2_t1827510469::get_offset_of_U3CU24U3EdelayTime_4(),
	U3CsetStateU3Ec__Iterator2_t1827510469::get_offset_of_U3CU24U3Estate_5(),
	U3CsetStateU3Ec__Iterator2_t1827510469::get_offset_of_U3CU3Ef__this_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (Sight_t79882621), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[5] = 
{
	Sight_t79882621::get_offset_of_parent_2(),
	Sight_t79882621::get_offset_of_achouSound_3(),
	Sight_t79882621::get_offset_of_source_4(),
	Sight_t79882621::get_offset_of_alertSymbol_5(),
	Sight_t79882621::get_offset_of_searchPosition_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (SortingLayerAttribute_t598482621), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (ZippyLights2D_t1500515353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1713[50] = 
{
	ZippyLights2D_t1500515353::get_offset_of_idle_2(),
	ZippyLights2D_t1500515353::get_offset_of_lightEnabled_3(),
	ZippyLights2D_t1500515353::get_offset_of_resolution_4(),
	ZippyLights2D_t1500515353::get_offset_of_degrees_5(),
	ZippyLights2D_t1500515353::get_offset_of_moveToUpdate_6(),
	ZippyLights2D_t1500515353::get_offset_of_layers_7(),
	ZippyLights2D_t1500515353::get_offset_of_unityLight_8(),
	ZippyLights2D_t1500515353::get_offset_of_follow_9(),
	ZippyLights2D_t1500515353::get_offset_of_range_10(),
	ZippyLights2D_t1500515353::get_offset_of_animateRange_11(),
	ZippyLights2D_t1500515353::get_offset_of_rangeAnimation_12(),
	ZippyLights2D_t1500515353::get_offset_of_animateRangeSpeed_13(),
	ZippyLights2D_t1500515353::get_offset_of_animateRangeScale_14(),
	ZippyLights2D_t1500515353::get_offset_of_enableVertexColors_15(),
	ZippyLights2D_t1500515353::get_offset_of_vertexFade_16(),
	ZippyLights2D_t1500515353::get_offset_of_vertexColor_17(),
	ZippyLights2D_t1500515353::get_offset_of_vertexColorOuter_18(),
	ZippyLights2D_t1500515353::get_offset_of_ColorCycleEnabled_19(),
	ZippyLights2D_t1500515353::get_offset_of_ColorCycle_20(),
	ZippyLights2D_t1500515353::get_offset_of_ColorCycleSpeed_21(),
	ZippyLights2D_t1500515353::get_offset_of_ColorCycleOuterEnabled_22(),
	ZippyLights2D_t1500515353::get_offset_of_ColorCycleOuter_23(),
	ZippyLights2D_t1500515353::get_offset_of_ColorCycleSpeedOuter_24(),
	ZippyLights2D_t1500515353::get_offset_of_CreateUV_25(),
	ZippyLights2D_t1500515353::get_offset_of_UVScale_26(),
	ZippyLights2D_t1500515353::get_offset_of_noise_27(),
	ZippyLights2D_t1500515353::get_offset_of_noiseDelay_28(),
	ZippyLights2D_t1500515353::get_offset_of_noiseVal_29(),
	ZippyLights2D_t1500515353::get_offset_of_sortingOrder_30(),
	ZippyLights2D_t1500515353::get_offset_of_sortingLayer_31(),
	ZippyLights2D_t1500515353::get_offset_of_particles_32(),
	ZippyLights2D_t1500515353::get_offset_of_particleEmitDelay_33(),
	ZippyLights2D_t1500515353::get_offset_of_particleRayAmount_34(),
	ZippyLights2D_t1500515353::get_offset_of_particleEmitAmount_35(),
	ZippyLights2D_t1500515353::get_offset_of_particleRangeLimitMin_36(),
	ZippyLights2D_t1500515353::get_offset_of_particleRangeLimitMax_37(),
	ZippyLights2D_t1500515353::get_offset_of_lightTime_38(),
	ZippyLights2D_t1500515353::get_offset_of_points_39(),
	ZippyLights2D_t1500515353::get_offset_of_pointsX_40(),
	ZippyLights2D_t1500515353::get_offset_of_pointsP_41(),
	ZippyLights2D_t1500515353::get_offset_of_str_42(),
	ZippyLights2D_t1500515353::get_offset_of_savePos_43(),
	ZippyLights2D_t1500515353::get_offset_of_saveRot_44(),
	ZippyLights2D_t1500515353::get_offset_of_lightMesh_45(),
	ZippyLights2D_t1500515353::get_offset_of_cacheTransform_46(),
	ZippyLights2D_t1500515353::get_offset_of_cacheParticleTransform_47(),
	ZippyLights2D_t1500515353::get_offset_of_cacheMeshRenderer_48(),
	ZippyLights2D_t1500515353::get_offset_of_cacheMeshFilter_49(),
	ZippyLights2D_t1500515353::get_offset_of_pointsPlenght_50(),
	ZippyLights2D_t1500515353::get_offset_of_degreeResolution_51(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (U3CPrivateImplementationDetailsU3E_t3053238938), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1714[1] = 
{
	U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (U24ArrayTypeU2432_t3379220412)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2432_t3379220412_marshaled_pinvoke), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
