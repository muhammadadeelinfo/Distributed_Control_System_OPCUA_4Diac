/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CRANE_DECIDER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-03-16/adeel - null - 
 *************************************************************************/

#include "CRANE_DECIDER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CRANE_DECIDER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_CRANE_DECIDER, g_nStringIdCRANE_DECIDER)

const CStringDictionary::TStringId FORTE_CRANE_DECIDER::scm_anDataInputNames[] = {g_nStringIdT_B_IN, g_nStringIdCTM_CD, g_nStringIdFMe_CD, g_nStringIdFMa_CD};

const CStringDictionary::TStringId FORTE_CRANE_DECIDER::scm_anDataInputTypeIds[] = {g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_CRANE_DECIDER::scm_anDataOutputNames[] = {g_nStringIdCTM_1, g_nStringIdFMe_1, g_nStringIdFMa_1, g_nStringIdCTM_2, g_nStringIdFMe_2, g_nStringIdFMa_2};

const CStringDictionary::TStringId FORTE_CRANE_DECIDER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_CRANE_DECIDER::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_CRANE_DECIDER::scm_anEIWith[] = {0, 1, 2, 3, 255};
const CStringDictionary::TStringId FORTE_CRANE_DECIDER::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_CRANE_DECIDER::scm_anEOWith[] = {0, 3, 1, 4, 2, 5, 255};
const TForteInt16 FORTE_CRANE_DECIDER::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_CRANE_DECIDER::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_CRANE_DECIDER::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  4,  scm_anDataInputNames, scm_anDataInputTypeIds,
  6,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_CRANE_DECIDER::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventREQID:

    							if(T_B_IN()==1)
        	    	    		{
    								CTM_1()=CTM_CD();
									FMe_1()=FMe_CD();
        	    	    		}
    							if(T_B_IN()==2)
								{
    								CTM_2()=CTM_CD();
									FMe_2()=FMe_CD();
								}
    							FMa_1()=FMa_CD();
								FMa_2()=FMa_CD();

      sendOutputEvent(scm_nEventCNFID);

      break;
  }
}



