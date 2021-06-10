/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FinalProjectP2.c
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

#include "FinalProjectP2.h"
#include "FinalProjectP2_private.h"

/* Block states (default storage) */
DW_FinalProjectP2_T FinalProjectP2_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FinalProjectP2_T FinalProjectP2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FinalProjectP2_T FinalProjectP2_Y;

/* Real-time model */
static RT_MODEL_FinalProjectP2_T FinalProjectP2_M_;
RT_MODEL_FinalProjectP2_T *const FinalProjectP2_M = &FinalProjectP2_M_;

/* Model step function */
void FinalProjectP2_step(void)
{
  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  CombinatorialLogic: '<S2>/Logic'
   *  Inport: '<Root>/In1'
   *  Memory: '<S2>/Memory'
   *  RelationalOperator: '<S1>/Relational Operator'
   *  RelationalOperator: '<S1>/Relational Operator1'
   */
  if(FinalProjectP2_ConstB.Sum <= FinalProjectP2_U.In1){
    FinalProjectP2_Y.Out1 = 1;
  }else if(FinalProjectP2_ConstB.Sum1 >= FinalProjectP2_U.In1){
    FinalProjectP2_Y.Out1 = 0;
  }

  
  /* Outport: '<Root>/Out1' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   */
	//FinalProjectP2_Y.Out1 = 69;
}

/* Model initialize function */
void FinalProjectP2_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void FinalProjectP2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
