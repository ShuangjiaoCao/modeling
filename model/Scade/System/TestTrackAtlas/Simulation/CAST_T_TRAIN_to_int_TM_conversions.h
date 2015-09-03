/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */
#ifndef _CAST_T_TRAIN_to_int_TM_conversions_H_
#define _CAST_T_TRAIN_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_conversions::CAST_T_TRAIN_to_int::t_train_int */ t_train_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_TRAIN /* TM_conversions::CAST_T_TRAIN_to_int::_L1 */ _L1;
  kcg_real /* TM_conversions::CAST_T_TRAIN_to_int::_L11 */ _L11;
  kcg_real /* TM_conversions::CAST_T_TRAIN_to_int::_L12 */ _L12;
  kcg_bool /* TM_conversions::CAST_T_TRAIN_to_int::_L16 */ _L16;
  kcg_int /* TM_conversions::CAST_T_TRAIN_to_int::_L15 */ _L15;
  kcg_bool /* TM_conversions::CAST_T_TRAIN_to_int::_L14 */ _L14;
  kcg_int /* TM_conversions::CAST_T_TRAIN_to_int::_L13 */ _L13;
  kcg_int /* TM_conversions::CAST_T_TRAIN_to_int::_L17 */ _L17;
} outC_CAST_T_TRAIN_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_T_TRAIN_to_int */
extern void CAST_T_TRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_T_TRAIN_to_int::t_train */T_TRAIN t_train,
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC);

extern void CAST_T_TRAIN_to_int_reset_TM_conversions(
  outC_CAST_T_TRAIN_to_int_TM_conversions *outC);

#endif /* _CAST_T_TRAIN_to_int_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_T_TRAIN_to_int_TM_conversions.h
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

