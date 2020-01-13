/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CRANE_SELECTOR
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-04/adeel - null - null
 *************************************************************************/

#include "CRANE_SELECTOR.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CRANE_SELECTOR_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_CRANE_SELECTOR, g_nStringIdCRANE_SELECTOR)

const CStringDictionary::TStringId FORTE_CRANE_SELECTOR::scm_anDataInputNames[] = {g_nStringIdchoose_crane, g_nStringIdText_box, g_nStringIdCTM_X_I, g_nStringIdCTM_Y_I, g_nStringIdFME_X_I, g_nStringIdFME_Y_I, g_nStringIdFMA_X_I, g_nStringIdFMA_Y_I};

const CStringDictionary::TStringId FORTE_CRANE_SELECTOR::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_CRANE_SELECTOR::scm_anDataOutputNames[] = {g_nStringIdCTM_X_1, g_nStringIdCTM_Y_1, g_nStringIdFME_X_1, g_nStringIdFME_Y_1, g_nStringIdFMA_X_1, g_nStringIdFMA_Y_1, g_nStringIdCTM_X_2, g_nStringIdCTM_Y_2, g_nStringIdFME_X_2, g_nStringIdFME_Y_2, g_nStringIdFMA_X_2, g_nStringIdFMA_Y_2};

const CStringDictionary::TStringId FORTE_CRANE_SELECTOR::scm_anDataOutputTypeIds[] = {g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_CRANE_SELECTOR::scm_anEIWithIndexes[] = {0, 3, 6, 9};
const TDataIOID FORTE_CRANE_SELECTOR::scm_anEIWith[] = {0, 1, 255, 2, 3, 255, 4, 5, 255, 6, 7, 255};
const CStringDictionary::TStringId FORTE_CRANE_SELECTOR::scm_anEventInputNames[] = {g_nStringIdREQ, g_nStringIdCTM, g_nStringIdFME, g_nStringIdFMA};

const TDataIOID FORTE_CRANE_SELECTOR::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 255, 6, 7, 8, 9, 10, 11, 255};
const TForteInt16 FORTE_CRANE_SELECTOR::scm_anEOWithIndexes[] = {-1, 0, 7, -1};
const CStringDictionary::TStringId FORTE_CRANE_SELECTOR::scm_anEventOutputNames[] = {g_nStringIdCNF, g_nStringIdC1, g_nStringIdC2};

const SFBInterfaceSpec FORTE_CRANE_SELECTOR::scm_stFBInterfaceSpec = {
  4,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  3,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  8,  scm_anDataInputNames, scm_anDataInputTypeIds,
  12,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

int crane_selector_cc=0; //crane selector crane choser
void FORTE_CRANE_SELECTOR::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
  //-----------------------------------------------------------------
      case scm_nEventREQID:
      	if(choose_crane()==1)
      	{
      		crane_selector_cc=Text_box();
      	}
      	
      	
        sendOutputEvent(scm_nEventCNFID);

        break;
  //-----------------------------------------------------------------
      case scm_nEventCTMID:
      		if(crane_selector_cc==1)
      		{
      		
      			CTM_X_1()=CTM_X_I();
      			CTM_Y_1()=CTM_Y_I();

      			sendOutputEvent(scm_nEventC1ID);
      		}
      		if(crane_selector_cc==2)
      		{
      		
      			CTM_X_2()=CTM_X_I();
      			CTM_Y_2()=CTM_Y_I();
    			
      			sendOutputEvent(scm_nEventC2ID);
      		}
      	


        break;
  //-----------------------------------------------------------------
      case scm_nEventFMEID:
  		if(crane_selector_cc==1)
  		{
  		

  			FME_X_1()=FME_X_I();
  			FME_Y_1()=FME_Y_I();
			
  			sendOutputEvent(scm_nEventC1ID);
  		}
  		if(crane_selector_cc==2)
  		{
  		

  			FME_X_2()=FME_X_I();
  			FME_Y_2()=FME_Y_I();
			
  			sendOutputEvent(scm_nEventC2ID);
  		}
      	
      	

        break;
  //-----------------------------------------------------------------
      case scm_nEventFMAID:

  		if(crane_selector_cc==12)
  		{
  		

  			FMA_X_1()=FMA_X_I();
  			FMA_Y_1()=FMA_Y_I();  			

  			sendOutputEvent(scm_nEventC1ID);

  		}

        break;
  //-----------------------------------------------------------------
    }
  }


