/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FUNCTIONALITY_CONTROLLER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-04/adeel - null - 
 *************************************************************************/

#ifndef _FUNCTIONALITY_CONTROLLER_H_
#define _FUNCTIONALITY_CONTROLLER_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>

class FORTE_FUNCTIONALITY_CONTROLLER: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_FUNCTIONALITY_CONTROLLER)

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

  static const TEventID scm_nEventTRIGGERID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCTM_OUTID = 0;
  static const TEventID scm_nEventFME_OUTID = 1;
  static const TEventID scm_nEventFMA_OUTID = 2;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(3, 4, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_FUNCTIONALITY_CONTROLLER){
  };

  virtual ~FORTE_FUNCTIONALITY_CONTROLLER(){};

};

#endif //close the ifdef sequence from the beginning of the file

