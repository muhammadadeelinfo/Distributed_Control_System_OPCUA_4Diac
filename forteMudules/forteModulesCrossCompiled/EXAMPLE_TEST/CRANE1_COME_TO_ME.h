/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CRANE1_COME_TO_ME
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-01-23/iotdeveloperpk - null - 
 *************************************************************************/

#ifndef _CRANE1_COME_TO_ME_H_
#define _CRANE1_COME_TO_ME_H_

#include <funcbloc.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_CRANE1_COME_TO_ME: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_CRANE1_COME_TO_ME)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &E_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &N_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_INT &X_B_LOC() {
    return *static_cast<CIEC_INT*>(getDI(2));
  };

  CIEC_INT &Y_T_LOC() {
    return *static_cast<CIEC_INT*>(getDI(3));
  };

  CIEC_INT &TEXT_BOX() {
    return *static_cast<CIEC_INT*>(getDI(4));
  };

  CIEC_BOOL &CHOOSE_CRANE() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  };

  CIEC_BOOL &ACTIVATE_BRIDGE() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  };

  CIEC_BOOL &ACTIVATE_TROLLEY() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  };

  CIEC_BOOL &HOOK_U_IN() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  };

  CIEC_BOOL &HOOK_D_IN() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  };

  CIEC_INT &BRIDGE_P() {
    return *static_cast<CIEC_INT*>(getDI(10));
  };

  CIEC_INT &TROLLEY_P() {
    return *static_cast<CIEC_INT*>(getDI(11));
  };

  CIEC_INT &HOOK_P() {
    return *static_cast<CIEC_INT*>(getDI(12));
  };

  CIEC_INT &CRANE_DIS_S() {
    return *static_cast<CIEC_INT*>(getDI(13));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &A_D_MPS() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &BRIDGE_F() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  };

  CIEC_BOOL &BRIDGE_B() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  CIEC_BOOL &TROLLEY_F() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  CIEC_BOOL &TROLLEY_B() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  };

  CIEC_BOOL &HOOK_U() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  };

  CIEC_BOOL &HOOK_D() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TEventID scm_nEventMPS_EID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 14, 7, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_CRANE1_COME_TO_ME){
  };

  virtual ~FORTE_CRANE1_COME_TO_ME(){};

};

#endif //close the ifdef sequence from the beginning of the file

