/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: UPDATE
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2019-02-10/iotdeveloperpk - null - null
 *************************************************************************/

#ifndef _UPDATE_H_
#define _UPDATE_H_

#include <funcbloc.h>
#include <forte_int.h>

class FORTE_UPDATE: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_UPDATE)

private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_INT &RD_1() {
    return *static_cast<CIEC_INT*>(getDO(0));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 0, 1, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_UPDATE){
  };

  virtual ~FORTE_UPDATE(){};

};

#endif //close the ifdef sequence from the beginning of the file

