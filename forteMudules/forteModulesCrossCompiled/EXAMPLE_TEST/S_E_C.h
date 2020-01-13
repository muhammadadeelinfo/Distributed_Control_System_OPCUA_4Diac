/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: S_E_C
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-03/adeel - null - 
 *************************************************************************/

#ifndef _S_E_C_H_
#define _S_E_C_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>

class FORTE_S_E_C: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_S_E_C)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &CTM_N() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &FME_N() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &FMA_N() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  static const TEventID scm_nEventS_EID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCTM_EID = 0;
  static const TEventID scm_nEventFME_EID = 1;
  static const TEventID scm_nEventFMA_EID = 2;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(3, 3, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_S_E_C){
  };

  virtual ~FORTE_S_E_C(){};

};

#endif //close the ifdef sequence from the beginning of the file

