/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FMA_TRIGGER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-11/adeel - null - 
 *************************************************************************/

#ifndef _FMA_TRIGGER_H_
#define _FMA_TRIGGER_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>

class FORTE_FMA_TRIGGER: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_FMA_TRIGGER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &E_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &N_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  static const TEventID scm_nEventE_INID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventE_OUTID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 2, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_FMA_TRIGGER){
  };

  virtual ~FORTE_FMA_TRIGGER(){};

};

#endif //close the ifdef sequence from the beginning of the file

