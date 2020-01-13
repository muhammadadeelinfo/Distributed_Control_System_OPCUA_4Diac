/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: EVENT_CONTROLLER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-03-16/adeel - null - 
 *************************************************************************/

#ifndef _EVENT_CONTROLLER_H_
#define _EVENT_CONTROLLER_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>

class FORTE_EVENT_CONTROLLER: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_EVENT_CONTROLLER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &ED() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &CTM_CD() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &FMe_CD() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &FMa_CD() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  static const TEventID scm_nEventEEID = 0;
  static const TEventID scm_nEventNEID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventE_CTMID = 0;
  static const TEventID scm_nEventE_FMeID = 1;
  static const TEventID scm_nEventE_FMaID = 2;
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
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_EVENT_CONTROLLER){
  };

  virtual ~FORTE_EVENT_CONTROLLER(){};

};

#endif //close the ifdef sequence from the beginning of the file

