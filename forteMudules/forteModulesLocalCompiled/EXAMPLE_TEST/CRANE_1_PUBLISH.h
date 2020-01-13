/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CRANE_1_PUBLISH
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-13/adeel - null - 
 *************************************************************************/

#ifndef _CRANE_1_PUBLISH_H_
#define _CRANE_1_PUBLISH_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_CRANE_1_PUBLISH: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_CRANE_1_PUBLISH)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &E_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_INT &TEXT_BOX() {
    return *static_cast<CIEC_INT*>(getDI(1));
  };

  CIEC_BOOL &N_CTM() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &N_FME() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  CIEC_BOOL &N_FMA() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
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

  CIEC_INT &X_CTM() {
    return *static_cast<CIEC_INT*>(getDI(10));
  };

  CIEC_INT &Y_CTM() {
    return *static_cast<CIEC_INT*>(getDI(11));
  };

  CIEC_INT &X_FME() {
    return *static_cast<CIEC_INT*>(getDI(12));
  };

  CIEC_INT &Y_FME() {
    return *static_cast<CIEC_INT*>(getDI(13));
  };

  CIEC_INT &X_FMA() {
    return *static_cast<CIEC_INT*>(getDI(14));
  };

  CIEC_INT &Y_FMA() {
    return *static_cast<CIEC_INT*>(getDI(15));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventCONTROL_EID = 1;
  static const TEventID scm_nEventLOC_EID = 2;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 16, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_CRANE_1_PUBLISH){
  };

  virtual ~FORTE_CRANE_1_PUBLISH(){};

};

#endif //close the ifdef sequence from the beginning of the file

