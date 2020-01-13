/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SENSORS_ACTUATORS
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-03-29/adeel - null - 
 *************************************************************************/

#ifndef _SENSORS_ACTUATORS_H_
#define _SENSORS_ACTUATORS_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_SENSORS_ACTUATORS: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_SENSORS_ACTUATORS)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &CTM_ACTIVATE_MP() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &CTM_BRIDGE_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &CTM_BRIGDE_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &CTM_TROLLEY_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  CIEC_BOOL &CTM_TROLLEY_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  };

  CIEC_BOOL &CTM_HOOK_U_I() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  };

  CIEC_BOOL &CTM_HOOK_D_I() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  };

  CIEC_BOOL &FME_ACTIVATE_MP() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  };

  CIEC_BOOL &FME_BRIDGE_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  };

  CIEC_BOOL &FME_BRIGDE_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  };

  CIEC_BOOL &FME_TROLLEY_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  };

  CIEC_BOOL &FME_TROLLEY_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(11));
  };

  CIEC_BOOL &FME_HOOK_U_I() {
    return *static_cast<CIEC_BOOL*>(getDI(12));
  };

  CIEC_BOOL &FME_HOOK_D_I() {
    return *static_cast<CIEC_BOOL*>(getDI(13));
  };

  CIEC_BOOL &FMA_ACTIVATE_MP() {
    return *static_cast<CIEC_BOOL*>(getDI(14));
  };

  CIEC_BOOL &E_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(15));
  };

  CIEC_BOOL &FMA_BRIDGE_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(16));
  };

  CIEC_BOOL &FMA_BRIGDE_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(17));
  };

  CIEC_BOOL &FMA_TROLLEY_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(18));
  };

  CIEC_BOOL &FMA_TROLLEY_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(19));
  };

  CIEC_BOOL &FMA_HOOK_U_I() {
    return *static_cast<CIEC_BOOL*>(getDI(20));
  };

  CIEC_BOOL &FMA_HOOK_D_I() {
    return *static_cast<CIEC_BOOL*>(getDI(21));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_INT &BRIDGE_P() {
    return *static_cast<CIEC_INT*>(getDO(0));
  };

  CIEC_INT &TROLLEY_P() {
    return *static_cast<CIEC_INT*>(getDO(1));
  };

  CIEC_INT &HOOK_P() {
    return *static_cast<CIEC_INT*>(getDO(2));
  };

  CIEC_INT &CRANE_DIS_S() {
    return *static_cast<CIEC_INT*>(getDO(3));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TEventID scm_nEventINITID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventS_A_EID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 22, 4, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_SENSORS_ACTUATORS){
  };

  virtual ~FORTE_SENSORS_ACTUATORS(){};

};

#endif //close the ifdef sequence from the beginning of the file

