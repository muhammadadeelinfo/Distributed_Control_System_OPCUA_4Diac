/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SUBSCRIBER_E_CONTROLLER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-14/adeel - null - null
 *************************************************************************/

#include "SUBSCRIBER_E_CONTROLLER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SUBSCRIBER_E_CONTROLLER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_SUBSCRIBER_E_CONTROLLER, g_nStringIdSUBSCRIBER_E_CONTROLLER)

const CStringDictionary::TStringId FORTE_SUBSCRIBER_E_CONTROLLER::scm_anDataInputNames[] = {g_nStringIdE_STOP_I, g_nStringIdTEXT_BOX_I, g_nStringIdN_CTM_I, g_nStringIdN_FME_I, g_nStringIdN_FMA_I, g_nStringIdCHOOSE_CRANE_I, g_nStringIdACTIVATE_BRIDGE_I, g_nStringIdACTIVATE_TROLLEY_I, g_nStringIdHOOK_U_I, g_nStringIdHOOK_D_I, g_nStringIdX_CTM_I, g_nStringIdY_CTM_I, g_nStringIdX_FME_I, g_nStringIdY_FME_I, g_nStringIdX_FMA_I, g_nStringIdY_FMA_I};

const CStringDictionary::TStringId FORTE_SUBSCRIBER_E_CONTROLLER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_SUBSCRIBER_E_CONTROLLER::scm_anDataOutputNames[] = {g_nStringIdE_STOP_O, g_nStringIdTEXT_BOX_O, g_nStringIdN_CTM_O, g_nStringIdN_FME_O, g_nStringIdN_FMA_O, g_nStringIdCHOOSE_CRANE_O, g_nStringIdACTIVATE_BRIDGE_O, g_nStringIdACTIVATE_TROLLEY_O, g_nStringIdHOOK_U_O, g_nStringIdHOOK_D_O, g_nStringIdX_CTM_O, g_nStringIdY_CTM_O, g_nStringIdX_FME_O, g_nStringIdY_FME_O, g_nStringIdX_FMA_O, g_nStringIdY_FMA_O};

const CStringDictionary::TStringId FORTE_SUBSCRIBER_E_CONTROLLER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_SUBSCRIBER_E_CONTROLLER::scm_anEIWithIndexes[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
const TDataIOID FORTE_SUBSCRIBER_E_CONTROLLER::scm_anEIWith[] = {0, 255, 1, 255, 2, 255, 3, 255, 4, 255, 5, 255, 6, 255, 7, 255, 8, 255, 9, 255, 10, 255, 11, 255, 12, 255, 13, 255, 14, 255, 15, 255};
const CStringDictionary::TStringId FORTE_SUBSCRIBER_E_CONTROLLER::scm_anEventInputNames[] = {g_nStringIdE_STOP_E, g_nStringIdTEXT_BOX_E, g_nStringIdN_CTM_E, g_nStringIdN_FME_E, g_nStringIdN_FMA_E, g_nStringIdCHOOSE_CRANE_E, g_nStringIdACTIVATE_BRIDGE_E, g_nStringIdACTIVATE_TROLLEY_E, g_nStringIdHOOK_U_E, g_nStringIdHOOK_D_E, g_nStringIdX_CTM_E, g_nStringIdY_CTM_E, g_nStringIdX_FME_E, g_nStringIdY_FME_E, g_nStringIdX_FMA_E, g_nStringIdY_FMA_E};

const TDataIOID FORTE_SUBSCRIBER_E_CONTROLLER::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 255, 10, 11, 12, 13, 14, 15, 255};
const TForteInt16 FORTE_SUBSCRIBER_E_CONTROLLER::scm_anEOWithIndexes[] = {0, 11, -1};
const CStringDictionary::TStringId FORTE_SUBSCRIBER_E_CONTROLLER::scm_anEventOutputNames[] = {g_nStringIdCONTROL_E, g_nStringIdLOC_E};

const SFBInterfaceSpec FORTE_SUBSCRIBER_E_CONTROLLER::scm_stFBInterfaceSpec = {
  16,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  16,  scm_anDataInputNames, scm_anDataInputTypeIds,
  16,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

bool E_STOP=0;
bool TEXT_BOX=0;
bool N_CTM=0;
bool N_FME=0;
bool N_FMA=0;
bool CHOOSE_CRANE=0;
bool ACTIVATE_BRIDGE=0;
bool ACTIVATE_TROLLEY=0;
bool HOOK_U=0;
bool HOOK_D=0;
bool X_CTM=0;
bool Y_CTM=0;
bool X_FME=0;
bool Y_FME=0;
bool X_FMA=0;
bool Y_FMA=0;
void FORTE_SUBSCRIBER_E_CONTROLLER::executeEvent(int pa_nEIID){
  switch(pa_nEIID){

    case scm_nEventE_STOP_EID:
    	E_STOP_O()=E_STOP_I();
    	E_STOP=1;
    	break;
    case scm_nEventTEXT_BOX_EID:
    	TEXT_BOX_O()=TEXT_BOX_I();
    	TEXT_BOX=1;
    	break;
    case scm_nEventN_CTM_EID:
    	N_CTM_O()=N_CTM_I();
    	N_CTM=1;
    	break;
    case scm_nEventN_FME_EID:
    	N_FME_O()=N_FME_I();
    	N_FME=1;
    	break;
    case scm_nEventN_FMA_EID:
    	N_FMA_O()=N_FMA_I();
    	N_FMA=1;
    	break;
    case scm_nEventCHOOSE_CRANE_EID:
    	CHOOSE_CRANE_O()=CHOOSE_CRANE_I();
    	CHOOSE_CRANE=1;
    	break;
    case scm_nEventACTIVATE_BRIDGE_EID:
    	ACTIVATE_BRIDGE_O()=ACTIVATE_BRIDGE_I();
    	ACTIVATE_BRIDGE=1;
    	break;
    case scm_nEventACTIVATE_TROLLEY_EID:
    	ACTIVATE_TROLLEY_O()=ACTIVATE_TROLLEY_I();
    	ACTIVATE_TROLLEY=1;
    	break;
    case scm_nEventHOOK_U_EID:
    	HOOK_U_O()=HOOK_U_I();
    	HOOK_U=1;
    	break;
    case scm_nEventHOOK_D_EID:
    	HOOK_D_O()=HOOK_D_I();
    	HOOK_D=1;
    	sendOutputEvent(scm_nEventCONTROL_EID);
    	break;



    case scm_nEventX_CTM_EID:
    	X_CTM_O()=X_CTM_I();
    	X_CTM=1;
    	break;
    case scm_nEventY_CTM_EID:
    	Y_CTM_O()=Y_CTM_I();
    	Y_CTM=1;
    	break;
    case scm_nEventX_FME_EID:
    	X_FME_O()=X_FME_I();
    	X_FME=1;
    	break;
    case scm_nEventY_FME_EID:
    	Y_FME_O()=Y_FME_I();
    	Y_FME=1;
    	break;
    case scm_nEventX_FMA_EID:
    	X_FMA_O()=X_FMA_I();
    	X_FMA=1;
    	break;
    case scm_nEventY_FMA_EID:
    	Y_FMA_O()=Y_FMA_I();
    	Y_FMA=1;
    	sendOutputEvent(scm_nEventLOC_EID);
    	break;
  }
}





