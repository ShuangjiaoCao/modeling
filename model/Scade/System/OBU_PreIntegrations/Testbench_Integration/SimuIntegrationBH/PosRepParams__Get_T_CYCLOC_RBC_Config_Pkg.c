/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_T_CYCLOC_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__Get_T_CYCLOC */
T_CYCLOC PosRepParams__Get_T_CYCLOC_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__Get_T_CYCLOC::inPosRepParams */ PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_T_CYCLOC::_L1 */
  static PosRepParams_T _L1;
  /* RBC_Config_Pkg::PosRepParams__Get_T_CYCLOC::_L2 */
  static T_CYCLOC _L2;
  /* RBC_Config_Pkg::PosRepParams__Get_T_CYCLOC::out_T_CYCLOC */
  static T_CYCLOC out_T_CYCLOC;
  
  kcg_copy_PosRepParams_T(&_L1, inPosRepParams);
  _L2 = _L1.t_cycloc;
  out_T_CYCLOC = _L2;
  return out_T_CYCLOC;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__Get_T_CYCLOC_RBC_Config_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

