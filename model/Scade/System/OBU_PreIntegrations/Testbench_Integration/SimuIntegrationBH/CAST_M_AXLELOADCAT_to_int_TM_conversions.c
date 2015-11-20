/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_AXLELOADCAT_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_AXLELOADCAT_to_int */
kcg_int CAST_M_AXLELOADCAT_to_int_TM_conversions(
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat */ M_AXLELOADCAT m_axleloadcat)
{
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _1_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::then::_L8 */
  static kcg_int _L8_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else */
  static kcg_bool _61_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _9_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _7_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else */
  static kcg_bool _59_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _17_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::then::_L1 */
  static kcg_int _L165_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_bool _L266_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _15_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _57_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error26;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _25_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L169_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L270_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error24;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _23_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _55_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error34;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _33_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L173_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L274_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error32;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _31_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _53_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error42;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _41_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L177_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L278_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error40;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _39_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _51_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error50;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _49_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L181_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L282_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error48;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _47_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static kcg_int _L183_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::_L2 */
  static kcg_bool _L284_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _43_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error44;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L280_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L179_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _45_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error46;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _52_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _35_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error36;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_int _L276_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L175_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _37_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error38;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _54_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _27_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error28;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L272_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static kcg_int _L171_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _29_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error30;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _56_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _19_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error20;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::then::_L1 */
  static kcg_bool _L168_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else::else::then::_L2 */
  static kcg_int _L267_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _21_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _58_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _11_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_int _L264_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else::else::then::_L1 */
  static kcg_bool _L163_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _13_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::else */
  static kcg_bool _60_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _3_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1::else::then::_L7 */
  static kcg_int _L762_IfBlock1;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _5_m_axleloadcat_int;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_in */
  static M_AXLELOADCAT m_axleloadcat_in;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::error */
  static kcg_bool error85;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::_L4 */
  static M_AXLELOADCAT _L4;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::_L7 */
  static kcg_bool _L7;
  /* TM_conversions::CAST_M_AXLELOADCAT_to_int::m_axleloadcat_int */
  static kcg_int _86_m_axleloadcat_int;
  
  _L4 = m_axleloadcat;
  m_axleloadcat_in = _L4;
  IfBlock1_clock = m_axleloadcat_in == ENUM_M_AXLELOADCAT_A_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = kcg_false;
    error2 = _L7_IfBlock1;
    error85 = error2;
  }
  else {
    _61_else_clock_IfBlock1 = m_axleloadcat_in ==
      ENUM_M_AXLELOADCAT_B1_TM_conversions;
    /* ck_anon_activ */ if (_61_else_clock_IfBlock1) {
      _L6_IfBlock1 = kcg_false;
      error6 = _L6_IfBlock1;
      error = error6;
    }
    else {
      _60_else_clock_IfBlock1 = m_axleloadcat_in ==
        ENUM_M_AXLELOADCAT_B2_TM_conversions;
      /* ck_anon_activ */ if (_60_else_clock_IfBlock1) {
        _L2_IfBlock1 = kcg_false;
        error10 = _L2_IfBlock1;
        error4 = error10;
      }
      else {
        _59_else_clock_IfBlock1 = m_axleloadcat_in ==
          ENUM_M_AXLELOADCAT_C2_TM_conversions;
        /* ck_anon_activ */ if (_59_else_clock_IfBlock1) {
          _L163_IfBlock1 = kcg_false;
          error14 = _L163_IfBlock1;
          error8 = error14;
        }
        else {
          _58_else_clock_IfBlock1 = m_axleloadcat_in ==
            ENUM_M_AXLELOADCAT_C3_TM_conversions;
          /* ck_anon_activ */ if (_58_else_clock_IfBlock1) {
            _L266_IfBlock1 = kcg_false;
            error18 = _L266_IfBlock1;
            error12 = error18;
          }
          else {
            _57_else_clock_IfBlock1 = m_axleloadcat_in ==
              ENUM_M_AXLELOADCAT_C3_TM_conversions;
            /* ck_anon_activ */ if (_57_else_clock_IfBlock1) {
              _L168_IfBlock1 = kcg_false;
              error22 = _L168_IfBlock1;
              error16 = error22;
            }
            else {
              _56_else_clock_IfBlock1 = m_axleloadcat_in ==
                ENUM_M_AXLELOADCAT_D2_TM_conversions;
              /* ck_anon_activ */ if (_56_else_clock_IfBlock1) {
                _L270_IfBlock1 = kcg_false;
                error26 = _L270_IfBlock1;
                error20 = error26;
              }
              else {
                _55_else_clock_IfBlock1 = m_axleloadcat_in ==
                  ENUM_M_AXLELOADCAT_D3_TM_conversions;
                /* ck_anon_activ */ if (_55_else_clock_IfBlock1) {
                  _L272_IfBlock1 = kcg_false;
                  error30 = _L272_IfBlock1;
                  error24 = error30;
                }
                else {
                  _54_else_clock_IfBlock1 = m_axleloadcat_in ==
                    ENUM_M_AXLELOADCAT_D4_TM_conversions;
                  /* ck_anon_activ */ if (_54_else_clock_IfBlock1) {
                    _L274_IfBlock1 = kcg_false;
                    error34 = _L274_IfBlock1;
                    error28 = error34;
                  }
                  else {
                    _53_else_clock_IfBlock1 = m_axleloadcat_in ==
                      ENUM_M_AXLELOADCAT_D4XL_TM_conversions;
                    /* ck_anon_activ */ if (_53_else_clock_IfBlock1) {
                      _L175_IfBlock1 = kcg_false;
                      error38 = _L175_IfBlock1;
                      error32 = error38;
                    }
                    else {
                      _52_else_clock_IfBlock1 = m_axleloadcat_in ==
                        ENUM_M_AXLELOADCAT_E4_TM_conversions;
                      /* ck_anon_activ */ if (_52_else_clock_IfBlock1) {
                        _L278_IfBlock1 = kcg_false;
                        error42 = _L278_IfBlock1;
                        error36 = error42;
                      }
                      else {
                        _51_else_clock_IfBlock1 = m_axleloadcat_in ==
                          ENUM_M_AXLELOADCAT_E5_TM_conversions;
                        /* ck_anon_activ */ if (_51_else_clock_IfBlock1) {
                          _L179_IfBlock1 = kcg_false;
                          error46 = _L179_IfBlock1;
                          error40 = error46;
                        }
                        else {
                          else_clock_IfBlock1 = m_axleloadcat_in ==
                            ENUM_M_AXLELOADCAT_HS17_TM_conversions;
                          /* ck_anon_activ */ if (else_clock_IfBlock1) {
                            _L181_IfBlock1 = kcg_false;
                            error50 = _L181_IfBlock1;
                            error44 = error50;
                          }
                          else {
                            _L284_IfBlock1 = kcg_true;
                            error48 = _L284_IfBlock1;
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
    error85 = error;
  }
  _L7 = error85;
  noname = _L7;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L8_IfBlock1 = INT_M_AXLELOADCAT_A_TM_conversions;
    _1_m_axleloadcat_int = _L8_IfBlock1;
    _86_m_axleloadcat_int = _1_m_axleloadcat_int;
  }
  else {
    /* ck_anon_activ */ if (_61_else_clock_IfBlock1) {
      _L762_IfBlock1 = INT_M_AXLELOADCAT_B1_TM_conversions;
      _5_m_axleloadcat_int = _L762_IfBlock1;
      m_axleloadcat_int = _5_m_axleloadcat_int;
    }
    else {
      /* ck_anon_activ */ if (_60_else_clock_IfBlock1) {
        _L1_IfBlock1 = INT_M_AXLELOADCAT_B2_TM_conversions;
        _9_m_axleloadcat_int = _L1_IfBlock1;
        _3_m_axleloadcat_int = _9_m_axleloadcat_int;
      }
      else {
        /* ck_anon_activ */ if (_59_else_clock_IfBlock1) {
          _L264_IfBlock1 = INT_M_AXLELOADCAT_C2_TM_conversions;
          _13_m_axleloadcat_int = _L264_IfBlock1;
          _7_m_axleloadcat_int = _13_m_axleloadcat_int;
        }
        else {
          /* ck_anon_activ */ if (_58_else_clock_IfBlock1) {
            _L165_IfBlock1 = INT_M_AXLELOADCAT_C3_TM_conversions;
            _17_m_axleloadcat_int = _L165_IfBlock1;
            _11_m_axleloadcat_int = _17_m_axleloadcat_int;
          }
          else {
            /* ck_anon_activ */ if (_57_else_clock_IfBlock1) {
              _L267_IfBlock1 = INT_M_AXLELOADCAT_C4_TM_conversions;
              _21_m_axleloadcat_int = _L267_IfBlock1;
              _15_m_axleloadcat_int = _21_m_axleloadcat_int;
            }
            else {
              /* ck_anon_activ */ if (_56_else_clock_IfBlock1) {
                _L169_IfBlock1 = INT_M_AXLELOADCAT_D2_TM_conversions;
                _25_m_axleloadcat_int = _L169_IfBlock1;
                _19_m_axleloadcat_int = _25_m_axleloadcat_int;
              }
              else {
                /* ck_anon_activ */ if (_55_else_clock_IfBlock1) {
                  _L171_IfBlock1 = INT_M_AXLELOADCAT_D3_TM_conversions;
                  _29_m_axleloadcat_int = _L171_IfBlock1;
                  _23_m_axleloadcat_int = _29_m_axleloadcat_int;
                }
                else {
                  /* ck_anon_activ */ if (_54_else_clock_IfBlock1) {
                    _L173_IfBlock1 = INT_M_AXLELOADCAT_D4_TM_conversions;
                    _33_m_axleloadcat_int = _L173_IfBlock1;
                    _27_m_axleloadcat_int = _33_m_axleloadcat_int;
                  }
                  else {
                    /* ck_anon_activ */ if (_53_else_clock_IfBlock1) {
                      _L276_IfBlock1 = INT_M_AXLELOADCAT_D4XL_TM_conversions;
                      _37_m_axleloadcat_int = _L276_IfBlock1;
                      _31_m_axleloadcat_int = _37_m_axleloadcat_int;
                    }
                    else {
                      /* ck_anon_activ */ if (_52_else_clock_IfBlock1) {
                        _L177_IfBlock1 = INT_M_AXLELOADCAT_E4_TM_conversions;
                        _41_m_axleloadcat_int = _L177_IfBlock1;
                        _35_m_axleloadcat_int = _41_m_axleloadcat_int;
                      }
                      else {
                        /* ck_anon_activ */ if (_51_else_clock_IfBlock1) {
                          _L280_IfBlock1 = INT_M_AXLELOADCAT_E5_TM_conversions;
                          _45_m_axleloadcat_int = _L280_IfBlock1;
                          _39_m_axleloadcat_int = _45_m_axleloadcat_int;
                        }
                        else {
                          /* ck_anon_activ */ if (else_clock_IfBlock1) {
                            _L282_IfBlock1 =
                              INT_M_AXLELOADCAT_HS17_TM_conversions;
                            _49_m_axleloadcat_int = _L282_IfBlock1;
                            _43_m_axleloadcat_int = _49_m_axleloadcat_int;
                          }
                          else {
                            _L183_IfBlock1 =
                              INT_M_AXLELOADCAT_E5_TM_conversions;
                            _47_m_axleloadcat_int = _L183_IfBlock1;
                            _43_m_axleloadcat_int = _47_m_axleloadcat_int;
                          }
                          _39_m_axleloadcat_int = _43_m_axleloadcat_int;
                        }
                        _35_m_axleloadcat_int = _39_m_axleloadcat_int;
                      }
                      _31_m_axleloadcat_int = _35_m_axleloadcat_int;
                    }
                    _27_m_axleloadcat_int = _31_m_axleloadcat_int;
                  }
                  _23_m_axleloadcat_int = _27_m_axleloadcat_int;
                }
                _19_m_axleloadcat_int = _23_m_axleloadcat_int;
              }
              _15_m_axleloadcat_int = _19_m_axleloadcat_int;
            }
            _11_m_axleloadcat_int = _15_m_axleloadcat_int;
          }
          _7_m_axleloadcat_int = _11_m_axleloadcat_int;
        }
        _3_m_axleloadcat_int = _7_m_axleloadcat_int;
      }
      m_axleloadcat_int = _3_m_axleloadcat_int;
    }
    _86_m_axleloadcat_int = m_axleloadcat_int;
  }
  return _86_m_axleloadcat_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_AXLELOADCAT_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

