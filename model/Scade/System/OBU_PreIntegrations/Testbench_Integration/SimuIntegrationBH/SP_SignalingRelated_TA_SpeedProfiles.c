/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_SignalingRelated_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_SignalingRelated */
void SP_SignalingRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_SignalingRelated::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_SignalingRelated::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_SignalingRelated::SignalingRelated */ SSP_cat_t_TA_MRSP *SignalingRelated)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;
  static kcg_bool _1_noname;
  /* TA_SpeedProfiles::SP_SignalingRelated::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_SpeedProfiles::SP_SignalingRelated::_L2 */
  static SSP_cat_t_TA_MRSP _L2;
  /* TA_SpeedProfiles::SP_SignalingRelated::_L3 */
  static kcg_bool _L3;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, MessageIn);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L2, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(SignalingRelated, &_L2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &_L1);
  _L3 = reset;
  _1_noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_SignalingRelated_TA_SpeedProfiles.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

