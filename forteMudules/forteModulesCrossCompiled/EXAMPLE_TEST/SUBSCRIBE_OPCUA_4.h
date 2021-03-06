/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SUBSCRIBE_OPCUA_4
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-02-09/iotdeveloperpk - null - 
 *************************************************************************/

#ifndef _SUBSCRIBE_OPCUA_4_H_
#define _SUBSCRIBE_OPCUA_4_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>
#include <forte_wstring.h>
#include <forte_int.h>

class FORTE_SUBSCRIBE_OPCUA_4: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_SUBSCRIBE_OPCUA_4)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_WSTRING &STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(1));
  };

  CIEC_INT &RD_1() {
    return *static_cast<CIEC_INT*>(getDO(2));
  };

  CIEC_INT &RD_2() {
    return *static_cast<CIEC_INT*>(getDO(3));
  };

  CIEC_INT &RD_3() {
    return *static_cast<CIEC_INT*>(getDO(4));
  };

  CIEC_INT &RD_4() {
    return *static_cast<CIEC_INT*>(getDO(5));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 1, 6, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_SUBSCRIBE_OPCUA_4){
  };

  virtual ~FORTE_SUBSCRIBE_OPCUA_4(){};

};

#endif //close the ifdef sequence from the beginning of the file

