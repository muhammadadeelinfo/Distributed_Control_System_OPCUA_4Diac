/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: PERMITTER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-11/adeel - null - 
 *************************************************************************/

#include "PERMITTER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "PERMITTER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_PERMITTER, g_nStringIdPERMITTER)

const CStringDictionary::TStringId FORTE_PERMITTER::scm_anDataInputNames[] = {g_nStringIdE_STOP, g_nStringIdN_STOP};

const CStringDictionary::TStringId FORTE_PERMITTER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_PERMITTER::scm_anEIWithIndexes[] = {-1, 0};
const TDataIOID FORTE_PERMITTER::scm_anEIWith[] = {0, 1, 255};
const CStringDictionary::TStringId FORTE_PERMITTER::scm_anEventInputNames[] = {g_nStringIdTRIGGER_IN, g_nStringIdREQ};

const TForteInt16 FORTE_PERMITTER::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_PERMITTER::scm_anEventOutputNames[] = {g_nStringIdTRIGGER_OUT};

const SFBInterfaceSpec FORTE_PERMITTER::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  0, 0,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};

bool fma123=0;
void FORTE_PERMITTER::executeEvent(int pa_nEIID){
  switch(pa_nEIID){

    case scm_nEventREQID:

	if(E_STOP()==1 && N_STOP()==1)
	{
		fma123=1;
		 break;
	}else{fma123=0;  break;}



    case scm_nEventTRIGGER_INID:
    	if(fma123==1)
      {sendOutputEvent(scm_nEventTRIGGER_OUTID); break;}
    	else{break;}


  }
}



