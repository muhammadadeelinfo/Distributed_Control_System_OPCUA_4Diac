/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FME_FMA_DECIDER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-07/adeel - null - null
 *************************************************************************/

#include "FME_FMA_DECIDER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FME_FMA_DECIDER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_FME_FMA_DECIDER, g_nStringIdFME_FMA_DECIDER)

const CStringDictionary::TStringId FORTE_FME_FMA_DECIDER::scm_anDataInputNames[] = {g_nStringIdX_FME, g_nStringIdY_FME, g_nStringIdX_FMA, g_nStringIdY_FMA};

const CStringDictionary::TStringId FORTE_FME_FMA_DECIDER::scm_anDataInputTypeIds[] = {g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_FME_FMA_DECIDER::scm_anDataOutputNames[] = {g_nStringIdX_FME_FMA, g_nStringIdY_FME_FMA};

const CStringDictionary::TStringId FORTE_FME_FMA_DECIDER::scm_anDataOutputTypeIds[] = {g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_FME_FMA_DECIDER::scm_anEIWithIndexes[] = {0, 3};
const TDataIOID FORTE_FME_FMA_DECIDER::scm_anEIWith[] = {0, 1, 255, 2, 3, 255};
const CStringDictionary::TStringId FORTE_FME_FMA_DECIDER::scm_anEventInputNames[] = {g_nStringIdFME_TRIGGER, g_nStringIdFMA_TRIGGER};

const TDataIOID FORTE_FME_FMA_DECIDER::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_FME_FMA_DECIDER::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_FME_FMA_DECIDER::scm_anEventOutputNames[] = {g_nStringIdTRIGGER};

const SFBInterfaceSpec FORTE_FME_FMA_DECIDER::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  4,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_FME_FMA_DECIDER::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventFME_TRIGGERID:

    	X_FME_FMA()=X_FME();
		Y_FME_FMA()=Y_FME();
    	
      sendOutputEvent(scm_nEventTRIGGERID);

      break;
    case scm_nEventFMA_TRIGGERID:

    	X_FME_FMA()=X_FMA();
		Y_FME_FMA()=Y_FMA();    	
    	
      sendOutputEvent(scm_nEventTRIGGERID);

      break;
  }
}



