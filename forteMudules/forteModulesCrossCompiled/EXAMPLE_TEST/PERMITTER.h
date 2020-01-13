/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: PERMITTER
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-04-11/adeel - null - 
 *************************************************************************/

#ifndef _PERMITTER_H_
#define _PERMITTER_H_

#include <funcbloc.h>
#include <forte_bool.h>

class FORTE_PERMITTER: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_PERMITTER)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &E_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &N_STOP() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  static const TEventID scm_nEventTRIGGER_INID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventTRIGGER_OUTID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 2, 0, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_PERMITTER){
  };

  virtual ~FORTE_PERMITTER(){};

};

#endif //close the ifdef sequence from the beginning of the file

