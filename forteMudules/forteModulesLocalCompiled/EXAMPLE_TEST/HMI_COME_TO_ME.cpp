/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: HMI_COME_TO_ME
 *** Description: 
 *** Version: 
 ***     1.0: 2018-12-12/adeel14a - null - 
 *************************************************************************/

#include "HMI_COME_TO_ME.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "HMI_COME_TO_ME_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_HMI_COME_TO_ME, g_nStringIdHMI_COME_TO_ME)

const CStringDictionary::TStringId FORTE_HMI_COME_TO_ME::scm_anDataInputNames[] = {g_nStringIdE_Stop, g_nStringIdN_Stop, g_nStringIdXY, g_nStringIdFME_FMA_X, g_nStringIdFME_FMA_Y, g_nStringIdChoose_X, g_nStringIdChoose_Y};

const CStringDictionary::TStringId FORTE_HMI_COME_TO_ME::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_HMI_COME_TO_ME::scm_anDataOutputNames[] = {g_nStringIdOutput_X, g_nStringIdOutput_Y};

const CStringDictionary::TStringId FORTE_HMI_COME_TO_ME::scm_anDataOutputTypeIds[] = {g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_HMI_COME_TO_ME::scm_anEIWithIndexes[] = {0, 6, -1};
const TDataIOID FORTE_HMI_COME_TO_ME::scm_anEIWith[] = {0, 1, 5, 6, 2, 255, 4, 3, 255};
const CStringDictionary::TStringId FORTE_HMI_COME_TO_ME::scm_anEventInputNames[] = {g_nStringIdREQ, g_nStringIdUPDATER_IN, g_nStringIdTRIGGER_IN};

const TDataIOID FORTE_HMI_COME_TO_ME::scm_anEOWith[] = {0, 1, 255, 0, 1, 255};
const TForteInt16 FORTE_HMI_COME_TO_ME::scm_anEOWithIndexes[] = {-1, 0, 3, -1};
const CStringDictionary::TStringId FORTE_HMI_COME_TO_ME::scm_anEventOutputNames[] = {g_nStringIdCNF, g_nStringIdUPDATER_OUT, g_nStringIdTRIGGER_OUT};

const SFBInterfaceSpec FORTE_HMI_COME_TO_ME::scm_stFBInterfaceSpec = {
  3,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  3,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  7,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

int location_x_ctm=0;
int location_y_ctm=0;
void FORTE_HMI_COME_TO_ME::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
  //--------------------------------------------------------------------------

  
case scm_nEventUPDATER_INID:
    if(Output_X() != FME_FMA_X())
    {
    	Output_X()=FME_FMA_X();
	        sendOutputEvent(scm_nEventUPDATER_OUTID);
    }

    if(Output_Y() != FME_FMA_Y())
    {
    	Output_Y()=FME_FMA_Y();
	        sendOutputEvent(scm_nEventUPDATER_OUTID);
    }
	  	break;      	    					
	
  
  
  
  case scm_nEventREQID:
    	    	  
    	      	if(E_Stop()==1)
    	      	            	{
    	      	    		

    	      	    				if(Choose_X()==1)
    	      	    				{
    	      	    					location_x_ctm=XY();
    	      	    					
    	      	    				}
    	      	    				if(Choose_Y()==1)
    	      	    				{
    	      	    					location_y_ctm=XY();
    	      	    					
    	      	    				}
    	      	    					      	    		      	
    	      	    		  		


    	      	            	}

    	        sendOutputEvent(scm_nEventCNFID);

    	        break;     
    	  //---------------------------------------------------------------------------           
    	      case scm_nEventTRIGGER_INID:

    	      	Output_X()=location_x_ctm;
    	  		Output_Y()=location_y_ctm;
    	      	
    	      	
    	        sendOutputEvent(scm_nEventTRIGGER_OUTID);

    	        break;
    	  //---------------------------------------------------------------------------
    	  }
    	}



