/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformA_intToA_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformA_intToA_real */
A_internal_real_Type_SDM_Types_Pkg TransformA_intToA_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformA_intToA_real::acc_int */ A_internal_Type_Obu_BasicTypes_Pkg acc_int)
{
  /* SDM_Types_Pkg::TransformA_intToA_real::_L1 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* SDM_Types_Pkg::TransformA_intToA_real::_L2 */
  static kcg_real _L2;
  /* SDM_Types_Pkg::TransformA_intToA_real::_L3 */
  static kcg_real _L3;
  /* SDM_Types_Pkg::TransformA_intToA_real::_L4 */
  static kcg_real _L4;
  /* SDM_Types_Pkg::TransformA_intToA_real::acc_real */
  static A_internal_real_Type_SDM_Types_Pkg acc_real;
  
  _L1 = acc_int;
  _L2 = (kcg_real) _L1;
  _L4 = 100.0;
  _L3 = _L2 / _L4;
  acc_real = _L3;
  return acc_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformA_intToA_real_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

