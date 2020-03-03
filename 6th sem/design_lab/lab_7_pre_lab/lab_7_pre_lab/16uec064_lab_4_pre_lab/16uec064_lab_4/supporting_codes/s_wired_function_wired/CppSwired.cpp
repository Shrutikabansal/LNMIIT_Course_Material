#include "wired.h"
#ifdef _cplusplus
extern "C" {
#endif

#define S_FUNCTION_NAME CppSwired
#define S_FUNCTION_LEVEL 2

// Definition for operating this program
#define NUM_INPUTS		1
#define NUM_OUTPUTS		1
#define NUM_PARAMS		1
#define SAMPLE_TIME		INHERITED_SAMPLE_TIME
#define NUM_DISC_STATES		0
#define NUM_CONT_STATES		0
#define DISC_STATES_IC		[0]
#define CONT_STATES_IC		[0]
// End of Definitio

#include "simstruc.h"
// #include "mat.h"

#define IS_PARAM_DOUBLE(pVal) (mxIsNumeric(pVal) && !mxIsLogical(pVal) &&\
!mxIsEmpty(pVal) && !mxIsSparse(pVal) && !mxIsComplex(pVal) && mxIsDouble(pVal))

/*====================*
 * S-function methods *
 *====================*/
#define MDL_CHECK_PARAMETERS
#if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)
  /* Function: mdlCheckParameters =============================================
    * Abstract:
    *    Validate our parameters to verify they are okay.
    */
   static void mdlCheckParameters(SimStruct *S)
   {
      const mxArray *pVal0 = ssGetSFcnParam(S,0);
     // const mxArray *pVal1 = ssGetSFcnParam(S,1);
     // const mxArray *pVal2 = ssGetSFcnParam(S,2);
//      const mxArray *pVal3 = ssGetSFcnParam(S,3);

      if (!IS_PARAM_DOUBLE(pVal0)){
         ssSetErrorStatus(S, "Parameters to S-function must be double scalars");
        return;
     }
   }
#endif /* MDL_CHECK_PARAMETERS */

#define MDL_INITIALIZE_CONDITIONS
/* Function: mdlInitializeConditions ======================================
 * Abstract:
 *    Initialize both discrete states to one.
 */
static void mdlInitializeConditions(SimStruct *S)
{
}
/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S)
{
    int_T outlen=0;
    int_T inplen1=0;
   // int_T inplen2=0;
   
   // const int_T modetype = (int_T)mxGetScalar(ssGetSFcnParam(S,0));
    const int_T inlen1 = (int_T)mxGetScalar(ssGetSFcnParam(S,0));
   // const int_T inlen2 = (int_T)mxGetScalar(ssGetSFcnParam(S,2));
 //   const int_T noant = (int_T)mxGetScalar(ssGetSFcnParam(S,3));
    
    inplen1 = int(inlen1);//int(nocar * nosch * modetype * noant);
//    inplen2 = int(inlen2);//int(nocar * nosch * modetype * noant);
    outlen = int(inlen1);// + inlen2);//int(nocar * nosch * noant);
    
    if(inplen1 == 0) inplen1 = 1;
  //  if(inplen2 == 0) inplen2 = 1;
    if(outlen == 0) outlen = 1;

    DECL_AND_INIT_DIMSINFO(inputDimsInfo);
    DECL_AND_INIT_DIMSINFO(outputDimsInfo);
    
    ssSetNumSFcnParams(S, NUM_PARAMS);  /* Number of expected parameters */
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        /* Return if number of expected != number of actual parameters */
        // ssGetNumSFcnParams(SimStruct *S) : Get the number of parameters that an S-Function block expects
        // ssGetSFcnParamsCount(SimStruct *S) : Get the number of block dialog parameters 
        //					that an S-Function block has.
        return;
    }

    ssSetNumContStates(S,NUM_CONT_STATES);
    ssSetNumDiscStates(S,NUM_DISC_STATES);

    if (!ssSetNumInputPorts(S,NUM_INPUTS)) return;

  ////////////////// Input Port 1////////////////////////   
    inputDimsInfo.width = inplen1;
    ssSetInputPortDimensionInfo(S,0,&inputDimsInfo);
       
    ssSetInputPortMatrixDimensions(S,0,inplen1,1);
    ssSetInputPortFrameData(S,0,FRAME_YES);
    
    ssSetInputPortDataType(S,0,SS_DOUBLE);
    ssSetInputPortComplexSignal(S,0,COMPLEX_YES);
    ssSetInputPortDirectFeedThrough(S,0,1);
    ssSetInputPortRequiredContiguous(S,0,1); /*direct input signal access*/
    
