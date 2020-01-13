/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: EMERGENCY_CONTROLLER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-03-16/adeel - null - 
 *************************************************************************/

#include "EMERGENCY_CONTROLLER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "EMERGENCY_CONTROLLER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_EMERGENCY_CONTROLLER, g_nStringIdEMERGENCY_CONTROLLER)

const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anDataInputNames[] = {g_nStringIdTD, g_nStringIdFD};

const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_EMERGENCY_CONTROLLER::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_EMERGENCY_CONTROLLER::scm_anEIWith[] = {0, 255, 1, 255};
const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anEventInputNames[] = {g_nStringIdTE, g_nStringIdFE};

const TForteInt16 FORTE_EMERGENCY_CONTROLLER::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_EMERGENCY_CONTROLLER::scm_anEventOutputNames[] = {g_nStringIdOE};

const SFBInterfaceSpec FORTE_EMERGENCY_CONTROLLER::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  0, 0,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_EMERGENCY_CONTROLLER::scm_astInternalFBs[] = {
  {g_nStringIdE_F_TRIG, g_nStringIdE_F_TRIG},
  {g_nStringIdE_R_TRIG, g_nStringIdE_R_TRIG},
  {g_nStringIdE_MERGE, g_nStringIdE_MERGE},
};

const SCFB_FBConnectionData FORTE_EMERGENCY_CONTROLLER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_MERGE, g_nStringIdEI1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_MERGE, g_nStringIdEI2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_MERGE, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOE), -1},
};

const SCFB_FBConnectionData FORTE_EMERGENCY_CONTROLLER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdQI), 0},
};

const SCFB_FBNData FORTE_EMERGENCY_CONTROLLER::scm_stFBNData = {
  3, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, 0,
  2, scm_astDataConnections,
  0, 0,
  0, 0
};


