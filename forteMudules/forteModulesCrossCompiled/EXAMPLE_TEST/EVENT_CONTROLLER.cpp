/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: EVENT_CONTROLLER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-03-16/adeel - null - 
 *************************************************************************/

#include "EVENT_CONTROLLER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "EVENT_CONTROLLER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_EVENT_CONTROLLER, g_nStringIdEVENT_CONTROLLER)

const CStringDictionary::TStringId FORTE_EVENT_CONTROLLER::scm_anDataInputNames[] = {g_nStringIdED, g_nStringIdCTM_CD, g_nStringIdFMe_CD, g_nStringIdFMa_CD};

const CStringDictionary::TStringId FORTE_EVENT_CONTROLLER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_EVENT_CONTROLLER::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_EVENT_CONTROLLER::scm_anEIWith[] = {0, 255, 1, 2, 3, 255};
const CStringDictionary::TStringId FORTE_EVENT_CONTROLLER::scm_anEventInputNames[] = {g_nStringIdEE, g_nStringIdNE};

const TForteInt16 FORTE_EVENT_CONTROLLER::scm_anEOWithIndexes[] = {-1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_EVENT_CONTROLLER::scm_anEventOutputNames[] = {g_nStringIdE_CTM, g_nStringIdE_FMe, g_nStringIdE_FMa};

const SFBInterfaceSpec FORTE_EVENT_CONTROLLER::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  3,  scm_anEventOutputNames,  0, 0,  4,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_EVENT_CONTROLLER::scm_astInternalFBs[] = {
  {g_nStringIdE_F_TRIG, g_nStringIdE_F_TRIG},
  {g_nStringIdE_R_TRIG, g_nStringIdE_R_TRIG},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdE_R_TRIG_1, g_nStringIdE_R_TRIG},
  {g_nStringIdE_F_TRIG_1, g_nStringIdE_F_TRIG},
  {g_nStringIdE_CYCLE_1, g_nStringIdE_CYCLE},
  {g_nStringIdE_R_TRIG_2, g_nStringIdE_R_TRIG},
  {g_nStringIdE_F_TRIG_2, g_nStringIdE_F_TRIG},
  {g_nStringIdE_CYCLE_2, g_nStringIdE_CYCLE},
  {g_nStringIdE_F_TRIG_3, g_nStringIdE_F_TRIG},
};

const SCFB_FBParameter FORTE_EVENT_CONTROLLER::scm_astParamters[] = {
  {2, g_nStringIdDT, "T#1s"},
  {5, g_nStringIdDT, "T#1s"},
  {8, g_nStringIdDT, "T#1s"},
};

const SCFB_FBConnectionData FORTE_EVENT_CONTROLLER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTOP), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdE_CTM), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdNE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_2, g_nStringIdEI), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdE_FMe), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdEO), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdE_FMa), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_1, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTART), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTOP), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_2, g_nStringIdEO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdSTART), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_2, g_nStringIdEO), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdSTOP), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_3, g_nStringIdEI), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_3, g_nStringIdEO), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTOP), 2},
};

const SCFB_FBFannedOutConnectionData FORTE_EVENT_CONTROLLER::scm_astFannedOutEventConnections[] = {
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEI), 1},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEI), 0},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_1, g_nStringIdEI), 3},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEI), 4},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_2, g_nStringIdEI), 6},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTOP), 5},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdSTOP), 8},
};

const SCFB_FBConnectionData FORTE_EVENT_CONTROLLER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_CD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMe_CD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_1, g_nStringIdQI), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMa_CD), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_2, g_nStringIdQI), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdED), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_3, g_nStringIdQI), 9},
};

const SCFB_FBFannedOutConnectionData FORTE_EVENT_CONTROLLER::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdQI), 0},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdQI), 4},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_2, g_nStringIdQI), 7},
};

const SCFB_FBNData FORTE_EVENT_CONTROLLER::scm_stFBNData = {
  10, scm_astInternalFBs,
  12, scm_astEventConnections,
  7, scm_astFannedOutEventConnections,
  4, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  3, scm_astParamters
};