//   ////////////////// Input Port 1////////////////////////  
//   
//     inputDimsInfo.width = inplen2;
//     ssSetInputPortDimensionInfo(S,1,&inputDimsInfo);
//        
//     ssSetInputPortMatrixDimensions(S,1,inplen2,1);
//     ssSetInputPortFrameData(S,1,FRAME_YES);
//     
//     ssSetInputPortDataType(S,1,SS_DOUBLE);
//     ssSetInputPortComplexSignal(S,1,COMPLEX_YES);
//     ssSetInputPortDirectFeedThrough(S,1,1);
//     ssSetInputPortRequiredContiguous(S,1,1); /*direct input signal access*/
//     
//  
    if (!ssSetNumOutputPorts(S,NUM_OUTPUTS)) return;
    outputDimsInfo.width = outlen;
    ssSetOutputPortDimensionInfo(S, 0, &outputDimsInfo);
    
    ssSetOutputPortMatrixDimensions(S,0,outlen,1);
    ssSetOutputPortFrameData(S,0,FRAME_YES);

    ssSetOutputPortDataType(S,0,SS_DOUBLE);
    ssSetOutputPortComplexSignal(S,0,COMPLEX_YES);

    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S,0);
    ssSetNumIWork(S,0);
    ssSetNumPWork(S,1);
    ssSetNumModes(S,0);
    ssSetNumNonsampledZCs(S,0);

    /* Take care when specifying exception free code - see sfuntmpl_doc.c */
    ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
                     SS_OPTION_USE_TLC_WITH_ACCELERATOR |
		     SS_OPTION_WORKS_WITH_CODE_REUSE));
}

/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S,0,SAMPLE_TIME);   
    ssSetOffsetTime(S,0,0.0);
}

#define MDL_START  /* Change to #undef to remove function */
#if defined(MDL_START) 
  /* Function: mdlStart =======================================================
   * Abstract:
   *    This function is called once at start of model execution. If you
   *    have states that should be initialized once, this is the place
   *    to do it.
   */
  static void mdlStart(SimStruct *S)
  {
  	 	

	ssGetPWork(S)[0] = (void *) new wiredch;//Qammapper;
	wiredch *detector = (wiredch *)ssGetPWork(S)[0];//Qammapper *mapper = (Qammapper *)ssGetPWork(S)[0];
	
  }                                            // pointers vector
#endif /*  MDL_START */


#undef MDL_DERIVATIVES  /* Change to #define to use function */
#if defined(MDL_DERIVATIVES)
  /* Function: mdlDerivatives =================================================
   * Abstract:
   *    In this function, you compute the S-function block's derivatives.
   *    The derivatives are placed in the derivative vector, ssGetdX(S).
   */
  static void mdlDerivatives(SimStruct *S)
  {

  }
#endif /* MDL_DERIVATIVES */



/* Function: mdlOutputs =======================================================
 *
*/
static void mdlOutputs(SimStruct *S, int_T tid)
{
	
  //  const int_T modetype = (int_T)mxGetScalar(ssGetSFcnParam(S,0));
    int_T inplen1 = ssGetInputPortWidth(S,0);
  //  int_T inplen2 = ssGetInputPortWidth(S,1);
    
    creal_T *u1 = (creal_T *)ssGetInputPortRealSignal(S,0);
 //   creal_T *u2 = (creal_T *)ssGetInputPortRealSignal(S,1);
    creal_T  *y = (creal_T *)ssGetOutputPortRealSignal(S,0); // the pointers vector and use
    

    wiredch *detector = (wiredch *)ssGetPWork(S)[0];
    detector->wiredcha(inplen1,u1,y);

}


/* Function: mdlTerminate =====================================================
 * Abstract:
 *    No termination needed, but we are required to have this routine.
 */
static void mdlTerminate(SimStruct *S)
{
	wiredch *detector = (wiredch *)ssGetPWork(S)[0];
	delete detector;
}



#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif

#ifdef _cpluscplus
}
#endif
