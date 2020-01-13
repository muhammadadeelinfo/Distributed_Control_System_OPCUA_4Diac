/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: EMERGENCY_CONTROLLER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-04/adeel - null - null
 *************************************************************************/

#ifndef _EMERGENCY_CONTROLLER_H_
#define _EMERGENCY_CONTROLLER_H_

#include <funcbloc.h>
#include <forte_bool.h>

class FORTE_EMERGENCY_CONTROLLER: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_EMERGENCY_CONTROLLER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &CTM_N_IN() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &FME_N_IN() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &FMA_N_IN() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &E_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &CTM_N_OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &FME_N_OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  };

  CIEC_BOOL &FMA_N_OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 4, 3, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_EMERGENCY_CONTROLLER){
  };

  virtual ~FORTE_EMERGENCY_CONTROLLER(){};

};

#endif //close the ifdef sequence from the beginning of the file

