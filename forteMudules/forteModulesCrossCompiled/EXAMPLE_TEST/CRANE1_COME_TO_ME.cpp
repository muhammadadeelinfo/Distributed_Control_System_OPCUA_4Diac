/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CRANE1_COME_TO_ME
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-01-23/iotdeveloperpk - null - 
 *************************************************************************/

#include "CRANE1_COME_TO_ME.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CRANE1_COME_TO_ME_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_CRANE1_COME_TO_ME, g_nStringIdCRANE1_COME_TO_ME)

const CStringDictionary::TStringId FORTE_CRANE1_COME_TO_ME::scm_anDataInputNames[] = {g_nStringIdE_STOP, g_nStringIdN_STOP, g_nStringIdX_B_LOC, g_nStringIdY_T_LOC, g_nStringIdTEXT_BOX, g_nStringIdCHOOSE_CRANE, g_nStringIdACTIVATE_BRIDGE, g_nStringIdACTIVATE_TROLLEY, g_nStringIdHOOK_U_IN, g_nStringIdHOOK_D_IN, g_nStringIdBRIDGE_P, g_nStringIdTROLLEY_P, g_nStringIdHOOK_P, g_nStringIdCRANE_DIS_S};

const CStringDictionary::TStringId FORTE_CRANE1_COME_TO_ME::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_CRANE1_COME_TO_ME::scm_anDataOutputNames[] = {g_nStringIdA_D_MPS, g_nStringIdBRIDGE_F, g_nStringIdBRIDGE_B, g_nStringIdTROLLEY_F, g_nStringIdTROLLEY_B, g_nStringIdHOOK_U, g_nStringIdHOOK_D};

const CStringDictionary::TStringId FORTE_CRANE1_COME_TO_ME::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_CRANE1_COME_TO_ME::scm_anEIWithIndexes[] = {0, 11};
const TDataIOID FORTE_CRANE1_COME_TO_ME::scm_anEIWith[] = {0, 1, 2, 3, 4, 6, 7, 8, 5, 9, 255, 11, 12, 13, 10, 255};
const CStringDictionary::TStringId FORTE_CRANE1_COME_TO_ME::scm_anEventInputNames[] = {g_nStringIdREQ, g_nStringIdMPS_E};

const TDataIOID FORTE_CRANE1_COME_TO_ME::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 6, 255};
const TForteInt16 FORTE_CRANE1_COME_TO_ME::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_CRANE1_COME_TO_ME::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_CRANE1_COME_TO_ME::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  14,  scm_anDataInputNames, scm_anDataInputTypeIds,
  7,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_CRANE1_COME_TO_ME::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventREQID:
#error add code for REQ event!
/*
  do not forget to send output event, calling e.g.
      sendOutputEvent(scm_nEventCNFID);
*/
      break;
    case scm_nEventMPS_EID:
#error add code for MPS_E event!
/*
  do not forget to send output event, calling e.g.
      sendOutputEvent(scm_nEventCNFID);
*/
      break;
  }
}



