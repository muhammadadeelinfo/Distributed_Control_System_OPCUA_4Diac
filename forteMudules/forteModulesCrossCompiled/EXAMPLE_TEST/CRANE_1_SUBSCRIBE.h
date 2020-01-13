/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CRANE_1_SUBSCRIBE
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-13/adeel - null - 
 *************************************************************************/

#ifndef _CRANE_1_SUBSCRIBE_H_
#define _CRANE_1_SUBSCRIBE_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_CRANE_1_SUBSCRIBE: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_CRANE_1_SUBSCRIBE)

private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &E_STOP() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_INT &TEXT_BOX() {
    return *static_cast<CIEC_INT*>(getDO(1));
  };

  CIEC_BOOL &N_CTM() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  CIEC_BOOL &N_FME() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  CIEC_BOOL &N_FMA() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  };

  CIEC_BOOL &CHOOSE_CRANE() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  };

  CIEC_BOOL &ACTIVATE_BRIDGE() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  };

  CIEC_BOOL &ACTIVATE_TROLLEY() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  };

  CIEC_BOOL &HOOK_U_IN() {
    return *static_cast<CIEC_BOOL*>(getDO(8));
  };

  CIEC_BOOL &HOOK_D_IN() {
    return *static_cast<CIEC_BOOL*>(getDO(9));
  };

  CIEC_INT &X_CTM() {
    return *static_cast<CIEC_INT*>(getDO(10));
  };

  CIEC_INT &Y_CTM() {
    return *static_cast<CIEC_INT*>(getDO(11));
  };

  CIEC_INT &X_FME() {
    return *static_cast<CIEC_INT*>(getDO(12));
  };

  CIEC_INT &Y_FME() {
    return *static_cast<CIEC_INT*>(getDO(13));
  };

  CIEC_INT &X_FMA() {
    return *static_cast<CIEC_INT*>(getDO(14));
  };

  CIEC_INT &Y_FMA() {
    return *static_cast<CIEC_INT*>(getDO(15));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCONTROL_EID = 1;
  static const TEventID scm_nEventLOC_EID = 2;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(3, 0, 16, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_CRANE_1_SUBSCRIBE){
  };

  virtual ~FORTE_CRANE_1_SUBSCRIBE(){};

};

#endif //close the ifdef sequence from the beginning of the file

