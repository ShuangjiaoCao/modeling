/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_477 */
void Balise_Group_477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_477::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_477::TrainPos */kcg_real TrainPos,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_477::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_477::BG_message_out */CompressedBaliseMessage_TM *BG_message_out)
{
  static B_data_internal_T_InfraLib tmp1;
  static B_data_internal_T_InfraLib tmp;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_477::_L14 */
  static kcg_bool _L14;
  
  /* 1 */ Balise_Group_Init_InfraLib(TrainPos, Engineering_Data, &tmp1);
  /* 1 */
  Balise_477_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp1,
    (BaliseTelegramHeader_int_T_TM *) &BG477_header_B0_Balises426,
    0,
    &tmp);
  /* 1 */
  Balise_477_1_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &tmp,
    (BaliseTelegramHeader_int_T_TM *) &BG477_header_B1_Balises426,
    1,
    &tmp1);
  /* 1 */
  Balise_Group_Close_InfraLib(&tmp1, BG_message_in, &_L14, BG_message_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

