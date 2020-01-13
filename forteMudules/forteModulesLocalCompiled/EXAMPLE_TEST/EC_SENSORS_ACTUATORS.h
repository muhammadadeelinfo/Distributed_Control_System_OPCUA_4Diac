/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: EC_SENSORS_ACTUATORS
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-03-30/adeel - null - 
 *************************************************************************/

#ifndef _EC_SENSORS_ACTUATORS_H_
#define _EC_SENSORS_ACTUATORS_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>

class FORTE_EC_SENSORS_ACTUATORS: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_EC_SENSORS_ACTUATORS)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &E_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &CTM_ACTIVATE_SENSORS() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &CTM_ACTIVATE_BRIDGE_I() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &CTM_BRIGDE_F_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  CIEC_BOOL &CTM_AVTIVATE_TROLLEY_I() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  };

  CIEC_BOOL &CTM_TROLLEY_F_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  };

  CIEC_BOOL &CTM_AVTIVATE_HOOK_I() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  };

  CIEC_BOOL &CTM_HOOK_U_D_I() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  };

  CIEC_BOOL &FME_ACTIVATE_SENSORS() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  };

  CIEC_BOOL &FME_ACTIVATE_BRIDGE_I() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  };

  CIEC_BOOL &FME_BRIGDE_F_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  };

  CIEC_BOOL &FME_AVTIVATE_TROLLEY_I() {
    return *static_cast<CIEC_BOOL*>(getDI(11));
  };

  CIEC_BOOL &FME_TROLLEY_F_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(12));
  };

  CIEC_BOOL &FME_AVTIVATE_HOOK_I() {
    return *static_cast<CIEC_BOOL*>(getDI(13));
  };

  CIEC_BOOL &FME_HOOK_U_D_I() {
    return *static_cast<CIEC_BOOL*>(getDI(14));
  };

  CIEC_BOOL &FMA_ACTIVATE_SENSORS() {
    return *static_cast<CIEC_BOOL*>(getDI(15));
  };

  CIEC_BOOL &FMA_ACTIVATE_BRIDGE_I() {
    return *static_cast<CIEC_BOOL*>(getDI(16));
  };

  CIEC_BOOL &FMA_BRIGDE_F_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(17));
  };

  CIEC_BOOL &FMA_AVTIVATE_TROLLEY_I() {
    return *static_cast<CIEC_BOOL*>(getDI(18));
  };

  CIEC_BOOL &FMA_TROLLEY_F_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(19));
  };

  CIEC_BOOL &FMA_AVTIVATE_HOOK_I() {
    return *static_cast<CIEC_BOOL*>(getDI(20));
  };

  CIEC_BOOL &FMA_HOOK_U_D_I() {
    return *static_cast<CIEC_BOOL*>(getDI(21));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  static const TEventID scm_nEventACTIVATE_SENSORS_EID = 2;
  static const TEventID scm_nEventBRIGDE_F_B_I_TID = 3;
  static const TEventID scm_nEventBRIGDE_F_B_I_BID = 4;
  static const TEventID scm_nEventTROLLEY_F_B_I_FID = 5;
  static const TEventID scm_nEventTROLLEY_F_B_I_BID = 6;
  static const TEventID scm_nEventHOOK_U_D_I_DID = 7;
  static const TEventID scm_nEventHOOK_U_D_I_UID = 8;
  static const TEventID scm_nEventACTIVATE_BRIDGEID = 9;
  static const TEventID scm_nEventAVTIVATE_TROLLEYID = 10;
  static const TEventID scm_nEventAVTIVATE_HOOKID = 11;
  static const TEventID scm_nEventDEACTIVATE_BRIDGEID = 12;
  static const TEventID scm_nEventDEAVTIVATE_TROLLEYID = 13;
  static const TEventID scm_nEventDEAVTIVATE_HOOKID = 14;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(15, 22, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_EC_SENSORS_ACTUATORS){
  };

  virtual ~FORTE_EC_SENSORS_ACTUATORS(){};

};

#endif //close the ifdef sequence from the beginning of the file

