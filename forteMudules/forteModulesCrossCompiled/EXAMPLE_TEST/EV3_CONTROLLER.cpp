/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: EV3_CONTROLLER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "EV3_CONTROLLER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "EV3_CONTROLLER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_EV3_CONTROLLER, g_nStringIdEV3_CONTROLLER)

const CStringDictionary::TStringId FORTE_EV3_CONTROLLER::scm_anDataInputNames[] = {g_nStringIdE_STOP, g_nStringIdCTM_ACTIVATE_MP, g_nStringIdCTM_BRIDGE_F_I, g_nStringIdCTM_BRIDGE_B_I, g_nStringIdCTM_TROLLEY_F_I, g_nStringIdCTM_TROLLEY_B_I, g_nStringIdCTM_HOOK_U_I, g_nStringIdCTM_HOOK_D_I, g_nStringIdFME_ACTIVATE_MP, g_nStringIdFME_BRIDGE_F_I, g_nStringIdFME_BRIDGE_B_I, g_nStringIdFME_TROLLEY_F_I, g_nStringIdFME_TROLLEY_B_I, g_nStringIdFME_HOOK_U_I, g_nStringIdFME_HOOK_D_I, g_nStringIdFMA_ACTIVATE_MP, g_nStringIdFMA_BRIDGE_F_I, g_nStringIdFMA_BRIDGE_B_I, g_nStringIdFMA_TROLLEY_F_I, g_nStringIdFMA_TROLLEY_B_I, g_nStringIdFMA_HOOK_U_I, g_nStringIdFMA_HOOK_D_I};

const CStringDictionary::TStringId FORTE_EV3_CONTROLLER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_EV3_CONTROLLER::scm_anDataOutputNames[] = {g_nStringIdM_P, g_nStringIdBRIDGE_F, g_nStringIdBRIDGE_B, g_nStringIdTROLLEY_F, g_nStringIdTROLLEY_B, g_nStringIdHOOK_U, g_nStringIdHOOK_D};

const CStringDictionary::TStringId FORTE_EV3_CONTROLLER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_EV3_CONTROLLER::scm_anEIWithIndexes[] = {-1, 0};
const TDataIOID FORTE_EV3_CONTROLLER::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 7, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 255};
const CStringDictionary::TStringId FORTE_EV3_CONTROLLER::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_EV3_CONTROLLER::scm_anEOWith[] = {1, 3, 5, 0, 2, 4, 6, 255};
const TForteInt16 FORTE_EV3_CONTROLLER::scm_anEOWithIndexes[] = {-1, 0, -1};
const CStringDictionary::TStringId FORTE_EV3_CONTROLLER::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_EV3_CONTROLLER::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  22,  scm_anDataInputNames, scm_anDataInputTypeIds,
  7,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_EV3_CONTROLLER::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
  case scm_nEventINITID:

  	
  	
    sendOutputEvent(scm_nEventINITOID);

    break;
//-----------------------------------------------------------------------------
//REQ EVENT
    
    
  case scm_nEventREQID:

	  
  	if(CTM_ACTIVATE_MP()==1 || FME_ACTIVATE_MP()==1 || FMA_ACTIVATE_MP()==1)
  	{
  		M_P()=1;
  	}else{M_P()=0;}
  	
  	
  	
  	if(CTM_BRIDGE_F_I()==1 || FME_BRIDGE_F_I()==1 || FMA_BRIDGE_F_I()==1)
  	{
  		BRIDGE_F()=1;
  	}else{BRIDGE_F()=0;}
  	if(CTM_BRIDGE_B_I()==1 || FME_BRIDGE_B_I()==1 || FMA_BRIDGE_B_I()==1)
  	{
  		BRIDGE_B()=1;
  	}else{BRIDGE_B()=0;}
  	
  	

  	if(CTM_TROLLEY_F_I()==1 || FME_TROLLEY_F_I()==1 || FMA_TROLLEY_F_I()==1)
  	{
  		TROLLEY_F()=1;
  	}else{TROLLEY_F()=0;}
  	if(CTM_TROLLEY_B_I()==1 || FME_TROLLEY_B_I()==1 || FMA_TROLLEY_B_I()==1)
  	{
  		TROLLEY_B()=1;
  	}else{TROLLEY_B()=0;}
  	
  	
  	
  	if(CTM_HOOK_U_I()==1 || FME_HOOK_U_I()==1 || FMA_HOOK_U_I()==1)
  	{
  		HOOK_U()=1;
  	}else{HOOK_U()=0;}
  	if(CTM_HOOK_D_I()==1 || FME_HOOK_D_I()==1 || FMA_HOOK_D_I()==1)
  	{
  		HOOK_D()=1;
  	}else{HOOK_D()=0;}
  	
  	
  	
  	
    sendOutputEvent(scm_nEventCNFID);

    break;
//----------------------------------------------------------------------------
  }
}
