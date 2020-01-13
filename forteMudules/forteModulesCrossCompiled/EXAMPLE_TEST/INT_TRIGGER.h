/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: INT_TRIGGER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-02-10/iotdeveloperpk - null - null
 *************************************************************************/

#ifndef _INT_TRIGGER_H_
#define _INT_TRIGGER_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_time.h>
#include <forte_int.h>

class FORTE_INT_TRIGGER: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_INT_TRIGGER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_TIME &DT() {
    return *static_cast<CIEC_TIME*>(getDI(0));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_INT &RD_1() {
    return *static_cast<CIEC_INT*>(getDO(0));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 1, 1, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_INT_TRIGGER){
  };

  virtual ~FORTE_INT_TRIGGER(){};

};

#endif //close the ifdef sequence from the beginning of the file

