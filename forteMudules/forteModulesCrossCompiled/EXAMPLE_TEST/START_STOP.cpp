/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: START_STOP
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-12/adeel - null - null
 *************************************************************************/

#include "START_STOP.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "START_STOP_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_START_STOP, g_nStringIdSTART_STOP)

const CStringDictionary::TStringId FORTE_START_STOP::scm_anDataInputNames[] = {g_nStringIdCTM, g_nStringIdFME, g_nStringIdFMA, g_nStringIdBUTTON_STOP};

const CStringDictionary::TStringId FORTE_START_STOP::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_START_STOP::scm_anDataOutputNames[] = {g_nStringIdCTM_O, g_nStringIdFME_O, g_nStringIdFMA_O};

const CStringDictionary::TStringId FORTE_START_STOP::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_START_STOP::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_START_STOP::scm_anEIWith[] = {0, 1, 2, 3, 255};
const CStringDictionary::TStringId FORTE_START_STOP::scm_anEventInputNames[] = {g_nStringIdN_STOP_E};

const TDataIOID FORTE_START_STOP::scm_anEOWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_START_STOP::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_START_STOP::scm_anEventOutputNames[] = {g_nStringIdOUT_E};

const SFBInterfaceSpec FORTE_START_STOP::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  4,  scm_anDataInputNames, scm_anDataInputTypeIds,
  3,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_START_STOP::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventN_STOP_EID:

				if(BUTTON_STOP()==0)
				{
				if(CTM()==1)
				{
					CTM_O()=1;FME_O()=0;FMA_O()=0;
					sendOutputEvent(scm_nEventOUT_EID);
					break;
				}else{CTM_O()=0;}
				
				if(FME()==1)
				{
					CTM_O()=0;FME_O()=1;FMA_O()=0;
					sendOutputEvent(scm_nEventOUT_EID);
					break;
				}else{FME()=0;}
				
				if(FMA()==1)
				{
					CTM_O()=0;FME_O()=0;FMA_O()=1;
					sendOutputEvent(scm_nEventOUT_EID);
					break;
				}else{FMA_O()=0;}
				if(CTM()==0 && FME()==0 && FMA()==0)
				{
					CTM_O()=0;FME_O()=0;FMA_O()=0;
					sendOutputEvent(scm_nEventOUT_EID);
					break;
				}						
				}else{CTM_O()=0;FME_O()=0;FMA_O()=0;}

			
				
				

      
		sendOutputEvent(scm_nEventOUT_EID);
      	break;
      
  }
}



