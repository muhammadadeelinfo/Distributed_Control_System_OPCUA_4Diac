/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: RESET_M
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-05/adeel - null - null
 *************************************************************************/

#ifndef _RESET_M_H_
#define _RESET_M_H_

#include <cfb.h>
#include <typelib.h>

class FORTE_RESET_M: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_RESET_M)

private:
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TForteInt16 scm_anEOWithIndexes[];
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(0, 0, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_RESET_M){
  };

  virtual ~FORTE_RESET_M(){};

};

#endif //close the ifdef sequence from the beginning of the file

