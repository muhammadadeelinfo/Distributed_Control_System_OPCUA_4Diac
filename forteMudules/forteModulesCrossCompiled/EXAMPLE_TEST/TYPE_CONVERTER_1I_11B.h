/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TYPE_CONVERTER_1I_11B
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-02/adeel - null - 
 *************************************************************************/

#ifndef _TYPE_CONVERTER_1I_11B_H_
#define _TYPE_CONVERTER_1I_11B_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_TYPE_CONVERTER_1I_11B: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_TYPE_CONVERTER_1I_11B)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &BOOL1IN() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_INT &INT2IN() {
    return *static_cast<CIEC_INT*>(getDI(1));
  };

  CIEC_BOOL &BOOL3IN() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &BOOL4IN() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  CIEC_BOOL &BOOL5IN() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  };

  CIEC_BOOL &BOOL6IN() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  };

  CIEC_BOOL &BOOL7IN() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  };

  CIEC_BOOL &BOOL8IN() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  };

  CIEC_BOOL &BOOL9IN() {
    return *static_cast<CIEC_BOOL*>(getDI(8));
  };

  CIEC_BOOL &BOOL10IN() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  };

  CIEC_BOOL &BOOL11IN() {
    return *static_cast<CIEC_BOOL*>(getDI(10));
  };

  CIEC_BOOL &BOOL12IN() {
    return *static_cast<CIEC_BOOL*>(getDI(11));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &BOOL1OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_INT &INT2OUT() {
    return *static_cast<CIEC_INT*>(getDO(1));
  };

  CIEC_BOOL &BOOL3OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  CIEC_BOOL &BOOL4OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  CIEC_BOOL &BOOL5OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  };

  CIEC_BOOL &BOOL6OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  };

  CIEC_BOOL &BOOL7OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  };

  CIEC_BOOL &BOOL8OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  };

  CIEC_BOOL &BOOL9OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(8));
  };

  CIEC_BOOL &BOOL10OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(9));
  };

  CIEC_BOOL &BOOL11OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(10));
  };

  CIEC_BOOL &BOOL12OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(11));
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

   FORTE_FB_DATA_ARRAY(1, 12, 12, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_TYPE_CONVERTER_1I_11B){
  };

  virtual ~FORTE_TYPE_CONVERTER_1I_11B(){};

};

#endif //close the ifdef sequence from the beginning of the file

