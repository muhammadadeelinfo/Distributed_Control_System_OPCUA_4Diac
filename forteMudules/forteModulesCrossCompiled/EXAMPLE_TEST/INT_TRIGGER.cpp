/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: INT_TRIGGER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-02-10/iotdeveloperpk - null - null
 *************************************************************************/

#include "INT_TRIGGER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "INT_TRIGGER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_INT_TRIGGER, g_nStringIdINT_TRIGGER)

const CStringDictionary::TStringId FORTE_INT_TRIGGER::scm_anDataInputNames[] = {g_nStringIdDT};

const CStringDictionary::TStringId FORTE_INT_TRIGGER::scm_anDataInputTypeIds[] = {g_nStringIdTIME};

const CStringDictionary::TStringId FORTE_INT_TRIGGER::scm_anDataOutputNames[] = {g_nStringIdRD_1};

const CStringDictionary::TStringId FORTE_INT_TRIGGER::scm_anDataOutputTypeIds[] = {g_nStringIdINT};

const TForteInt16 FORTE_INT_TRIGGER::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_INT_TRIGGER::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_INT_TRIGGER::scm_anEventInputNames[] = {g_nStringIdINIT};

const TDataIOID FORTE_INT_TRIGGER::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_INT_TRIGGER::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_INT_TRIGGER::scm_anEventOutputNames[] = {g_nStringIdINITO};

const SFBInterfaceSpec FORTE_INT_TRIGGER::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_INT_TRIGGER::scm_astInternalFBs[] = {
  {g_nStringIdUPDATE, g_nStringIdUPDATE},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
};

const SCFB_FBConnectionData FORTE_INT_TRIGGER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUPDATE, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUPDATE, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
};

const SCFB_FBConnectionData FORTE_INT_TRIGGER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUPDATE, g_nStringIdRD_1), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRD_1), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdDT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdDT), 1},
};

const SCFB_FBNData FORTE_INT_TRIGGER::scm_stFBNData = {
  2, scm_astInternalFBs,
  3, scm_astEventConnections,
  0, 0,
  2, scm_astDataConnections,
  0, 0,
  0, 0
};


