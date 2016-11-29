#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t2662109049;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatrixMap
struct  MatrixMap_t3049394619  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject MatrixMap::decoy
	GameObject_t3674682005 * ___decoy_2;
	// UnityEngine.Material MatrixMap::shine
	Material_t3870600107 * ___shine_3;
	// System.Boolean MatrixMap::warned
	bool ___warned_4;
	// UnityEngine.GameObject[,] MatrixMap::matrix
	GameObjectU5BU2CU5D_t2662109049* ___matrix_5;
	// UnityEngine.UI.Image MatrixMap::controleMentalImg
	Image_t538875265 * ___controleMentalImg_6;
	// System.Boolean MatrixMap::coolingDownMind
	bool ___coolingDownMind_7;
	// System.Single MatrixMap::waitTimeMind
	float ___waitTimeMind_8;
	// System.Single MatrixMap::secondsTimeMind
	float ___secondsTimeMind_9;
	// System.Single MatrixMap::startTimeMind
	float ___startTimeMind_10;
	// UnityEngine.UI.Image MatrixMap::DistractionImg
	Image_t538875265 * ___DistractionImg_11;
	// System.Boolean MatrixMap::coolingDownDistraction
	bool ___coolingDownDistraction_12;
	// System.Single MatrixMap::waitTimeDistraction
	float ___waitTimeDistraction_13;
	// System.Single MatrixMap::secondsDistraction
	float ___secondsDistraction_14;
	// System.Single MatrixMap::startTimeDistraction
	float ___startTimeDistraction_15;
	// UnityEngine.UI.Image MatrixMap::SlowMoImg
	Image_t538875265 * ___SlowMoImg_16;
	// System.Boolean MatrixMap::coolingDownSlow
	bool ___coolingDownSlow_17;
	// System.Single MatrixMap::waitTimeSlow
	float ___waitTimeSlow_18;
	// System.Single MatrixMap::secondsTimeSlow
	float ___secondsTimeSlow_19;
	// System.Single MatrixMap::startTimeSlow
	float ___startTimeSlow_20;
	// System.Int32 MatrixMap::redCorns
	int32_t ___redCorns_21;
	// System.Int32 MatrixMap::cornsDobrados
	int32_t ___cornsDobrados_22;
	// System.Boolean MatrixMap::pego
	bool ___pego_23;
	// UnityEngine.UI.Image MatrixMap::panelFinal
	Image_t538875265 * ___panelFinal_24;
	// UnityEngine.UI.Text MatrixMap::finalText
	Text_t9039225 * ___finalText_25;
	// UnityEngine.UI.Image MatrixMap::alertPerigoBorder
	Image_t538875265 * ___alertPerigoBorder_26;
	// System.Single MatrixMap::alertTimer
	float ___alertTimer_27;
	// System.Boolean MatrixMap::alertBool
	bool ___alertBool_28;
	// UnityEngine.UI.Text MatrixMap::milhosRestantesText
	Text_t9039225 * ___milhosRestantesText_29;
	// System.Single MatrixMap::shineTimer
	float ___shineTimer_30;
	// System.Boolean MatrixMap::isShine
	bool ___isShine_31;
	// System.Single MatrixMap::fireflyTimer
	float ___fireflyTimer_32;

