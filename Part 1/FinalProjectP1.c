/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FinalProjectP1.c
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

#include "FinalProjectP1.h"
#include "FinalProjectP1_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_FinalProjectP1_T FinalProjectP1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FinalProjectP1_T FinalProjectP1_Y;

/* Real-time model */
static RT_MODEL_FinalProjectP1_T FinalProjectP1_M_;
RT_MODEL_FinalProjectP1_T *const FinalProjectP1_M = &FinalProjectP1_M_;

/* Model step function */
void FinalProjectP1_step(void)
{
  /* RelationalOperator: '<S1>/Relational Operator' incorporates:
   *  Constant: '<Root>/Offset'
   *  Inport: '<Root>/coolant_temp'
   *  Sum: '<S2>/Subtract'
   */
  FinalProjectP1_Y.Error = ((int16_T)(FinalProjectP1_U.coolant_temp - 4) > 126);

  /* Switch: '<S1>/Switch1' */
  if (FinalProjectP1_Y.Error) {
    /* Outport: '<Root>/Temperature' incorporates:
     *  Constant: '<S1>/DefaultTemp'
     */
    FinalProjectP1_Y.Temperature = 10;
  } else {
    /* Outport: '<Root>/Temperature' incorporates:
     *  Constant: '<Root>/Offset'
     *  Inport: '<Root>/coolant_temp'
     *  Sum: '<S2>/Subtract'
     */
    FinalProjectP1_Y.Temperature = (int16_T)(FinalProjectP1_U.coolant_temp - 4);
  }

  /* End of Switch: '<S1>/Switch1' */
}

/* Model initialize function */
void FinalProjectP1_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void FinalProjectP1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
