/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: DISPLAY_LOCAL_TIME
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-17/adeel - null - 
 *************************************************************************/

#include "DISPLAY_LOCAL_TIME.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "DISPLAY_LOCAL_TIME_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_DISPLAY_LOCAL_TIME, g_nStringIdDISPLAY_LOCAL_TIME)

const CStringDictionary::TStringId FORTE_DISPLAY_LOCAL_TIME::scm_anDataOutputNames[] = {g_nStringIdHOURS, g_nStringIdMINUTS, g_nStringIdSECONDS, g_nStringIdMILLISECONDS};

const CStringDictionary::TStringId FORTE_DISPLAY_LOCAL_TIME::scm_anDataOutputTypeIds[] = {g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_DISPLAY_LOCAL_TIME::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_DISPLAY_LOCAL_TIME::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_DISPLAY_LOCAL_TIME::scm_anEOWith[] = {0, 1, 2, 3, 255};
const TForteInt16 FORTE_DISPLAY_LOCAL_TIME::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_DISPLAY_LOCAL_TIME::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_DISPLAY_LOCAL_TIME::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  0,  0, 0, 
  4,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

#include <iostream>
#include <iomanip>
#include <chrono>
#include <fstream>
#ifdef WIN32
#define localtime_r(_Time, _Tm) localtime_s(_Tm, _Time)
#endif
using namespace std;
void FORTE_DISPLAY_LOCAL_TIME::executeEvent(int pa_nEIID){
  switch(pa_nEIID){
    case scm_nEventREQID:
    	tm localTime;
    	std::chrono::system_clock::time_point t = std::chrono::system_clock::now();
    	time_t now = std::chrono::system_clock::to_time_t(t);
    	localtime_r(&now, &localTime);

    	const std::chrono::duration<double> tse = t.time_since_epoch();
    	std::chrono::seconds::rep milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(tse).count() % 1000;


    	HOURS()=localTime.tm_hour;
    	MINUTS()=localTime.tm_min;
    	SECONDS()=localTime.tm_sec;
    	MILLISECONDS()=milliseconds;
      sendOutputEvent(scm_nEventCNFID);

      break;
  }
}



