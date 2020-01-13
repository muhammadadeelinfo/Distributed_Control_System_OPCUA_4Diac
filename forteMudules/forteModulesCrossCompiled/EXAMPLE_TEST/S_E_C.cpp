/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: S_E_C
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-03/adeel - null - 
 *************************************************************************/

#include "S_E_C.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "S_E_C_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_S_E_C, g_nStringIdS_E_C)

const CStringDictionary::TStringId FORTE_S_E_C::scm_anDataInputNames[] = {g_nStringIdCTM_N, g_nStringIdFME_N, g_nStringIdFMA_N};

const CStringDictionary::TStringId FORTE_S_E_C::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_S_E_C::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_S_E_C::scm_anEIWith[] = {0, 1, 2, 255};
const CStringDictionary::TStringId FORTE_S_E_C::scm_anEventInputNames[] = {g_nStringIdS_E};

const TForteInt16 FORTE_S_E_C::scm_anEOWithIndexes[] = {-1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_S_E_C::scm_anEventOutputNames[] = {g_nStringIdCTM_E, g_nStringIdFME_E, g_nStringIdFMA_E};

const SFBInterfaceSpec FORTE_S_E_C::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  3,  scm_anEventOutputNames,  0, 0,  3,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_S_E_C::scm_astInternalFBs[] = {
  {g_nStringIdCTM, g_nStringIdE_R_TRIG},
  {g_nStringIdFME, g_nStringIdE_R_TRIG},
  {g_nStringIdFMA, g_nStringIdE_R_TRIG},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdE_F_TRIG, g_nStringIdE_F_TRIG},
  {g_nStringIdE_F_TRIG_1, g_nStringIdE_F_TRIG},
  {g_nStringIdE_F_TRIG_2, g_nStringIdE_F_TRIG},
  {g_nStringIdE_CYCLE_1, g_nStringIdE_CYCLE},
  {g_nStringIdE_CYCLE_2, g_nStringIdE_CYCLE},
};

const SCFB_FBParameter FORTE_S_E_C::scm_astParamters[] = {
  {3, g_nStringIdDT, "T#500ms"},
  {7, g_nStringIdDT, "T#500ms"},
  {8, g_nStringIdDT, "T#500ms"},
};

const SCFB_FBConnectionData FORTE_S_E_C::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCTM, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_E), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTOP), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdS_E), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCTM, g_nStringIdEI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFME, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTART), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTOP), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFMA, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdSTART), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_2, g_nStringIdEO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdSTOP), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdEO), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_E), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_2, g_nStringIdEO), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_E), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_S_E_C::scm_astFannedOutEventConnections[] = {
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEI), 4},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFME, g_nStringIdEI), 1},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEI), 5},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFMA, g_nStringIdEI), 2},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_2, g_nStringIdEI), 6},
};

const SCFB_FBConnectionData FORTE_S_E_C::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_N), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCTM, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_N), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFME, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_N), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdFMA, g_nStringIdQI), 2},
};

const SCFB_FBFannedOutConnectionData FORTE_S_E_C::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdQI), 4},
};

const SCFB_FBNData FORTE_S_E_C::scm_stFBNData = {
  9, scm_astInternalFBs,
  10, scm_astEventConnections,
  5, scm_astFannedOutEventConnections,
  3, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  3, scm_astParamters
};


