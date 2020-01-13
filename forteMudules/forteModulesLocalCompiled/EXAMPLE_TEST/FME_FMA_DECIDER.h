/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FME_FMA_DECIDER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-07/adeel - null - null
 *************************************************************************/

#ifndef _FME_FMA_DECIDER_H_
#define _FME_FMA_DECIDER_H_

#include <funcbloc.h>
#include <forte_int.h>

class FORTE_FME_FMA_DECIDER: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_FME_FMA_DECIDER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_INT &X_FME() {
    return *static_cast<CIEC_INT*>(getDI(0));
  };

  CIEC_INT &Y_FME() {
    return *static_cast<CIEC_INT*>(getDI(1));
  };

  CIEC_INT &X_FMA() {
    return *static_cast<CIEC_INT*>(getDI(2));
  };

  CIEC_INT &Y_FMA() {
    return *static_cast<CIEC_INT*>(getDI(3));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_INT &X_FME_FMA() {
    return *static_cast<CIEC_INT*>(getDO(0));
  };

  CIEC_INT &Y_FME_FMA() {
    return *static_cast<CIEC_INT*>(getDO(1));
  };

  static const TEventID scm_nEventFME_TRIGGERID = 0;
  static const TEventID scm_nEventFMA_TRIGGERID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventTRIGGERID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 4, 2, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_FME_FMA_DECIDER){
  };

  virtual ~FORTE_FME_FMA_DECIDER(){};

};

#endif //close the ifdef sequence from the beginning of the file

