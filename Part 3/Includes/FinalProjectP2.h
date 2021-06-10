/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FinalProjectP2.h
 *
 * Code generated for Simulink model 'FinalProjectP2'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Jun  9 18:38:35 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FinalProjectP2_h_
#define RTW_HEADER_FinalProjectP2_h_
#ifndef FinalProjectP2_COMMON_INCLUDES_
#define FinalProjectP2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* FinalProjectP2_COMMON_INCLUDES_ */

#include "FinalProjectP2_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  boolean_T Memory_PreviousInput;      /* '<S2>/Memory' */
} DW_FinalProjectP2_T;

/* Invariant block signals (default storage) */
typedef struct {
  const int8_T Sum;                    /* '<S1>/Sum' */
  const int8_T Sum1;                   /* '<S1>/Sum1' */
} ConstB_FinalProjectP2_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S2>/Logic'
   */
  boolean_T Logic_table[16];
} ConstP_FinalProjectP2_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int8_T In1;                          /* '<Root>/In1' */
} ExtU_FinalProjectP2_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int8_T Out1;                         /* '<Root>/Out1' */
} ExtY_FinalProjectP2_T;

/* Real-time Model Data Structure */
struct tag_RTM_FinalProjectP2_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_FinalProjectP2_T FinalProjectP2_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_FinalProjectP2_T FinalProjectP2_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FinalProjectP2_T FinalProjectP2_Y;
extern const ConstB_FinalProjectP2_T FinalProjectP2_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_FinalProjectP2_T FinalProjectP2_ConstP;

/* Model entry point functions */
extern void FinalProjectP2_initialize(void);
extern void FinalProjectP2_step(void);
extern void FinalProjectP2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FinalProjectP2_T *const FinalProjectP2_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FinalProjectP2'
 * '<S1>'   : 'FinalProjectP2/Subsystem1'
 * '<S2>'   : 'FinalProjectP2/Subsystem1/S-R Flip-Flop'
 */
#endif                                 /* RTW_HEADER_FinalProjectP2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
