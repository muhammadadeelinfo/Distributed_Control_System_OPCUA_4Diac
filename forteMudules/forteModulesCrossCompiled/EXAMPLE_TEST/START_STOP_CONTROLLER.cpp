/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: START_STOP_CONTROLLER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-12/adeel - null - 
 *************************************************************************/

#include "START_STOP_CONTROLLER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "START_STOP_CONTROLLER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_START_STOP_CONTROLLER, g_nStringIdSTART_STOP_CONTROLLER)

const CStringDictionary::TStringId FORTE_START_STOP_CONTROLLER::scm_anDataInputNames[] = {g_nStringIdCTM, g_nStringIdFME, g_nStringIdFMA};

const CStringDictionary::TStringId FORTE_START_STOP_CONTROLLER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_START_STOP_CONTROLLER::scm_anDataOutputNames[] = {g_nStringIdCTM_O, g_nStringIdFME_O, g_nStringIdFMA_O};

const CStringDictionary::TStringId FORTE_START_STOP_CONTROLLER::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_START_STOP_CONTROLLER::scm_anEIWithIndexes[] = {-1, 0};
const TDataIOID FORTE_START_STOP_CONTROLLER::scm_anEIWith[] = {0, 1, 2, 255};
const CStringDictionary::TStringId FORTE_START_STOP_CONTROLLER::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_START_STOP_CONTROLLER::scm_anEOWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_START_STOP_CONTROLLER::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_START_STOP_CONTROLLER::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_START_STOP_CONTROLLER::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  3,  scm_anDataInputNames, scm_anDataInputTypeIds,
  3,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_START_STOP_CONTROLLER::scm_astInternalFBs[] = {
  {g_nStringIdSTART_STOP, g_nStringIdSTART_STOP},
  {g_nStringIdIX, g_nStringIdIX},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdE_R_TRIG, g_nStringIdE_R_TRIG},
};

const SCFB_FBParameter FORTE_START_STOP_CONTROLLER::scm_astParamters[] = {
  {1, g_nStringIdQI, "1"},
  {1, g_nStringIdPARAMS, "in2.sensor.0"},
  {2, g_nStringIdDT, "T#1s"},
};

const SCFB_FBConnectionData FORTE_START_STOP_CONTROLLER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdN_STOP_E), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdOUT_E), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEI), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdN_STOP_E), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_START_STOP_CONTROLLER::scm_astFannedOutEventConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 2},
};

const SCFB_FBConnectionData FORTE_START_STOP_CONTROLLER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdIN), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdBUTTON_STOP), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdCTM), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdFME), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdFMA), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdCTM_O), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdFME_O), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTART_STOP, g_nStringIdFMA_O), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_O), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_START_STOP_CONTROLLER::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdQI), 3},
};

const SCFB_FBNData FORTE_START_STOP_CONTROLLER::scm_stFBNData = {
  4, scm_astInternalFBs,
  6, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  7, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  3, scm_astParamters
};


