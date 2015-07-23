/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _C_header_to_M015_TM_radio_messages_H_
#define _C_header_to_M015_TM_radio_messages_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"
#include "CAST_Int_to_L_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"
#include "CAST_Int_to_NID_EM_TM_conversions.h"
#include "CAST_Int_to_D_REF_TM_conversions.h"
#include "CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_015_T_TM_radio_messages /* TM_radio_messages::C_header_to_M015::message_out */ message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_M_ACK_TM_conversions /* 1 */ _7_Context_1;
  outC_CAST_Int_to_NID_LRBG_TM_conversions /* 1 */ _6_Context_1;
  outC_CAST_Int_to_NID_EM_TM_conversions /* 1 */ _5_Context_1;
  outC_CAST_Int_to_D_REF_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_L_MESSAGE_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_NID_MESSAGE_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _21_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ _14_IfBlock1_clock_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _10_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_123_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_122_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_120_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_119_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_118_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_117_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ _16_else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_115_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ _13_error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_112_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_111_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_19_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_18_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */ _L1_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */ q_scale_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */ _L2_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */ _L4_1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ q_scale_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */ q_scale_int_1;
  M_TrackTrain_Radio_T_TM_radio_messages /* TM_radio_messages::C_header_to_M015::_L1 */ _L1;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L13 */ _L13;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L12 */ _L12;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L11 */ _L11;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L10 */ _L10;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L9 */ _L9;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L8 */ _L8;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L7 */ _L7;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L6 */ _L6;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L5 */ _L5;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L4 */ _L4;
  kcg_int /* TM_radio_messages::C_header_to_M015::_L3 */ _L3;
  kcg_bool /* TM_radio_messages::C_header_to_M015::_L2 */ _L2;
  M_015_T_TM_radio_messages /* TM_radio_messages::C_header_to_M015::_L26 */ _L26;
  M_ACK /* TM_radio_messages::C_header_to_M015::_L27 */ _L27;
  NID_LRBG /* TM_radio_messages::C_header_to_M015::_L28 */ _L28;
  NID_EM /* TM_radio_messages::C_header_to_M015::_L29 */ _L29;
  Q_SCALE /* TM_radio_messages::C_header_to_M015::_L30 */ _L30;
  D_REF /* TM_radio_messages::C_header_to_M015::_L31 */ _L31;
  Q_DIR /* TM_radio_messages::C_header_to_M015::_L32 */ _L32;
  D_EMERGENCYSTOP /* TM_radio_messages::C_header_to_M015::_L33 */ _L33;
  NID_MESSAGE /* TM_radio_messages::C_header_to_M015::_L37 */ _L37;
  T_TRAIN /* TM_radio_messages::C_header_to_M015::_L36 */ _L36;
  L_MESSAGE /* TM_radio_messages::C_header_to_M015::_L35 */ _L35;
} outC_C_header_to_M015_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::C_header_to_M015 */
extern void C_header_to_M015_TM_radio_messages(
  /* TM_radio_messages::C_header_to_M015::header_in */M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M015_TM_radio_messages *outC);

extern void C_header_to_M015_reset_TM_radio_messages(
  outC_C_header_to_M015_TM_radio_messages *outC);

#endif /* _C_header_to_M015_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M015_TM_radio_messages.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

