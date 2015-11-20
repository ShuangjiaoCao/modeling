/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_ACKLEVELTR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_ACKLEVELTR */
L_ACKLEVELTR CAST_Int_to_L_ACKLEVELTR_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::l_ackleveltr_int */ kcg_int l_ackleveltr_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::_L10 */
  static kcg_int _L10;
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::l_ackleveltr */
  static L_ACKLEVELTR l_ackleveltr;
  
  _L1 = l_ackleveltr_int;
  l_ackleveltr = _L1;
  _L10 = DIM_L_max_TM_conversions;
  _L9 = _L1 > _L10;
  noname = _L9;
  _L11 = DIM_L_min_TM_conversions;
  _L8 = _L1 < _L11;
  _1_noname = _L8;
  return l_ackleveltr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_ACKLEVELTR_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

