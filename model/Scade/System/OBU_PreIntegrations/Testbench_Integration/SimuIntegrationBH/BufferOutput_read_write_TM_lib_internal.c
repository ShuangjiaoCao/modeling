/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write */
void BufferOutput_read_write_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write::Bus_Size */ kcg_int Bus_Size,
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *_50_Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */ kcg_int *_49_Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *_48_Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write::Message_out */
  static M_TrainTrack_Message_T_TM_radio_messages _3_Message_out;
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */
  static kcg_int _2_Stacksize_new;
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _1_Buffer_Out;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::then::_L6 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L6_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::then::_L5 */
  static kcg_int _L5_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::then::_L4 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L4_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::then::_L1 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L1_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::then::_L3 */
  static M_TrainTrack_Message_T_TM_radio_messages _L3_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::Message_out */
  static M_TrainTrack_Message_T_TM_radio_messages Message_out;
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */
  static kcg_int Stacksize_new;
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal Buffer_Out;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else */
  static kcg_bool _23_else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::Message_out */
  static M_TrainTrack_Message_T_TM_radio_messages _15_Message_out;
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */
  static kcg_int _14_Stacksize_new;
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _13_Buffer_Out;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::then::_L4 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L430_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::then::_L5 */
  static kcg_int _L531_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::then::_L6 */
  static M_TrainTrack_Message_T_TM_radio_messages _L632_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::then::_L1 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L133_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::then::_L2 */
  static kcg_int _L234_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::then::_L3 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L335_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::Message_out */
  static M_TrainTrack_Message_T_TM_radio_messages _12_Message_out;
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */
  static kcg_int _11_Stacksize_new;
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _10_Buffer_Out;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::else::_L6 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L647_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::else::_L5 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L546_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::else::_L4 */
  static kcg_int _L445_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::else::_L3 */
  static M_TrainTrack_Message_T_TM_radio_messages _L344_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::else::_L2 */
  static kcg_int _L243_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::else::_L1 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L142_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _16_Buffer_Out;
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */
  static kcg_int _17_Stacksize_new;
  /* TM_lib_internal::BufferOutput_read_write::Message_out */
  static M_TrainTrack_Message_T_TM_radio_messages _18_Message_out;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::then::_L6 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L641_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::then::_L5 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L540_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::then::_L4 */
  static kcg_int _L439_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::then::_L3 */
  static M_TrainTrack_Message_T_TM_radio_messages _L338_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::then::_L2 */
  static kcg_int _L237_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else::else::then::_L1 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L136_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _19_Buffer_Out;
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */
  static kcg_int _20_Stacksize_new;
  /* TM_lib_internal::BufferOutput_read_write::Message_out */
  static M_TrainTrack_Message_T_TM_radio_messages _21_Message_out;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::else */
  static kcg_bool _22_else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _4_Buffer_Out;
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */
  static kcg_int _5_Stacksize_new;
  /* TM_lib_internal::BufferOutput_read_write::Message_out */
  static M_TrainTrack_Message_T_TM_radio_messages _6_Message_out;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::then::_L3 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L329_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::then::_L2 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L228_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::then::_L1 */
  static kcg_int _L127_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::then::_L6 */
  static M_TrainTrack_Message_T_TM_radio_messages _L626_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::then::_L5 */
  static kcg_int _L525_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1::else::then::_L4 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L424_IfBlock1;
  /* TM_lib_internal::BufferOutput_read_write::Buffer_Out */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _7_Buffer_Out;
  /* TM_lib_internal::BufferOutput_read_write::Stacksize_new */
  static kcg_int _8_Stacksize_new;
  /* TM_lib_internal::BufferOutput_read_write::Message_out */
  static M_TrainTrack_Message_T_TM_radio_messages _9_Message_out;
  /* TM_lib_internal::BufferOutput_read_write::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = Bus_Size == 1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &_L6_IfBlock1,
      Buffer_In);
    _L5_IfBlock1 = Stacksize_old;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L4_IfBlock1,
      Message_In);
    /* 6 */
    BufferOutput_read_write1_TM_lib_internal(
      &_L6_IfBlock1,
      _L5_IfBlock1,
      &_L4_IfBlock1,
      &_L1_IfBlock1,
      &_L2_IfBlock1,
      &_L3_IfBlock1);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &_1_Buffer_Out,
      &_L1_IfBlock1);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      _50_Buffer_Out,
      &_1_Buffer_Out);
    _2_Stacksize_new = _L2_IfBlock1;
    *_49_Stacksize_new = _2_Stacksize_new;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_3_Message_out,
      &_L3_IfBlock1);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      _48_Message_out,
      &_3_Message_out);
  }
  else {
    _23_else_clock_IfBlock1 = Bus_Size == 2;
    /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_L228_IfBlock1,
        Buffer_In);
      _L127_IfBlock1 = Stacksize_old;
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L329_IfBlock1,
        Message_In);
      /* 4 */
      BufferOutput_read_write2_TM_lib_internal(
        &_L228_IfBlock1,
        _L127_IfBlock1,
        &_L329_IfBlock1,
        &_L424_IfBlock1,
        &_L525_IfBlock1,
        &_L626_IfBlock1);
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_7_Buffer_Out,
        &_L424_IfBlock1);
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &Buffer_Out,
        &_7_Buffer_Out);
    }
    else {
      _22_else_clock_IfBlock1 = Bus_Size == 3;
      /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_L133_IfBlock1,
          Buffer_In);
        _L234_IfBlock1 = Stacksize_old;
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_L335_IfBlock1,
          Message_In);
        /* 3 */
        BufferOutput_read_write3_TM_lib_internal(
          &_L133_IfBlock1,
          _L234_IfBlock1,
          &_L335_IfBlock1,
          &_L430_IfBlock1,
          &_L531_IfBlock1,
          &_L632_IfBlock1);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_13_Buffer_Out,
          &_L430_IfBlock1);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_4_Buffer_Out,
          &_13_Buffer_Out);
      }
      else {
        else_clock_IfBlock1 = Bus_Size == 4;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_L641_IfBlock1,
            Buffer_In);
          _L439_IfBlock1 = Stacksize_old;
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_L540_IfBlock1,
            Message_In);
          /* 3 */
          BufferOutput_read_write4_TM_lib_internal(
            &_L641_IfBlock1,
            _L439_IfBlock1,
            &_L540_IfBlock1,
            &_L136_IfBlock1,
            &_L237_IfBlock1,
            &_L338_IfBlock1);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_19_Buffer_Out,
            &_L136_IfBlock1);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_10_Buffer_Out,
            &_19_Buffer_Out);
        }
        else {
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_L647_IfBlock1,
            Buffer_In);
          _L445_IfBlock1 = Stacksize_old;
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_L546_IfBlock1,
            Message_In);
          /* 3 */
          BufferOutput_read_write5_TM_lib_internal(
            &_L647_IfBlock1,
            _L445_IfBlock1,
            &_L546_IfBlock1,
            &_L142_IfBlock1,
            &_L243_IfBlock1,
            &_L344_IfBlock1);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_16_Buffer_Out,
            &_L142_IfBlock1);
          kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
            &_10_Buffer_Out,
            &_16_Buffer_Out);
        }
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_4_Buffer_Out,
          &_10_Buffer_Out);
      }
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &Buffer_Out,
        &_4_Buffer_Out);
    }
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      _50_Buffer_Out,
      &Buffer_Out);
    /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
      _8_Stacksize_new = _L525_IfBlock1;
      Stacksize_new = _8_Stacksize_new;
    }
    else {
      /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
        _14_Stacksize_new = _L531_IfBlock1;
        _5_Stacksize_new = _14_Stacksize_new;
      }
      else {
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _20_Stacksize_new = _L237_IfBlock1;
          _11_Stacksize_new = _20_Stacksize_new;
        }
        else {
          _17_Stacksize_new = _L243_IfBlock1;
          _11_Stacksize_new = _17_Stacksize_new;
        }
        _5_Stacksize_new = _11_Stacksize_new;
      }
      Stacksize_new = _5_Stacksize_new;
    }
    *_49_Stacksize_new = Stacksize_new;
    /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &_9_Message_out,
        &_L626_IfBlock1);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &Message_out,
        &_9_Message_out);
    }
    else {
      /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_15_Message_out,
          &_L632_IfBlock1);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_6_Message_out,
          &_15_Message_out);
      }
      else {
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &_21_Message_out,
            &_L338_IfBlock1);
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &_12_Message_out,
            &_21_Message_out);
        }
        else {
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &_18_Message_out,
            &_L344_IfBlock1);
          kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
            &_12_Message_out,
            &_18_Message_out);
        }
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &_6_Message_out,
          &_12_Message_out);
      }
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &Message_out,
        &_6_Message_out);
    }
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      _48_Message_out,
      &Message_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

