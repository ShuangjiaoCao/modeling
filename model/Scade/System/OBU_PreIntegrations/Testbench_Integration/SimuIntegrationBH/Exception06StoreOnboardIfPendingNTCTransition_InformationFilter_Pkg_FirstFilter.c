/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception06StoreOnboardIfPendingNTCTransition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition */
void Exception06StoreOnboardIfPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition::_L2 */
  static kcg_bool _L2;
  
  _L2 = kcg_false;
  *outAcceptMessage = _L2;
  _L1 = inPendingNTCTransition;
  *outStoreInTransitionBuffer = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception06StoreOnboardIfPendingNTCTransition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

