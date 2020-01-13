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

#ifndef _START_STOP_H_
#define _START_STOP_H_

#include <funcbloc.h>
#include <forte_bool.h>

class FORTE_START_STOP: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_START_STOP)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &CTM() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &FME() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &FMA() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &BUTTON_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &CTM_O() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &FME_O() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  };

  CIEC_BOOL &FMA_O() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  static const TEventID scm_nEventN_STOP_EID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventOUT_EID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 4, 3, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_START_STOP){
  };

  virtual ~FORTE_START_STOP(){};

};

#endif //close the ifdef sequence from the beginning of the file

