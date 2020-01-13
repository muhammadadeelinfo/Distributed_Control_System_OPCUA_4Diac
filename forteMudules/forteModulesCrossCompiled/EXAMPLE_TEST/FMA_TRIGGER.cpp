/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FMA_TRIGGER
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-11/adeel - null - 
 *************************************************************************/

#include "FMA_TRIGGER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FMA_TRIGGER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_FMA_TRIGGER, g_nStringIdFMA_TRIGGER)

const CStringDictionary::TStringId FORTE_FMA_TRIGGER::scm_anDataInputNames[] = {g_nStringIdE_STOP, g_nStringIdN_STOP};

const CStringDictionary::TStringId FORTE_FMA_TRIGGER::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_FMA_TRIGGER::scm_anEIWithIndexes[] = {-1, 0};
const TDataIOID FORTE_FMA_TRIGGER::scm_anEIWith[] = {0, 1, 255};
const CStringDictionary::TStringId FORTE_FMA_TRIGGER::scm_anEventInputNames[] = {g_nStringIdE_IN, g_nStringIdREQ};

const TForteInt16 FORTE_FMA_TRIGGER::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_FMA_TRIGGER::scm_anEventOutputNames[] = {g_nStringIdE_OUT};

const SFBInterfaceSpec FORTE_FMA_TRIGGER::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  0, 0,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_FMA_TRIGGER::scm_astInternalFBs[] = {
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdE_R_TRIG, g_nStringIdE_R_TRIG},
  {g_nStringIdE_F_TRIG, g_nStringIdE_F_TRIG},
  {g_nStringIdPERMITTER, g_nStringIdPERMITTER},
};

const SCFB_FBParameter FORTE_FMA_TRIGGER::scm_astParamters[] = {
  {0, g_nStringIdDT, "T#100ms"},
};

const SCFB_FBConnectionData FORTE_FMA_TRIGGER::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTOP), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPERMITTER, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPERMITTER, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEI), 1},
};

const SCFB_FBFannedOutConnectionData FORTE_FMA_TRIGGER::scm_astFannedOutEventConnections[] = {
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdEI), 2},
};

const SCFB_FBConnectionData FORTE_FMA_TRIGGER::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdE_STOP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPERMITTER, g_nStringIdE_STOP), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdN_STOP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPERMITTER, g_nStringIdN_STOP), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPERMITTER, g_nStringIdOUTPUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdQI), 1},
};

const SCFB_FBFannedOutConnectionData FORTE_FMA_TRIGGER::scm_astFannedOutDataConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG, g_nStringIdQI), 2},
};

const SCFB_FBNData FORTE_FMA_TRIGGER::scm_stFBNData = {
  4, scm_astInternalFBs,
  4, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  3, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  1, scm_astParamters
};


