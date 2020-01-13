/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: RESET_M
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-05/adeel - null - null
 *************************************************************************/

#include "RESET_M.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RESET_M_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_RESET_M, g_nStringIdRESET_M)

const TForteInt16 FORTE_RESET_M::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_RESET_M::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_RESET_M::scm_anEOWithIndexes[] = {-1};
const SFBInterfaceSpec FORTE_RESET_M::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  0,  0,   0, 0,  0,  0, 0, 
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_RESET_M::scm_astInternalFBs[] = {
  {g_nStringIdQX, g_nStringIdQX},
  {g_nStringIdQX_1, g_nStringIdQX},
  {g_nStringIdQX_2, g_nStringIdQX},
  {g_nStringIdQX_3, g_nStringIdQX},
};

const SCFB_FBParameter FORTE_RESET_M::scm_astParamters[] = {
  {0, g_nStringIdQI, "1"},
  {0, g_nStringIdPARAMS, "outA.motor.reset"},
  {0, g_nStringIdOUT, "1"},
  {1, g_nStringIdQI, "1"},
  {1, g_nStringIdPARAMS, "outB.motor.reset"},
  {1, g_nStringIdOUT, "1"},
  {2, g_nStringIdQI, "1"},
  {2, g_nStringIdPARAMS, "outC.motor.reset"},
  {2, g_nStringIdOUT, "1"},
  {3, g_nStringIdQI, "1"},
  {3, g_nStringIdPARAMS, "outD.motor.reset"},
  {3, g_nStringIdOUT, "1"},
};

const SCFB_FBConnectionData FORTE_RESET_M::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdINIT), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_RESET_M::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_2, g_nStringIdREQ), 2},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_1, g_nStringIdREQ), 1},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_3, g_nStringIdREQ), 3},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_1, g_nStringIdINIT), 1},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_2, g_nStringIdINIT), 2},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_3, g_nStringIdINIT), 3},
};

const SCFB_FBNData FORTE_RESET_M::scm_stFBNData = {
  4, scm_astInternalFBs,
  2, scm_astEventConnections,
  6, scm_astFannedOutEventConnections,
  0, 0,
  0, 0,
  12, scm_astParamters
};


