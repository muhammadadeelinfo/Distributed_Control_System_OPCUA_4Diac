/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: MOTOR_F_B
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-05/adeel - null - null
 *************************************************************************/

#include "MOTOR_F_B.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "MOTOR_F_B_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_MOTOR_F_B, g_nStringIdMOTOR_F_B)

const CStringDictionary::TStringId FORTE_MOTOR_F_B::scm_anDataInputNames[] = {g_nStringIdM_F, g_nStringIdM_B};

const CStringDictionary::TStringId FORTE_MOTOR_F_B::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_MOTOR_F_B::scm_anDataOutputNames[] = {g_nStringIdF_B};

const CStringDictionary::TStringId FORTE_MOTOR_F_B::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_MOTOR_F_B::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_MOTOR_F_B::scm_anEIWith[] = {0, 1, 255};
const CStringDictionary::TStringId FORTE_MOTOR_F_B::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_MOTOR_F_B::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_MOTOR_F_B::scm_anEOWithIndexes[] = {0, -1, -1, -1};
const CStringDictionary::TStringId FORTE_MOTOR_F_B::scm_anEventOutputNames[] = {g_nStringIdCNF, g_nStringIdF, g_nStringIdB};

const SFBInterfaceSpec FORTE_MOTOR_F_B::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  3,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_MOTOR_F_B::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventREQID:
    	
    	
        	if(M_F()==1)
        	{
        			F_B()=M_F();
        			
        			sendOutputEvent(scm_nEventCNFID);
        			sendOutputEvent(scm_nEventFID);
        			break;
        	}
        	
        	if(M_B()==1)
        	{
        		F_B()=M_B();
        		
        		sendOutputEvent(scm_nEventCNFID);
        		sendOutputEvent(scm_nEventBID);
        		break;
        	}
        	
        	else
        	{
        		F_B()=0;
        		sendOutputEvent(scm_nEventCNFID);
        		sendOutputEvent(scm_nEventFID);
        		sendOutputEvent(scm_nEventBID);
        		break;
        	}    		
    	

  }
}



