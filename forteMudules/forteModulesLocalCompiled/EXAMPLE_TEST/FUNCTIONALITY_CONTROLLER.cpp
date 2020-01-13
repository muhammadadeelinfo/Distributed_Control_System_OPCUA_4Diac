/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FUNCTIONALITY_CONTROLLER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-04/adeel - null - 
 *************************************************************************/

#include "FUNCTIONALITY_CONTROLLER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FUNCTIONALITY_CONTROLLER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_FUNCTIONALITY_CONTROLLER, g_nStringIdFUNCTIONALITY_CONTROLLER)

const CStringDictionary::TStringId FORTE_FUNCTIONALITY_CONTROLLER::scm_anDataInputNames[] = {g_nStringIdCTM_N_IN, g_nStringIdFME_N_IN, g_nStringIdFMA_N_IN, g_nStringIdE_STOP};

const CStringDictionary::TStringId FORTE_FUNCTIONALITY_CONTROLLER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_FUNCTIONALITY_CONTROLLER::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_FUNCTIONALITY_CONTROLLER::scm_anEIWith[] = {0, 1, 2, 3, 255};
const CStringDictionary::TStringId FORTE_FUNCTIONALITY_CONTROLLER::scm_anEventInputNames[] = {g_nStringIdTRIGGER};

const TForteInt16 FORTE_FUNCTIONALITY_CONTROLLER::scm_anEOWithIndexes[] = {-1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_FUNCTIONALITY_CONTROLLER::scm_anEventOutputNames[] = {g_nStringIdCTM_OUT, g_nStringIdFME_OUT, g_nStringIdFMA_OUT};

const SFBInterfaceSpec FORTE_FUNCTIONALITY_CONTROLLER::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  3,  scm_anEventOutputNames,  0, 0,  4,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_FUNCTIONALITY_CONTROLLER::scm_astInternalFBs[] = {
  {g_nStringIdE_R_TRIG, g_nStringIdE_R_TRIG},
  {g_nStringIdE_R_TRIG_1, g_nStringIdE_R_TRIG},
  {g_nStringIdE_R_TRIG_2, g_nStringIdE_R_TRIG},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdE_CYCLE_1, g_nStringIdE_CYCLE},
  {g_nStringIdE_CYCLE_2, g_nStringIdE_CYCLE},
  {g_nStringIdE_F_TRIG, g_nStringIdE_F_TRIG},
  {g_nStringIdE_F_TRIG_1, g_nStringIdE_F_TRIG},
  {g_nStringIdE_F_TRIG_2, g_nStringIdE_F_TRIG},
  {g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdEMERGENCY_CONTROLLER},
  {g_nStringIdE_F_TRIG_3, g_nStringIdE_F_TRIG},
};

const SCFB_FBParameter FORTE_FUNCTIONALITY_CONTROLLER::scm_astParamters[] = {
  {3, g_nStringIdDT, "T#100ms"},
  {4, g_nStringIdDT, "T#100ms"},
  {5, g_nStringIdDT, "T#100ms"},
};

const SCFB_FBConnectionData FORTE_FUNCTIONALITY_CONTROLLER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTOP), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_1, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTART), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEO), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTOP), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdEO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_2, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdSTART), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_2, g_nStringIdEO), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdSTOP), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEI), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTRIGGER), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_3, g_nStringIdEO), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTOP), 3},
};

const SCFB_FBFannedOutConnectionData FORTE_FUNCTIONALITY_CONTROLLER::scm_astFannedOutEventConnections[] = {
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEI), 6},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_1, g_nStringIdEI), 1},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEI), 7},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_2, g_nStringIdEI), 2},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_2, g_nStringIdEI), 8},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_3, g_nStringIdEI), 10},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTOP), 4},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdSTOP), 5},
};

const SCFB_FBConnectionData FORTE_FUNCTIONALITY_CONTROLLER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdCTM_N_OUT), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdFME_N_OUT), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_1, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdFMA_N_OUT), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_2, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_N_IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdCTM_N_IN), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_N_IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdFME_N_IN), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_N_IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdFMA_N_IN), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdE_STOP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEMERGENCY_CONTROLLER, g_nStringIdE_STOP), 9},
};

const SCFB_FBFannedOutConnectionData FORTE_FUNCTIONALITY_CONTROLLER::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdQI), 6},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdQI), 7},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_2, g_nStringIdQI), 8},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_3, g_nStringIdQI), 10},
};

const SCFB_FBNData FORTE_FUNCTIONALITY_CONTROLLER::scm_stFBNData = {
  11, scm_astInternalFBs,
  12, scm_astEventConnections,
  8, scm_astFannedOutEventConnections,
  7, scm_astDataConnections,
  4, scm_astFannedOutDataConnections,
  3, scm_astParamters
};


