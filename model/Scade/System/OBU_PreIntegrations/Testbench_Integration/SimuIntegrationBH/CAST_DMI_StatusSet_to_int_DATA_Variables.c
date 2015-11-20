/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_StatusSet_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_StatusSet_to_int */
kcg_int CAST_DMI_StatusSet_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_ct */ DMI_StatusSet_T_DMI_Types_Pkg dmi_statusSet_ct)
{
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error2;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _1_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else */
  static kcg_bool _76_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error10;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _9_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::then::_L1 */
  static kcg_int _L179_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error8;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _7_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else */
  static kcg_bool _74_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error18;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _17_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::then::_L3 */
  static kcg_bool _L382_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_int _L283_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error16;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _15_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _72_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error26;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _25_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L386_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L287_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error24;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _23_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _70_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error34;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _33_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L390_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L291_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error32;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _31_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _68_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error42;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _41_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L394_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L295_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error40;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _39_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _66_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error50;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _49_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L398_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L299_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error48;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _47_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _64_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error58;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _57_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3102_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L2103_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error56;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _55_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static kcg_bool _L1107_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L3 */
  static kcg_int _L3106_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _59_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error60;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L2105_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3104_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _61_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error62;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _63_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _51_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error52;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L2101_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3100_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _53_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error54;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _65_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _43_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error44;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L297_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L396_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _45_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error46;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _67_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _35_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error36;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L293_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L392_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _37_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error38;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _69_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _27_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error28;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L289_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L388_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _29_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error30;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _71_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _19_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error20;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::then::_L2 */
  static kcg_int _L285_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else::else::then::_L3 */
  static kcg_bool _L384_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _21_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error22;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _73_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _11_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error12;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::then::_L1 */
  static kcg_int _L181_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_bool _L280_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _13_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error14;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::else */
  static kcg_bool _75_else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _3_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error4;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::then::_L1 */
  static kcg_int _L178_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1::else::then::_L3 */
  static kcg_bool _L377_IfBlock1;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _5_dmi_statusSet_int;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::error */
  static kcg_bool error108;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::_L15 */
  static kcg_bool _L15;
  /* DATA::Variables::CAST_DMI_StatusSet_to_int::dmi_statusSet_int */
  static kcg_int _109_dmi_statusSet_int;
  
  IfBlock1_clock = dmi_statusSet_ct == ENUM_DMI_StatusSet_T_Running_state;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = INT_DMI_StatusSet_T_Running_state;
    _1_dmi_statusSet_int = _L1_IfBlock1;
    _109_dmi_statusSet_int = _1_dmi_statusSet_int;
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error108 = error2;
  }
  else {
    _76_else_clock_IfBlock1 = dmi_statusSet_ct ==
      ENUM_DMI_StatusSet_T_Starting_state;
    /* ck_anon_activ */ if (_76_else_clock_IfBlock1) {
      _L178_IfBlock1 = INT_DMI_StatusSet_T_Starting_state;
      _5_dmi_statusSet_int = _L178_IfBlock1;
      dmi_statusSet_int = _5_dmi_statusSet_int;
    }
    else {
      _75_else_clock_IfBlock1 = dmi_statusSet_ct ==
        ENUM_DMI_StatusSet_T_Failure_state;
      /* ck_anon_activ */ if (_75_else_clock_IfBlock1) {
        _L179_IfBlock1 = INT_DMI_StatusSet_T_Failure_state;
        _9_dmi_statusSet_int = _L179_IfBlock1;
        _3_dmi_statusSet_int = _9_dmi_statusSet_int;
      }
      else {
        _74_else_clock_IfBlock1 = dmi_statusSet_ct ==
          ENUM_DMI_StatusSet_T_Running_not_active_state;
        /* ck_anon_activ */ if (_74_else_clock_IfBlock1) {
          _L181_IfBlock1 = INT_DMI_StatusSet_T_Running_not_active_state;
          _13_dmi_statusSet_int = _L181_IfBlock1;
          _7_dmi_statusSet_int = _13_dmi_statusSet_int;
        }
        else {
          _73_else_clock_IfBlock1 = dmi_statusSet_ct ==
            ENUM_DMI_StatusSet_T_Train_Speed_Overflow;
          /* ck_anon_activ */ if (_73_else_clock_IfBlock1) {
            _L283_IfBlock1 = INT_DMI_StatusSet_T_Train_Speed_Overflow;
            _17_dmi_statusSet_int = _L283_IfBlock1;
            _11_dmi_statusSet_int = _17_dmi_statusSet_int;
          }
          else {
            _72_else_clock_IfBlock1 = dmi_statusSet_ct ==
              ENUM_DMI_StatusSet_T_Invalid_track_condition;
            /* ck_anon_activ */ if (_72_else_clock_IfBlock1) {
              _L285_IfBlock1 = INT_DMI_StatusSet_T_Invalid_track_condition;
              _21_dmi_statusSet_int = _L285_IfBlock1;
              _15_dmi_statusSet_int = _21_dmi_statusSet_int;
            }
            else {
              _71_else_clock_IfBlock1 = dmi_statusSet_ct ==
                ENUM_DMI_StatusSet_T_Invalid_predefined_text_message;
              /* ck_anon_activ */ if (_71_else_clock_IfBlock1) {
                _L287_IfBlock1 =
                  INT_DMI_StatusSet_T_Invalid_predefined_text_message;
                _25_dmi_statusSet_int = _L287_IfBlock1;
                _19_dmi_statusSet_int = _25_dmi_statusSet_int;
              }
              else {
                _70_else_clock_IfBlock1 = dmi_statusSet_ct ==
                  ENUM_DMI_StatusSet_T_Invalid_text_message;
                /* ck_anon_activ */ if (_70_else_clock_IfBlock1) {
                  _L289_IfBlock1 = INT_DMI_StatusSet_T_Invalid_text_message;
                  _29_dmi_statusSet_int = _L289_IfBlock1;
                  _23_dmi_statusSet_int = _29_dmi_statusSet_int;
                }
                else {
                  _69_else_clock_IfBlock1 = dmi_statusSet_ct ==
                    ENUM_DMI_StatusSet_T_HW_warning_temp_reached;
                  /* ck_anon_activ */ if (_69_else_clock_IfBlock1) {
                    _L291_IfBlock1 =
                      INT_DMI_StatusSet_T_HW_warning_temp_reached;
                    _33_dmi_statusSet_int = _L291_IfBlock1;
                    _27_dmi_statusSet_int = _33_dmi_statusSet_int;
                  }
                  else {
                    _68_else_clock_IfBlock1 = dmi_statusSet_ct ==
                      ENUM_DMI_StatusSet_T_TFT_OFF_temp_reached;
                    /* ck_anon_activ */ if (_68_else_clock_IfBlock1) {
                      _L293_IfBlock1 = INT_DMI_StatusSet_T_TFT_OFF_temp_reached;
                      _37_dmi_statusSet_int = _L293_IfBlock1;
                      _31_dmi_statusSet_int = _37_dmi_statusSet_int;
                    }
                    else {
                      _67_else_clock_IfBlock1 = dmi_statusSet_ct ==
                        ENUM_DMI_StatusSet_T_Device_OFF_temp_reached;
                      /* ck_anon_activ */ if (_67_else_clock_IfBlock1) {
                        _L295_IfBlock1 =
                          INT_DMI_StatusSet_T_Device_OFF_temp_reached;
                        _41_dmi_statusSet_int = _L295_IfBlock1;
                        _35_dmi_statusSet_int = _41_dmi_statusSet_int;
                      }
                      else {
                        _66_else_clock_IfBlock1 = dmi_statusSet_ct ==
                          ENUM_DMI_StatusSet_T_Over_temperature;
                        /* ck_anon_activ */ if (_66_else_clock_IfBlock1) {
                          _L297_IfBlock1 = INT_DMI_StatusSet_T_Over_temperature;
                          _45_dmi_statusSet_int = _L297_IfBlock1;
                          _39_dmi_statusSet_int = _45_dmi_statusSet_int;
                        }
                        else {
                          _65_else_clock_IfBlock1 = dmi_statusSet_ct ==
                            ENUM_DMI_StatusSet_T_Backlight_on_off;
                          /* ck_anon_activ */ if (_65_else_clock_IfBlock1) {
                            _L299_IfBlock1 =
                              INT_DMI_StatusSet_T_Backlight_on_off;
                            _49_dmi_statusSet_int = _L299_IfBlock1;
                            _43_dmi_statusSet_int = _49_dmi_statusSet_int;
                          }
                          else {
                            _64_else_clock_IfBlock1 = dmi_statusSet_ct ==
                              ENUM_DMI_StatusSet_T_FAN_blocked;
                            /* ck_anon_activ */ if (_64_else_clock_IfBlock1) {
                              _L2101_IfBlock1 = INT_DMI_StatusSet_T_FAN_blocked;
                              _53_dmi_statusSet_int = _L2101_IfBlock1;
                              _47_dmi_statusSet_int = _53_dmi_statusSet_int;
                            }
                            else {
                              _63_else_clock_IfBlock1 = dmi_statusSet_ct ==
                                ENUM_DMI_StatusSet_T_Power_supply_key_switch_off;
                              /* ck_anon_activ */ if (_63_else_clock_IfBlock1) {
                                _L2103_IfBlock1 =
                                  INT_DMI_StatusSet_T_Power_supply_key_switch_off;
                                _57_dmi_statusSet_int = _L2103_IfBlock1;
                                _51_dmi_statusSet_int = _57_dmi_statusSet_int;
                              }
                              else {
                                else_clock_IfBlock1 = dmi_statusSet_ct ==
                                  ENUM_DMI_StatusSet_T_Watchdog_not_running;
                                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                  _L2105_IfBlock1 =
                                    INT_DMI_StatusSet_T_Watchdog_not_running;
                                  _61_dmi_statusSet_int = _L2105_IfBlock1;
                                  _55_dmi_statusSet_int = _61_dmi_statusSet_int;
                                }
                                else {
                                  _L3106_IfBlock1 =
                                    INT_DMI_StatusSet_T_Running_state;
                                  _59_dmi_statusSet_int = _L3106_IfBlock1;
                                  _55_dmi_statusSet_int = _59_dmi_statusSet_int;
                                }
                                _51_dmi_statusSet_int = _55_dmi_statusSet_int;
                              }
                              _47_dmi_statusSet_int = _51_dmi_statusSet_int;
                            }
                            _43_dmi_statusSet_int = _47_dmi_statusSet_int;
                          }
                          _39_dmi_statusSet_int = _43_dmi_statusSet_int;
                        }
                        _35_dmi_statusSet_int = _39_dmi_statusSet_int;
                      }
                      _31_dmi_statusSet_int = _35_dmi_statusSet_int;
                    }
                    _27_dmi_statusSet_int = _31_dmi_statusSet_int;
                  }
                  _23_dmi_statusSet_int = _27_dmi_statusSet_int;
                }
                _19_dmi_statusSet_int = _23_dmi_statusSet_int;
              }
              _15_dmi_statusSet_int = _19_dmi_statusSet_int;
            }
            _11_dmi_statusSet_int = _15_dmi_statusSet_int;
          }
          _7_dmi_statusSet_int = _11_dmi_statusSet_int;
        }
        _3_dmi_statusSet_int = _7_dmi_statusSet_int;
      }
      dmi_statusSet_int = _3_dmi_statusSet_int;
    }
    _109_dmi_statusSet_int = dmi_statusSet_int;
    /* ck_anon_activ */ if (_76_else_clock_IfBlock1) {
      _L377_IfBlock1 = kcg_false;
      error6 = _L377_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_75_else_clock_IfBlock1) {
        _L2_IfBlock1 = kcg_false;
        error10 = _L2_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_74_else_clock_IfBlock1) {
          _L280_IfBlock1 = kcg_false;
          error14 = _L280_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (_73_else_clock_IfBlock1) {
            _L382_IfBlock1 = kcg_false;
            error18 = _L382_IfBlock1;
            error12 = error18;
          }
          else {
            /* ck_anon_activ */ if (_72_else_clock_IfBlock1) {
              _L384_IfBlock1 = kcg_false;
              error22 = _L384_IfBlock1;
              error16 = error22;
            }
            else {
              /* ck_anon_activ */ if (_71_else_clock_IfBlock1) {
                _L386_IfBlock1 = kcg_false;
                error26 = _L386_IfBlock1;
                error20 = error26;
              }
              else {
                /* ck_anon_activ */ if (_70_else_clock_IfBlock1) {
                  _L388_IfBlock1 = kcg_false;
                  error30 = _L388_IfBlock1;
                  error24 = error30;
                }
                else {
                  /* ck_anon_activ */ if (_69_else_clock_IfBlock1) {
                    _L390_IfBlock1 = kcg_false;
                    error34 = _L390_IfBlock1;
                    error28 = error34;
                  }
                  else {
                    /* ck_anon_activ */ if (_68_else_clock_IfBlock1) {
                      _L392_IfBlock1 = kcg_false;
                      error38 = _L392_IfBlock1;
                      error32 = error38;
                    }
                    else {
                      /* ck_anon_activ */ if (_67_else_clock_IfBlock1) {
                        _L394_IfBlock1 = kcg_false;
                        error42 = _L394_IfBlock1;
                        error36 = error42;
                      }
                      else {
                        /* ck_anon_activ */ if (_66_else_clock_IfBlock1) {
                          _L396_IfBlock1 = kcg_false;
                          error46 = _L396_IfBlock1;
                          error40 = error46;
                        }
                        else {
                          /* ck_anon_activ */ if (_65_else_clock_IfBlock1) {
                            _L398_IfBlock1 = kcg_false;
                            error50 = _L398_IfBlock1;
                            error44 = error50;
                          }
                          else {
                            /* ck_anon_activ */ if (_64_else_clock_IfBlock1) {
                              _L3100_IfBlock1 = kcg_false;
                              error54 = _L3100_IfBlock1;
                              error48 = error54;
                            }
                            else {
                              /* ck_anon_activ */ if (_63_else_clock_IfBlock1) {
                                _L3102_IfBlock1 = kcg_false;
                                error58 = _L3102_IfBlock1;
                                error52 = error58;
                              }
                              else {
                                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                  _L3104_IfBlock1 = kcg_false;
                                  error62 = _L3104_IfBlock1;
                                  error56 = error62;
                                }
                                else {
                                  _L1107_IfBlock1 = kcg_true;
                                  error60 = _L1107_IfBlock1;
                                  error56 = error60;
                                }
                                error52 = error56;
                              }
                              error48 = error52;
                            }
                            error44 = error48;
                          }
                          error40 = error44;
                        }
                        error36 = error40;
                      }
                      error32 = error36;
                    }
                    error28 = error32;
                  }
                  error24 = error28;
                }
                error20 = error24;
              }
              error16 = error20;
            }
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error108 = error;
  }
  _L15 = error108;
  noname = _L15;
  return _109_dmi_statusSet_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_StatusSet_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

