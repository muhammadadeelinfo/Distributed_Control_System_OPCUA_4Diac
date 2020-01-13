/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: EMERGENCY_CONTROLLER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-04/adeel - null - null
 *************************************************************************/

#include "EMERGENCY_CONTROLLER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "EMERGENCY_CONTROLLER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_EMERGENCY_CONTROLLER, g_nStringIdEMERGENCY_CONTROLLER)

const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anDataInputNames[] = {g_nStringIdCTM_N_IN, g_nStringIdFME_N_IN, g_nStringIdFMA_N_IN, g_nStringIdE_STOP};

const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anDataOutputNames[] = {g_nStringIdCTM_N_OUT, g_nStringIdFME_N_OUT, g_nStringIdFMA_N_OUT};

const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_EMERGENCY_CONTROLLER::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_EMERGENCY_CONTROLLER::scm_anEIWith[] = {0, 1, 2, 3, 255};
const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_EMERGENCY_CONTROLLER::scm_anEOWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_EMERGENCY_CONTROLLER::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_EMERGENCY_CONTROLLER::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  4,  scm_anDataInputNames, scm_anDataInputTypeIds,
  3,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_EMERGENCY_CONTROLLER::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventREQID:

    	if(E_STOP()==1)
    	{
    			CTM_N_OUT()=CTM_N_IN();
				FME_N_OUT()=FME_N_IN();
				FMA_N_OUT()=FMA_N_IN();
    	}

      sendOutputEvent(scm_nEventCNFID);

      break;
  }
}



