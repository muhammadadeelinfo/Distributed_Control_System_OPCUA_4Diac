/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: START_STOP_CONTROLLER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-12/adeel - null - 
 *************************************************************************/

#ifndef _START_STOP_CONTROLLER_H_
#define _START_STOP_CONTROLLER_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>

class FORTE_START_STOP_CONTROLLER: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_START_STOP_CONTROLLER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &CTM() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &FME() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &FMA() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &CTM_O() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &FME_O() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  };

  CIEC_BOOL &FMA_O() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 3, 3, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_START_STOP_CONTROLLER){
  };

  virtual ~FORTE_START_STOP_CONTROLLER(){};

};

#endif //close the ifdef sequence from the beginning of the file