public:
	inline static int32_t get_offset_of_decoy_2() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___decoy_2)); }
	inline GameObject_t3674682005 * get_decoy_2() const { return ___decoy_2; }
	inline GameObject_t3674682005 ** get_address_of_decoy_2() { return &___decoy_2; }
	inline void set_decoy_2(GameObject_t3674682005 * value)
	{
		___decoy_2 = value;
		Il2CppCodeGenWriteBarrier(&___decoy_2, value);
	}

	inline static int32_t get_offset_of_shine_3() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___shine_3)); }
	inline Material_t3870600107 * get_shine_3() const { return ___shine_3; }
	inline Material_t3870600107 ** get_address_of_shine_3() { return &___shine_3; }
	inline void set_shine_3(Material_t3870600107 * value)
	{
		___shine_3 = value;
		Il2CppCodeGenWriteBarrier(&___shine_3, value);
	}

	inline static int32_t get_offset_of_warned_4() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___warned_4)); }
	inline bool get_warned_4() const { return ___warned_4; }
	inline bool* get_address_of_warned_4() { return &___warned_4; }
	inline void set_warned_4(bool value)
	{
		___warned_4 = value;
	}

	inline static int32_t get_offset_of_matrix_5() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___matrix_5)); }
	inline GameObjectU5BU2CU5D_t2662109049* get_matrix_5() const { return ___matrix_5; }
	inline GameObjectU5BU2CU5D_t2662109049** get_address_of_matrix_5() { return &___matrix_5; }
	inline void set_matrix_5(GameObjectU5BU2CU5D_t2662109049* value)
	{
		___matrix_5 = value;
		Il2CppCodeGenWriteBarrier(&___matrix_5, value);
	}

	inline static int32_t get_offset_of_controleMentalImg_6() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___controleMentalImg_6)); }
	inline Image_t538875265 * get_controleMentalImg_6() const { return ___controleMentalImg_6; }
	inline Image_t538875265 ** get_address_of_controleMentalImg_6() { return &___controleMentalImg_6; }
	inline void set_controleMentalImg_6(Image_t538875265 * value)
	{
		___controleMentalImg_6 = value;
		Il2CppCodeGenWriteBarrier(&___controleMentalImg_6, value);
	}

	inline static int32_t get_offset_of_coolingDownMind_7() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___coolingDownMind_7)); }
	inline bool get_coolingDownMind_7() const { return ___coolingDownMind_7; }
	inline bool* get_address_of_coolingDownMind_7() { return &___coolingDownMind_7; }
	inline void set_coolingDownMind_7(bool value)
	{
		___coolingDownMind_7 = value;
	}

	inline static int32_t get_offset_of_waitTimeMind_8() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___waitTimeMind_8)); }
	inline float get_waitTimeMind_8() const { return ___waitTimeMind_8; }
	inline float* get_address_of_waitTimeMind_8() { return &___waitTimeMind_8; }
	inline void set_waitTimeMind_8(float value)
	{
		___waitTimeMind_8 = value;
	}

	inline static int32_t get_offset_of_secondsTimeMind_9() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___secondsTimeMind_9)); }
	inline float get_secondsTimeMind_9() const { return ___secondsTimeMind_9; }
	inline float* get_address_of_secondsTimeMind_9() { return &___secondsTimeMind_9; }
	inline void set_secondsTimeMind_9(float value)
	{
		___secondsTimeMind_9 = value;
	}

	inline static int32_t get_offset_of_startTimeMind_10() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___startTimeMind_10)); }
	inline float get_startTimeMind_10() const { return ___startTimeMind_10; }
	inline float* get_address_of_startTimeMind_10() { return &___startTimeMind_10; }
	inline void set_startTimeMind_10(float value)
	{
		___startTimeMind_10 = value;
	}

	inline static int32_t get_offset_of_DistractionImg_11() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___DistractionImg_11)); }
	inline Image_t538875265 * get_DistractionImg_11() const { return ___DistractionImg_11; }
	inline Image_t538875265 ** get_address_of_DistractionImg_11() { return &___DistractionImg_11; }
	inline void set_DistractionImg_11(Image_t538875265 * value)
	{
		___DistractionImg_11 = value;
		Il2CppCodeGenWriteBarrier(&___DistractionImg_11, value);
	}

	inline static int32_t get_offset_of_coolingDownDistraction_12() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___coolingDownDistraction_12)); }
	inline bool get_coolingDownDistraction_12() const { return ___coolingDownDistraction_12; }
	inline bool* get_address_of_coolingDownDistraction_12() { return &___coolingDownDistraction_12; }
	inline void set_coolingDownDistraction_12(bool value)
	{
		___coolingDownDistraction_12 = value;
	}

	inline static int32_t get_offset_of_waitTimeDistraction_13() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___waitTimeDistraction_13)); }
	inline float get_waitTimeDistraction_13() const { return ___waitTimeDistraction_13; }
	inline float* get_address_of_waitTimeDistraction_13() { return &___waitTimeDistraction_13; }
	inline void set_waitTimeDistraction_13(float value)
	{
		___waitTimeDistraction_13 = value;
	}

	inline static int32_t get_offset_of_secondsDistraction_14() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___secondsDistraction_14)); }
	inline float get_secondsDistraction_14() const { return ___secondsDistraction_14; }
	inline float* get_address_of_secondsDistraction_14() { return &___secondsDistraction_14; }
	inline void set_secondsDistraction_14(float value)
	{
		___secondsDistraction_14 = value;
	}

	inline static int32_t get_offset_of_startTimeDistraction_15() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___startTimeDistraction_15)); }
	inline float get_startTimeDistraction_15() const { return ___startTimeDistraction_15; }
	inline float* get_address_of_startTimeDistraction_15() { return &___startTimeDistraction_15; }
	inline void set_startTimeDistraction_15(float value)
	{
		___startTimeDistraction_15 = value;
	}

	inline static int32_t get_offset_of_SlowMoImg_16() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___SlowMoImg_16)); }
	inline Image_t538875265 * get_SlowMoImg_16() const { return ___SlowMoImg_16; }
	inline Image_t538875265 ** get_address_of_SlowMoImg_16() { return &___SlowMoImg_16; }
	inline void set_SlowMoImg_16(Image_t538875265 * value)
	{
		___SlowMoImg_16 = value;
		Il2CppCodeGenWriteBarrier(&___SlowMoImg_16, value);
	}

	inline static int32_t get_offset_of_coolingDownSlow_17() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___coolingDownSlow_17)); }
	inline bool get_coolingDownSlow_17() const { return ___coolingDownSlow_17; }
	inline bool* get_address_of_coolingDownSlow_17() { return &___coolingDownSlow_17; }
	inline void set_coolingDownSlow_17(bool value)
	{
		___coolingDownSlow_17 = value;
	}

	inline static int32_t get_offset_of_waitTimeSlow_18() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___waitTimeSlow_18)); }
	inline float get_waitTimeSlow_18() const { return ___waitTimeSlow_18; }
	inline float* get_address_of_waitTimeSlow_18() { return &___waitTimeSlow_18; }
	inline void set_waitTimeSlow_18(float value)
	{
		___waitTimeSlow_18 = value;
	}

	inline static int32_t get_offset_of_secondsTimeSlow_19() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___secondsTimeSlow_19)); }
	inline float get_secondsTimeSlow_19() const { return ___secondsTimeSlow_19; }
	inline float* get_address_of_secondsTimeSlow_19() { return &___secondsTimeSlow_19; }
	inline void set_secondsTimeSlow_19(float value)
	{
		___secondsTimeSlow_19 = value;
	}

	inline static int32_t get_offset_of_startTimeSlow_20() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___startTimeSlow_20)); }
	inline float get_startTimeSlow_20() const { return ___startTimeSlow_20; }
	inline float* get_address_of_startTimeSlow_20() { return &___startTimeSlow_20; }
	inline void set_startTimeSlow_20(float value)
	{
		___startTimeSlow_20 = value;
	}

	inline static int32_t get_offset_of_redCorns_21() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___redCorns_21)); }
	inline int32_t get_redCorns_21() const { return ___redCorns_21; }
	inline int32_t* get_address_of_redCorns_21() { return &___redCorns_21; }
	inline void set_redCorns_21(int32_t value)
	{
		___redCorns_21 = value;
	}

	inline static int32_t get_offset_of_cornsDobrados_22() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___cornsDobrados_22)); }
	inline int32_t get_cornsDobrados_22() const { return ___cornsDobrados_22; }
	inline int32_t* get_address_of_cornsDobrados_22() { return &___cornsDobrados_22; }
	inline void set_cornsDobrados_22(int32_t value)
	{
		___cornsDobrados_22 = value;
	}

	inline static int32_t get_offset_of_pego_23() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___pego_23)); }
	inline bool get_pego_23() const { return ___pego_23; }
	inline bool* get_address_of_pego_23() { return &___pego_23; }
	inline void set_pego_23(bool value)
	{
		___pego_23 = value;
	}

	inline static int32_t get_offset_of_panelFinal_24() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___panelFinal_24)); }
	inline Image_t538875265 * get_panelFinal_24() const { return ___panelFinal_24; }
	inline Image_t538875265 ** get_address_of_panelFinal_24() { return &___panelFinal_24; }
	inline void set_panelFinal_24(Image_t538875265 * value)
	{
		___panelFinal_24 = value;
		Il2CppCodeGenWriteBarrier(&___panelFinal_24, value);
	}

	inline static int32_t get_offset_of_finalText_25() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___finalText_25)); }
	inline Text_t9039225 * get_finalText_25() const { return ___finalText_25; }
	inline Text_t9039225 ** get_address_of_finalText_25() { return &___finalText_25; }
	inline void set_finalText_25(Text_t9039225 * value)
	{
		___finalText_25 = value;
		Il2CppCodeGenWriteBarrier(&___finalText_25, value);
	}

	inline static int32_t get_offset_of_alertPerigoBorder_26() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___alertPerigoBorder_26)); }
	inline Image_t538875265 * get_alertPerigoBorder_26() const { return ___alertPerigoBorder_26; }
	inline Image_t538875265 ** get_address_of_alertPerigoBorder_26() { return &___alertPerigoBorder_26; }
	inline void set_alertPerigoBorder_26(Image_t538875265 * value)
	{
		___alertPerigoBorder_26 = value;
		Il2CppCodeGenWriteBarrier(&___alertPerigoBorder_26, value);
	}

	inline static int32_t get_offset_of_alertTimer_27() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___alertTimer_27)); }
	inline float get_alertTimer_27() const { return ___alertTimer_27; }
	inline float* get_address_of_alertTimer_27() { return &___alertTimer_27; }
	inline void set_alertTimer_27(float value)
	{
		___alertTimer_27 = value;
	}

	inline static int32_t get_offset_of_alertBool_28() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___alertBool_28)); }
	inline bool get_alertBool_28() const { return ___alertBool_28; }
	inline bool* get_address_of_alertBool_28() { return &___alertBool_28; }
	inline void set_alertBool_28(bool value)
	{
		___alertBool_28 = value;
	}

	inline static int32_t get_offset_of_milhosRestantesText_29() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___milhosRestantesText_29)); }
	inline Text_t9039225 * get_milhosRestantesText_29() const { return ___milhosRestantesText_29; }
	inline Text_t9039225 ** get_address_of_milhosRestantesText_29() { return &___milhosRestantesText_29; }
	inline void set_milhosRestantesText_29(Text_t9039225 * value)
	{
		___milhosRestantesText_29 = value;
		Il2CppCodeGenWriteBarrier(&___milhosRestantesText_29, value);
	}

	inline static int32_t get_offset_of_shineTimer_30() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___shineTimer_30)); }
	inline float get_shineTimer_30() const { return ___shineTimer_30; }
	inline float* get_address_of_shineTimer_30() { return &___shineTimer_30; }
	inline void set_shineTimer_30(float value)
	{
		___shineTimer_30 = value;
	}

	inline static int32_t get_offset_of_isShine_31() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___isShine_31)); }
	inline bool get_isShine_31() const { return ___isShine_31; }
	inline bool* get_address_of_isShine_31() { return &___isShine_31; }
	inline void set_isShine_31(bool value)
	{
		___isShine_31 = value;
	}

	inline static int32_t get_offset_of_fireflyTimer_32() { return static_cast<int32_t>(offsetof(MatrixMap_t3049394619, ___fireflyTimer_32)); }
	inline float get_fireflyTimer_32() const { return ___fireflyTimer_32; }
	inline float* get_address_of_fireflyTimer_32() { return &___fireflyTimer_32; }
	inline void set_fireflyTimer_32(float value)
	{
		___fireflyTimer_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
