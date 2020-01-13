/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TYPE_CONVERTER_7I_9B
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-02/adeel - null - 
 *************************************************************************/

#ifndef _TYPE_CONVERTER_7I_9B_H_
#define _TYPE_CONVERTER_7I_9B_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_TYPE_CONVERTER_7I_9B: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_TYPE_CONVERTER_7I_9B)

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

  static const TEventID scm_nEventCONTROL_E_IID = 0;
  static const TEventID scm_nEventLOC_E_IID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCONTROL_E_OID = 0;
  static const TEventID scm_nEventLOC_E_OID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 16, 16, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_TYPE_CONVERTER_7I_9B){
  };

  virtual ~FORTE_TYPE_CONVERTER_7I_9B(){};

};

#endif //close the ifdef sequence from the beginning of the file

