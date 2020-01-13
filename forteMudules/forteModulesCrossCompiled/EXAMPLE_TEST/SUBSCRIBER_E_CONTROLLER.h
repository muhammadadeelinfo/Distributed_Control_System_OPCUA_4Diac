/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SUBSCRIBER_E_CONTROLLER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-14/adeel - null - null
 *************************************************************************/

#ifndef _SUBSCRIBER_E_CONTROLLER_H_
#define _SUBSCRIBER_E_CONTROLLER_H_

#include <funcbloc.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_SUBSCRIBER_E_CONTROLLER: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_SUBSCRIBER_E_CONTROLLER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &E_STOP_I() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_INT &TEXT_BOX_I() {
    return *static_cast<CIEC_INT*>(getDI(1));
  };

  CIEC_BOOL &N_CTM_I() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &N_FME_I() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  CIEC_BOOL &N_FMA_I() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  };

  CIEC_BOOL &CHOOSE_CRANE_I() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  };

  CIEC_BOOL &ACTIVATE_BRIDGE_I() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  };

  CIEC_BOOL &ACTIVATE_TROLLEY_I() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  };

  CIEC_BOOL &HOOK_U_I() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  };

  CIEC_BOOL &HOOK_D_I() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  };

  CIEC_INT &X_CTM_I() {
    return *static_cast<CIEC_INT*>(getDI(10));
  };

  CIEC_INT &Y_CTM_I() {
    return *static_cast<CIEC_INT*>(getDI(11));
  };

  CIEC_INT &X_FME_I() {
    return *static_cast<CIEC_INT*>(getDI(12));
  };

  CIEC_INT &Y_FME_I() {
    return *static_cast<CIEC_INT*>(getDI(13));
  };

  CIEC_INT &X_FMA_I() {
    return *static_cast<CIEC_INT*>(getDI(14));
  };

  CIEC_INT &Y_FMA_I() {
    return *static_cast<CIEC_INT*>(getDI(15));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &E_STOP_O() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_INT &TEXT_BOX_O() {
    return *static_cast<CIEC_INT*>(getDO(1));
  };

  CIEC_BOOL &N_CTM_O() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  CIEC_BOOL &N_FME_O() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  CIEC_BOOL &N_FMA_O() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  };

  CIEC_BOOL &CHOOSE_CRANE_O() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  };

  CIEC_BOOL &ACTIVATE_BRIDGE_O() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  };

  CIEC_BOOL &ACTIVATE_TROLLEY_O() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  };

  CIEC_BOOL &HOOK_U_O() {
    return *static_cast<CIEC_BOOL*>(getDO(8));
  };

  CIEC_BOOL &HOOK_D_O() {
    return *static_cast<CIEC_BOOL*>(getDO(9));
  };

  CIEC_INT &X_CTM_O() {
    return *static_cast<CIEC_INT*>(getDO(10));
  };

  CIEC_INT &Y_CTM_O() {
    return *static_cast<CIEC_INT*>(getDO(11));
  };

  CIEC_INT &X_FME_O() {
    return *static_cast<CIEC_INT*>(getDO(12));
  };

  CIEC_INT &Y_FME_O() {
    return *static_cast<CIEC_INT*>(getDO(13));
  };

  CIEC_INT &X_FMA_O() {
    return *static_cast<CIEC_INT*>(getDO(14));
  };

  CIEC_INT &Y_FMA_O() {
    return *static_cast<CIEC_INT*>(getDO(15));
  };

  static const TEventID scm_nEventE_STOP_EID = 0;
  static const TEventID scm_nEventTEXT_BOX_EID = 1;
  static const TEventID scm_nEventN_CTM_EID = 2;
  static const TEventID scm_nEventN_FME_EID = 3;
  static const TEventID scm_nEventN_FMA_EID = 4;
  static const TEventID scm_nEventCHOOSE_CRANE_EID = 5;
  static const TEventID scm_nEventACTIVATE_BRIDGE_EID = 6;
  static const TEventID scm_nEventACTIVATE_TROLLEY_EID = 7;
  static const TEventID scm_nEventHOOK_U_EID = 8;
  static const TEventID scm_nEventHOOK_D_EID = 9;
  static const TEventID scm_nEventX_CTM_EID = 10;
  static const TEventID scm_nEventY_CTM_EID = 11;
  static const TEventID scm_nEventX_FME_EID = 12;
  static const TEventID scm_nEventY_FME_EID = 13;
  static const TEventID scm_nEventX_FMA_EID = 14;
  static const TEventID scm_nEventY_FMA_EID = 15;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCONTROL_EID = 0;
  static const TEventID scm_nEventLOC_EID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 16, 16, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_SUBSCRIBER_E_CONTROLLER){
  };

  virtual ~FORTE_SUBSCRIBER_E_CONTROLLER(){};

};

#endif //close the ifdef sequence from the beginning of the file

