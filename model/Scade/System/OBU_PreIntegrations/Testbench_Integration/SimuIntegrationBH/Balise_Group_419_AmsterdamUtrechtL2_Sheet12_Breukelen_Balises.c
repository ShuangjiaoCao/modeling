/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_419_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.h"

/* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419 */
void Balise_Group_419_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::BG_message_in */ CompressedBaliseMessage_TM *BG_message_in,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::TrainPos */ kcg_real TrainPos,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::Engineering_Data */ BaliseGroupData_TM *Engineering_Data,
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::BG_message_out */ CompressedBaliseMessage_TM *BG_message_out)
{
  static kcg_bool noname;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::BaliseDataIn */
  static B_data_internal_T_InfraLib BaliseDataIn;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::BaliseDataOut */
  static B_data_internal_T_InfraLib BaliseDataOut;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L7 */
  static B_data_internal_T_InfraLib _L7;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L9 */
  static B_data_internal_T_InfraLib _L9;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L11 */
  static B_data_internal_T_InfraLib _L11;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L13 */
  static CompressedBaliseMessage_TM _L13;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L14 */
  static kcg_bool _L14;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L16 */
  static B_data_internal_T_InfraLib _L16;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L19 */
  static BaliseGroupData_TM _L19;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L20 */
  static kcg_int _L20;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L21 */
  static kcg_int _L21;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L8 */
  static B_data_internal_T_InfraLib _L8;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L28 */
  static kcg_real _L28;
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balise_Group_419::_L29 */
  static CompressedBaliseMessage_TM _L29;
  
  _L28 = TrainPos;
  kcg_copy_BaliseGroupData_TM(&_L19, Engineering_Data);
  /* 1 */ Balise_Group_Init_InfraLib(_L28, &_L19, &_L11);
  kcg_copy_B_data_internal_T_InfraLib(&BaliseDataIn, &_L11);
  kcg_copy_B_data_internal_T_InfraLib(&_L9, &BaliseDataIn);
  _L20 = 0;
  /* 1 */
  Balise_419_1_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L9,
    (BaliseTelegramHeader_int_T_TM *) &BG419_header_B1_Balises426,
    _L20,
    &_L8);
  _L21 = 1;
  /* 1 */
  Balise_419_0_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &_L8,
    (BaliseTelegramHeader_int_T_TM *) &BG419_header_B0_Balises426,
    _L21,
    &_L7);
  kcg_copy_B_data_internal_T_InfraLib(&BaliseDataOut, &_L7);
  kcg_copy_B_data_internal_T_InfraLib(&_L16, &BaliseDataOut);
  kcg_copy_CompressedBaliseMessage_TM(&_L29, BG_message_in);
  /* 1 */ Balise_Group_Close_InfraLib(&_L16, &_L29, &_L14, &_L13);
  kcg_copy_CompressedBaliseMessage_TM(BG_message_out, &_L13);
  noname = _L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_419_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

