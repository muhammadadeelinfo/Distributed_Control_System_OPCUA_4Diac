/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: EV3_CONTROLLER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#ifndef _EV3_CONTROLLER_H_
#define _EV3_CONTROLLER_H_

#include <funcbloc.h>
#include <forte_bool.h>

class FORTE_EV3_CONTROLLER: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_EV3_CONTROLLER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &E_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &CTM_ACTIVATE_MP() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &CTM_BRIDGE_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &CTM_BRIDGE_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  CIEC_BOOL &CTM_TROLLEY_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  };

  CIEC_BOOL &CTM_TROLLEY_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  };

  CIEC_BOOL &CTM_HOOK_U_I() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  };

  CIEC_BOOL &CTM_HOOK_D_I() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  };

  CIEC_BOOL &FME_ACTIVATE_MP() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  };

  CIEC_BOOL &FME_BRIDGE_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  };

  CIEC_BOOL &FME_BRIDGE_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  };

  CIEC_BOOL &FME_TROLLEY_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(11));
  };

  CIEC_BOOL &FME_TROLLEY_B_I() {
    return *static_cast<CIEC_BOOL*>(getDI(12));
  };

  CIEC_BOOL &FME_HOOK_U_I() {
    return *static_cast<CIEC_BOOL*>(getDI(13));
  };

  CIEC_BOOL &FME_HOOK_D_I() {
    return *static_cast<CIEC_BOOL*>(getDI(14));
  };

  CIEC_BOOL &FMA_ACTIVATE_MP() {
    return *static_cast<CIEC_BOOL*>(getDI(15));
  };

  CIEC_BOOL &FMA_BRIDGE_F_I() {
    return *static_cast<CIEC_BOOL*>(getDI(16));
  };

  CIEC_BOOL &FMA_BRIDGE_B_I() {
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
  CIEC_BOOL &M_P() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &BRIDGE_F() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  };

  CIEC_BOOL &BRIDGE_B() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  CIEC_BOOL &TROLLEY_F() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  CIEC_BOOL &TROLLEY_B() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  };

  CIEC_BOOL &HOOK_U() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  };

  CIEC_BOOL &HOOK_D() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
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

   FORTE_FB_DATA_ARRAY(2, 22, 7, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_EV3_CONTROLLER){
  };

  virtual ~FORTE_EV3_CONTROLLER(){};

};

#endif //close the ifdef sequence from the beginning of the file

