/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_EMERGENCYSTOP_to_int_TM_conversions.h"

/* TM_conversions::CAST_D_EMERGENCYSTOP_to_int */
kcg_int CAST_D_EMERGENCYSTOP_to_int_TM_conversions(
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::_L1 */
  static D_EMERGENCYSTOP _L1;
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::_L8 */
  static kcg_int _L8;
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::_L7 */
  static kcg_int _L7;
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::_L6 */
  static kcg_bool _L6;
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::d_emergencystop_int */
  static kcg_int d_emergencystop_int;
  
  _L1 = d_emergencystop;
  d_emergencystop_int = _L1;
  _L7 = DIM_D_max_TM_conversions;
  _L6 = _L1 > _L7;
  _L8 = DIM_D_min_TM_conversions;
  _L9 = _L1 < _L8;
  noname = _L9;
  _1_noname = _L6;
  return d_emergencystop_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_D_EMERGENCYSTOP_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

