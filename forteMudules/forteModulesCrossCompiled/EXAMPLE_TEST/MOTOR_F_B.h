/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: MOTOR_F_B
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-05/adeel - null - null
 *************************************************************************/

#ifndef _MOTOR_F_B_H_
#define _MOTOR_F_B_H_

#include <funcbloc.h>
#include <forte_bool.h>

class FORTE_MOTOR_F_B: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_MOTOR_F_B)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &M_F() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &M_B() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &F_B() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TEventID scm_nEventFID = 1;
  static const TEventID scm_nEventBID = 2;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(3, 2, 1, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_MOTOR_F_B){
  };

  virtual ~FORTE_MOTOR_F_B(){};

};

#endif //close the ifdef sequence from the beginning of the file

