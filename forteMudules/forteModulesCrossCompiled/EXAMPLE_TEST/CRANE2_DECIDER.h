/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CRANE2_DECIDER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-03-16/adeel - null - null
 *************************************************************************/

#ifndef _CRANE2_DECIDER_H_
#define _CRANE2_DECIDER_H_

#include <funcbloc.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_CRANE2_DECIDER: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_CRANE2_DECIDER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_INT &Crane_info() {
    return *static_cast<CIEC_INT*>(getDI(0));
  };

  CIEC_BOOL &TD_CTM() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &FD_CTM() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &TD_FMe() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  CIEC_BOOL &FD_FMe() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  };

  CIEC_BOOL &TD_FMa() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  };

  CIEC_BOOL &FD_FMa() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &TD_CTM_O() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &FD_CTM_O() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  };

  CIEC_BOOL &TD_FMe_O() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  CIEC_BOOL &FD_FMe_O() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  CIEC_BOOL &TD_FMa_O() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  };

  CIEC_BOOL &FD_FMa_O() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 7, 6, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_CRANE2_DECIDER){
  };

  virtual ~FORTE_CRANE2_DECIDER(){};

};

#endif //close the ifdef sequence from the beginning of the file

