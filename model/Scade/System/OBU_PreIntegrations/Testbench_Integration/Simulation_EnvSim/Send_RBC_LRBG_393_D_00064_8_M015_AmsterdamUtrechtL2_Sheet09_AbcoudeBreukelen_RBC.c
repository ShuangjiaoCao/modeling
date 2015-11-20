/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_RBC_LRBG_393_D_00064_8_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"

/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Send_RBC_LRBG_393_D_00064_8_M015 */
void Send_RBC_LRBG_393_D_00064_8_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Send_RBC_LRBG_393_D_00064_8_M015::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Send_RBC_LRBG_393_D_00064_8_M015::TriggerValue */kcg_int TriggerValue,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Send_RBC_LRBG_393_D_00064_8_M015::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Send_RBC_LRBG_393_D_00064_8_M015::_L52 */
  static kcg_bool _L52;
  
  _L52 = TriggerValue == (*RadiaDataIn).trigger;
  if (_L52) {
    /* 1 */
    Build_RBC_LRBG_393_D_00064_8_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
      RadiaDataIn,
      R_data_out);
  }
  else {
    kcg_copy_R_data_internal_T_InfraLib(R_data_out, RadiaDataIn);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_RBC_LRBG_393_D_00064_8_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

