/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FinalProjectP1.h
 *
 * Code generated for Simulink model 'FinalProjectP1'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu May  6 14:05:50 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FinalProjectP1_h_
#define RTW_HEADER_FinalProjectP1_h_
#ifndef FinalProjectP1_COMMON_INCLUDES_
#define FinalProjectP1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* FinalProjectP1_COMMON_INCLUDES_ */

#include "FinalProjectP1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  int16_T coolant_temp;                /* '<Root>/coolant_temp' */
} ExtU_FinalProjectP1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int16_T Temperature;                 /* '<Root>/Temperature' */
  boolean_T Error;                     /* '<Root>/Error' */
} ExtY_FinalProjectP1_T;

/* Real-time Model Data Structure */
struct tag_RTM_FinalProjectP1_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_FinalProjectP1_T FinalProjectP1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FinalProjectP1_T FinalProjectP1_Y;

/* Model entry point functions */
extern void FinalProjectP1_initialize(void);
extern void FinalProjectP1_step(void);
extern void FinalProjectP1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FinalProjectP1_T *const FinalProjectP1_M;

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
 * '<Root>' : 'FinalProjectP1'
 * '<S1>'   : 'FinalProjectP1/OutOfRange'
 * '<S2>'   : 'FinalProjectP1/ScaleAndOffset'
 */
#endif                                 /* RTW_HEADER_FinalProjectP1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
