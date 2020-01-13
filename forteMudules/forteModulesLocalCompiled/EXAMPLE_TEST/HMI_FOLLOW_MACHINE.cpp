/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: HMI_FOLLOW_MACHINE
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2018-12-17/adeel - null - 
 *************************************************************************/

#include "HMI_FOLLOW_MACHINE.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "HMI_FOLLOW_MACHINE_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_HMI_FOLLOW_MACHINE, g_nStringIdHMI_FOLLOW_MACHINE)

const CStringDictionary::TStringId FORTE_HMI_FOLLOW_MACHINE::scm_anDataInputNames[] = {g_nStringIdE_Stop, g_nStringIdN_Stop, g_nStringIdXY, g_nStringIdCTM_X, g_nStringIdCTM_Y, g_nStringIdChoose_X, g_nStringIdChoose_Y};

const CStringDictionary::TStringId FORTE_HMI_FOLLOW_MACHINE::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_HMI_FOLLOW_MACHINE::scm_anDataOutputNames[] = {g_nStringIdOutput_X, g_nStringIdOutput_Y};

const CStringDictionary::TStringId FORTE_HMI_FOLLOW_MACHINE::scm_anDataOutputTypeIds[] = {g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_HMI_FOLLOW_MACHINE::scm_anEIWithIndexes[] = {0, 8};
const TDataIOID FORTE_HMI_FOLLOW_MACHINE::scm_anEIWith[] = {0, 1, 5, 6, 2, 3, 4, 255, 3, 4, 255};
const CStringDictionary::TStringId FORTE_HMI_FOLLOW_MACHINE::scm_anEventInputNames[] = {g_nStringIdREQ, g_nStringIdTRIGGER_IN};

const TDataIOID FORTE_HMI_FOLLOW_MACHINE::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_HMI_FOLLOW_MACHINE::scm_anEOWithIndexes[] = {-1, 0, -1};
const CStringDictionary::TStringId FORTE_HMI_FOLLOW_MACHINE::scm_anEventOutputNames[] = {g_nStringIdCNF, g_nStringIdTRIGGER_OUT};

const SFBInterfaceSpec FORTE_HMI_FOLLOW_MACHINE::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  7,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

int location_x_fma;
int location_y_fma;
int x_location_ctm_fma;
int y_location_ctm_fma;
void FORTE_HMI_FOLLOW_MACHINE::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
  case scm_nEventREQID:

  				if(E_Stop()==1)
        	            	{
//DATA RECEIVING    
//-----------------
//-----------------

	    							if(Choose_X()==1)
	    							{
	    								location_x_fma=XY();
	    					
	    							}
	    							if(Choose_Y()==1)
	    							{
	    								location_y_fma=XY();
	    					
	    							}  
  					
	    							x_location_ctm_fma=CTM_X();
									y_location_ctm_fma=CTM_Y();
    	    				

        	            	}
  	
    sendOutputEvent(scm_nEventCNFID);

    break;
    
//---------------------------------------------------------------------------------      
    
  case scm_nEventTRIGGER_INID:
  	
//DATA PROCESSING
//----------------
//----------------

  								if(x_location_ctm_fma<location_x_fma)
  								{
  									x_location_ctm_fma=x_location_ctm_fma+50;
  								}
  								if(x_location_ctm_fma>location_x_fma)
  								{
  									x_location_ctm_fma=x_location_ctm_fma-50;
  								}
  								
  								
  								
  								
									if(y_location_ctm_fma<location_y_fma)
									{
									y_location_ctm_fma=y_location_ctm_fma+50;
									}
									if(y_location_ctm_fma>location_y_fma)
									{
									y_location_ctm_fma=y_location_ctm_fma-50;
									}
									
  		
									Output_X()=x_location_ctm_fma;
									Output_Y()=y_location_ctm_fma;

  	  
      sendOutputEvent(scm_nEventTRIGGER_OUTID);

    break;
}
}



