/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_AIRTIGHT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_AIRTIGHT */
M_AIRTIGHT CAST_Int_to_M_AIRTIGHT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::int__m_airtight_in */ kcg_int int__m_airtight_in)
{
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::m_airtight */
  static M_AIRTIGHT _1_m_airtight;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1::then::_L8 */
  static M_AIRTIGHT _L8_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::m_airtight */
  static M_AIRTIGHT m_airtight;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1::else::else::_L1 */
  static M_AIRTIGHT _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::m_airtight */
  static M_AIRTIGHT _3_m_airtight;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1::else::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1::else::then::_L7 */
  static M_AIRTIGHT _L77_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::m_airtight */
  static M_AIRTIGHT _5_m_airtight;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::m_airtight_in */
  static kcg_int m_airtight_in;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::_L5 */
  static kcg_bool _L5;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::_L4 */
  static kcg_int _L4;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::m_airtight */
  static M_AIRTIGHT _9_m_airtight;
  
  _L4 = int__m_airtight_in;
  m_airtight_in = _L4;
  IfBlock1_clock = m_airtight_in == INT_M_AIRTIGHT_fitted_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = kcg_false;
    error2 = _L7_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = m_airtight_in ==
      INT_M_AIRTIGHT_not_fitted_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L6_IfBlock1 = kcg_false;
      error6 = _L6_IfBlock1;
      error = error6;
    }
    else {
      _L2_IfBlock1 = kcg_true;
      error4 = _L2_IfBlock1;
      error = error4;
    }
    error8 = error;
  }
  _L5 = error8;
  noname = _L5;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L8_IfBlock1 = ENUM_M_AIRTIGHT_fitted_TM_conversions;
    _1_m_airtight = _L8_IfBlock1;
    _9_m_airtight = _1_m_airtight;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L77_IfBlock1 = ENUM_M_AIRTIGHT_not_fitted_TM_conversions;
      _5_m_airtight = _L77_IfBlock1;
      m_airtight = _5_m_airtight;
    }
    else {
      _L1_IfBlock1 = ENUM_M_AIRTIGHT_not_fitted_TM_conversions;
      _3_m_airtight = _L1_IfBlock1;
      m_airtight = _3_m_airtight;
    }
    _9_m_airtight = m_airtight;
  }
  return _9_m_airtight;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_AIRTIGHT_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

