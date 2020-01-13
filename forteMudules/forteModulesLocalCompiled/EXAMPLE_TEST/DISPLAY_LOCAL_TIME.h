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

#ifndef _DISPLAY_LOCAL_TIME_H_
#define _DISPLAY_LOCAL_TIME_H_

#include <funcbloc.h>
#include <forte_int.h>

class FORTE_DISPLAY_LOCAL_TIME: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_DISPLAY_LOCAL_TIME)

private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_INT &HOURS() {
    return *static_cast<CIEC_INT*>(getDO(0));
  };

  CIEC_INT &MINUTS() {
    return *static_cast<CIEC_INT*>(getDO(1));
  };

  CIEC_INT &SECONDS() {
    return *static_cast<CIEC_INT*>(getDO(2));
  };

  CIEC_INT &MILLISECONDS() {
    return *static_cast<CIEC_INT*>(getDO(3));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 0, 4, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_DISPLAY_LOCAL_TIME){
  };

  virtual ~FORTE_DISPLAY_LOCAL_TIME(){};

};

#endif //close the ifdef sequence from the beginning of the file

