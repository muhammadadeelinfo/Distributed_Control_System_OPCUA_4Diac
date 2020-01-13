/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SINGLE_EVENT_CONTROLLER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-03-16/adeel - null - 
 *************************************************************************/

#include "SINGLE_EVENT_CONTROLLER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SINGLE_EVENT_CONTROLLER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_SINGLE_EVENT_CONTROLLER, g_nStringIdSINGLE_EVENT_CONTROLLER)

const CStringDictionary::TStringId FORTE_SINGLE_EVENT_CONTROLLER::scm_anDataInputNames[] = {g_nStringIdTD, g_nStringIdFD, g_nStringIdED};

const CStringDictionary::TStringId FORTE_SINGLE_EVENT_CONTROLLER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_SINGLE_EVENT_CONTROLLER::scm_anEIWithIndexes[] = {0, 2, 4};
const TDataIOID FORTE_SINGLE_EVENT_CONTROLLER::scm_anEIWith[] = {0, 255, 1, 255, 2, 255};
const CStringDictionary::TStringId FORTE_SINGLE_EVENT_CONTROLLER::scm_anEventInputNames[] = {g_nStringIdTE, g_nStringIdFE, g_nStringIdEE};

const TForteInt16 FORTE_SINGLE_EVENT_CONTROLLER::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_SINGLE_EVENT_CONTROLLER::scm_anEventOutputNames[] = {g_nStringIdOE};

const SFBInterfaceSpec FORTE_SINGLE_EVENT_CONTROLLER::scm_stFBInterfaceSpec = {
  3,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  0, 0,  3,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_SINGLE_EVENT_CONTROLLER::scm_astInternalFBs[] = {
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdE_R_TRIG, g_nStringIdE_R_TRIG},
  {g_nStringIdE_F_TRIG, g_nStringIdE_F_TRIG},
  {g_nStringIdE_F_TRIG_1, g_nStringIdE_F_TRIG},
};

const SCFB_FBParameter FORTE_SINGLE_EVENT_CONTROLLER::scm_astParamters[] = {
  {0, g_nStringIdDT, "T#1s"},
};

const SCFB_FBConnectionData FORTE_SINGLE_EVENT_CONTROLLER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTOP), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEI), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOE), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEI), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTOP), 0},
};

const SCFB_FBConnectionData FORTE_SINGLE_EVENT_CONTROLLER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdED), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdQI), 3},
};

const SCFB_FBNData FORTE_SINGLE_EVENT_CONTROLLER::scm_stFBNData = {
  4, scm_astInternalFBs,
  7, scm_astEventConnections,
  0, 0,
  3, scm_astDataConnections,
  0, 0,
  1, scm_astParamters
};


