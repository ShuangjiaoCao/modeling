/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13.h"

/* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003 */
void Build_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13(
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::_L38 */
  static CompressedPackets_T_Common_Types_Pkg _L38;
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::_L39 */
  static R_data_internal_T_InfraLib _L39;
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::_L40 */
  static R_data_internal_T_InfraLib _L40;
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::_L42 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L42;
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::_L43 */
  static R_data_internal_T_InfraLib _L43;
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::_L44 */
  static kcg_bool _L44;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L1, RadiaDataIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L38, &_L1.packets);
  /* 1 */
  SendRadioPackets_LRBG_351_D_00054_9_M003_UserStories13_16_US_13(&_L38, &_L3);
  kcg_copy_R_data_internal_T_InfraLib(&_L39, &_L1);
  if (kcg_true) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L39.packets, &_L3);
  }
  /* 1 */
  Send_M003_JRU_MessageLibBaseline2(
    (M_003_int_T_TM_radio_messages *) &LRBG_351_D_00054_9_M003_Messages_426,
    &_L42);
  kcg_copy_R_data_internal_T_InfraLib(&_L40, &_L39);
  if (kcg_true) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L40.message, &_L42);
  }
  _L44 = kcg_true;
  kcg_copy_R_data_internal_T_InfraLib(&_L43, &_L40);
  if (kcg_true) {
    _L43.message_sent = _L44;
  }
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L43);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

