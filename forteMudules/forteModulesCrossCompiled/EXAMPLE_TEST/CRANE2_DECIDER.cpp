/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CRANE2_DECIDER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-03-16/adeel - null - null
 *************************************************************************/

#include "CRANE2_DECIDER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CRANE2_DECIDER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_CRANE2_DECIDER, g_nStringIdCRANE2_DECIDER)

const CStringDictionary::TStringId FORTE_CRANE2_DECIDER::scm_anDataInputNames[] = {g_nStringIdCrane_info, g_nStringIdTD_CTM, g_nStringIdFD_CTM, g_nStringIdTD_FMe, g_nStringIdFD_FMe, g_nStringIdTD_FMa, g_nStringIdFD_FMa};

const CStringDictionary::TStringId FORTE_CRANE2_DECIDER::scm_anDataInputTypeIds[] = {g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_CRANE2_DECIDER::scm_anDataOutputNames[] = {g_nStringIdTD_CTM_O, g_nStringIdFD_CTM_O, g_nStringIdTD_FMe_O, g_nStringIdFD_FMe_O, g_nStringIdTD_FMa_O, g_nStringIdFD_FMa_O};

const CStringDictionary::TStringId FORTE_CRANE2_DECIDER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_CRANE2_DECIDER::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_CRANE2_DECIDER::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 255};
const CStringDictionary::TStringId FORTE_CRANE2_DECIDER::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_CRANE2_DECIDER::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 255};
const TForteInt16 FORTE_CRANE2_DECIDER::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_CRANE2_DECIDER::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_CRANE2_DECIDER::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  7,  scm_anDataInputNames, scm_anDataInputTypeIds,
  6,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_CRANE2_DECIDER::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventREQID:
    	if(Crane_info()==2)
    	    		{
    	    			TD_CTM_O()=TD_CTM();
    	    			FD_CTM_O()=FD_CTM();
    	    			TD_FMe_O()=TD_FMe();
    	    			FD_FMe_O()=FD_FMe();

    	    		}
    					TD_FMa_O()=TD_FMa();
    	    	    	FD_FMa_O()=FD_FMa();
      sendOutputEvent(scm_nEventCNFID);

      break;
  }
}



