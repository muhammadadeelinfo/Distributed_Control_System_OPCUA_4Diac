/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: HMI_FOLLOW_MACHINE
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2018-12-17/adeel - null - 
 *************************************************************************/

#ifndef _HMI_FOLLOW_MACHINE_H_
#define _HMI_FOLLOW_MACHINE_H_

#include <funcbloc.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_HMI_FOLLOW_MACHINE: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_HMI_FOLLOW_MACHINE)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &E_Stop() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &N_Stop() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_INT &XY() {
    return *static_cast<CIEC_INT*>(getDI(2));
  };

  CIEC_INT &CTM_X() {
    return *static_cast<CIEC_INT*>(getDI(3));
  };

  CIEC_INT &CTM_Y() {
    return *static_cast<CIEC_INT*>(getDI(4));
  };

  CIEC_BOOL &Choose_X() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  };

  CIEC_BOOL &Choose_Y() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_INT &Output_X() {
    return *static_cast<CIEC_INT*>(getDO(0));
  };

  CIEC_INT &Output_Y() {
    return *static_cast<CIEC_INT*>(getDO(1));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TEventID scm_nEventTRIGGER_INID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TEventID scm_nEventTRIGGER_OUTID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 7, 2, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_HMI_FOLLOW_MACHINE){
  };

  virtual ~FORTE_HMI_FOLLOW_MACHINE(){};

};

#endif //close the ifdef sequence from the beginning of the file

