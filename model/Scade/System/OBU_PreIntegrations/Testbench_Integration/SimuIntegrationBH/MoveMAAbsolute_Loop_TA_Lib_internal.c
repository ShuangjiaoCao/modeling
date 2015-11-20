/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_Loop_TA_Lib_internal.h"

/* TA_Lib_internal::MoveMAAbsolute_Loop */
void MoveMAAbsolute_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveMAAbsolute_Loop::i */ kcg_int i,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::ProfileIn */ MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::MoveMAAbsolute_Loop::ProfileOut */ MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileOut)
{
  /* TA_Lib_internal::MoveMAAbsolute_Loop::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg _1_offset;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::IfBlock1::then::_L1 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1_IfBlock1;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg offset;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::IfBlock1::else::else::_L1 */
  static kcg_int _L15_IfBlock1;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg _2_offset;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::IfBlock1::else::then::_L1 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L14_IfBlock1;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_offset;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg _6_offset;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L2 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L2;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L6 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L6;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L7 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L7;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L9 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L9;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L10 */
  static kcg_int _L10;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L130 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L130;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L141 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L141;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L143 */
  static kcg_bool _L143;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L254 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L254;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L255 */
  static kcg_int _L255;
  /* TA_Lib_internal::MoveMAAbsolute_Loop::_L1 */
  static kcg_int _L1;
  
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L2, ProfileIn);
  _L1 = i;
  if ((0 <= _L1) & (_L1 < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L6, &_L2[_L1]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L6,
      (MovementAuthoritySection_t_TrackAtlasTypes *)
        &DEFAULT_MA_section_TrackAtlasTypes);
  }
  _L130 = _L6.l_section;
  _L143 = _L6.valid;
  IfBlock1_clock = (msg_LRBG == kcg_true) & (msg_prvLRBG == kcg_false);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = pos_LRBG;
    _1_offset = _L1_IfBlock1;
    _6_offset = _1_offset;
  }
  else {
    else_clock_IfBlock1 = (msg_LRBG == kcg_false) & (msg_prvLRBG == kcg_true);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L14_IfBlock1 = pos_prvLRBG;
      _3_offset = _L14_IfBlock1;
      offset = _3_offset;
    }
    else {
      _L15_IfBlock1 = 0;
      _2_offset = _L15_IfBlock1;
      offset = _2_offset;
    }
    _6_offset = offset;
  }
  _L141 = _6_offset;
  _L255 = 0;
  /* 1 */ if (_L143) {
    _L254 = _L141;
  }
  else {
    _L254 = _L255;
  }
  _L10 = _L130 + _L254;
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L9, &_L6);
  if (kcg_true) {
    _L9.l_section = _L10;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L7, &_L2);
  if ((0 <= _L1) & (_L1 < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L7[_L1], &_L9);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(ProfileOut, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveMAAbsolute_Loop_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

