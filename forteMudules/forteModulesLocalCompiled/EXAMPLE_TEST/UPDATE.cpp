/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: UPDATE
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-02-10/iotdeveloperpk - null - 
 *************************************************************************/

#include "UPDATE.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "UPDATE_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_UPDATE, g_nStringIdUPDATE)

const CStringDictionary::TStringId FORTE_UPDATE::scm_anDataOutputNames[] = {g_nStringIdRD_1};

const CStringDictionary::TStringId FORTE_UPDATE::scm_anDataOutputTypeIds[] = {g_nStringIdINT};

const TForteInt16 FORTE_UPDATE::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_UPDATE::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_UPDATE::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_UPDATE::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_UPDATE::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_UPDATE::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  0,  0, 0, 
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_UPDATE::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventREQID:

    	RD_1()=RD_1()+1;
    	
      sendOutputEvent(scm_nEventCNFID);

      break;
  }
}



