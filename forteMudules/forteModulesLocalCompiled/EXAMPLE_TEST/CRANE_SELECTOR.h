/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CRANE_SELECTOR
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-04/adeel - null - null
 *************************************************************************/

#ifndef _CRANE_SELECTOR_H_
#define _CRANE_SELECTOR_H_

#include <funcbloc.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_CRANE_SELECTOR: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_CRANE_SELECTOR)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &choose_crane() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_INT &Text_box() {
    return *static_cast<CIEC_INT*>(getDI(1));
  };

  CIEC_INT &CTM_X_I() {
    return *static_cast<CIEC_INT*>(getDI(2));
  };

  CIEC_INT &CTM_Y_I() {
    return *static_cast<CIEC_INT*>(getDI(3));
  };

  CIEC_INT &FME_X_I() {
    return *static_cast<CIEC_INT*>(getDI(4));
  };

  CIEC_INT &FME_Y_I() {
    return *static_cast<CIEC_INT*>(getDI(5));
  };

  CIEC_INT &FMA_X_I() {
    return *static_cast<CIEC_INT*>(getDI(6));
  };

  CIEC_INT &FMA_Y_I() {
    return *static_cast<CIEC_INT*>(getDI(7));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_INT &CTM_X_1() {
    return *static_cast<CIEC_INT*>(getDO(0));
  };

  CIEC_INT &CTM_Y_1() {
    return *static_cast<CIEC_INT*>(getDO(1));
  };

  CIEC_INT &FME_X_1() {
    return *static_cast<CIEC_INT*>(getDO(2));
  };

  CIEC_INT &FME_Y_1() {
    return *static_cast<CIEC_INT*>(getDO(3));
  };

  CIEC_INT &FMA_X_1() {
    return *static_cast<CIEC_INT*>(getDO(4));
  };

  CIEC_INT &FMA_Y_1() {
    return *static_cast<CIEC_INT*>(getDO(5));
  };

  CIEC_INT &CTM_X_2() {
    return *static_cast<CIEC_INT*>(getDO(6));
  };

  CIEC_INT &CTM_Y_2() {
    return *static_cast<CIEC_INT*>(getDO(7));
  };

  CIEC_INT &FME_X_2() {
    return *static_cast<CIEC_INT*>(getDO(8));
  };

  CIEC_INT &FME_Y_2() {
    return *static_cast<CIEC_INT*>(getDO(9));
  };

  CIEC_INT &FMA_X_2() {
    return *static_cast<CIEC_INT*>(getDO(10));
  };

  CIEC_INT &FMA_Y_2() {
    return *static_cast<CIEC_INT*>(getDO(11));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TEventID scm_nEventCTMID = 1;
  static const TEventID scm_nEventFMEID = 2;
  static const TEventID scm_nEventFMAID = 3;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TEventID scm_nEventC1ID = 1;
  static const TEventID scm_nEventC2ID = 2;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(3, 8, 12, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_CRANE_SELECTOR){
  };

  virtual ~FORTE_CRANE_SELECTOR(){};

};

#endif //close the ifdef sequence from the beginning of the file

