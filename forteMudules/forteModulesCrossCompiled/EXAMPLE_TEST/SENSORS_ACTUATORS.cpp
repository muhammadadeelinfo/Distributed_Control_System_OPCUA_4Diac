/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SENSORS_ACTUATORS
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-03-29/adeel - null - 
 *************************************************************************/

#include "SENSORS_ACTUATORS.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SENSORS_ACTUATORS_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_SENSORS_ACTUATORS, g_nStringIdSENSORS_ACTUATORS)

const CStringDictionary::TStringId FORTE_SENSORS_ACTUATORS::scm_anDataInputNames[] = {g_nStringIdCTM_ACTIVATE_MP, g_nStringIdCTM_BRIDGE_F_I, g_nStringIdCTM_BRIGDE_B_I, g_nStringIdCTM_TROLLEY_F_I, g_nStringIdCTM_TROLLEY_B_I, g_nStringIdCTM_HOOK_U_I, g_nStringIdCTM_HOOK_D_I, g_nStringIdFME_ACTIVATE_MP, g_nStringIdFME_BRIDGE_F_I, g_nStringIdFME_BRIGDE_B_I, g_nStringIdFME_TROLLEY_F_I, g_nStringIdFME_TROLLEY_B_I, g_nStringIdFME_HOOK_U_I, g_nStringIdFME_HOOK_D_I, g_nStringIdFMA_ACTIVATE_MP, g_nStringIdE_STOP, g_nStringIdFMA_BRIDGE_F_I, g_nStringIdFMA_BRIGDE_B_I, g_nStringIdFMA_TROLLEY_F_I, g_nStringIdFMA_TROLLEY_B_I, g_nStringIdFMA_HOOK_U_I, g_nStringIdFMA_HOOK_D_I};

const CStringDictionary::TStringId FORTE_SENSORS_ACTUATORS::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_SENSORS_ACTUATORS::scm_anDataOutputNames[] = {g_nStringIdBRIDGE_P, g_nStringIdTROLLEY_P, g_nStringIdHOOK_P, g_nStringIdCRANE_DIS_S};

const CStringDictionary::TStringId FORTE_SENSORS_ACTUATORS::scm_anDataOutputTypeIds[] = {g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_SENSORS_ACTUATORS::scm_anEIWithIndexes[] = {0, -1};
const TDataIOID FORTE_SENSORS_ACTUATORS::scm_anEIWith[] = {3, 17, 21, 18, 20, 19, 16, 4, 14, 5, 13, 6, 12, 7, 11, 8, 10, 9, 2, 1, 0, 15, 255};
const CStringDictionary::TStringId FORTE_SENSORS_ACTUATORS::scm_anEventInputNames[] = {g_nStringIdREQ, g_nStringIdINIT};

const TDataIOID FORTE_SENSORS_ACTUATORS::scm_anEOWith[] = {0, 1, 3, 2, 255};
const TForteInt16 FORTE_SENSORS_ACTUATORS::scm_anEOWithIndexes[] = {-1, 0, -1};
const CStringDictionary::TStringId FORTE_SENSORS_ACTUATORS::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdS_A_E};

const SFBInterfaceSpec FORTE_SENSORS_ACTUATORS::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  22,  scm_anDataInputNames, scm_anDataInputTypeIds,
  4,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_SENSORS_ACTUATORS::scm_astInternalFBs[] = {
  {g_nStringIdHOOK_U, g_nStringIdQW},
  {g_nStringIdTROLLEY_F, g_nStringIdQW},
  {g_nStringIdBRIDGE_2_R, g_nStringIdQW},
  {g_nStringIdBRIDGE_1_R, g_nStringIdQW},
  {g_nStringIdBRIDGE_2_E, g_nStringIdQX},
  {g_nStringIdHOOK_E, g_nStringIdQX},
  {g_nStringIdTROLLEY_E, g_nStringIdQX},
  {g_nStringIdBRIDGE_1_E, g_nStringIdQX},
  {g_nStringIdIX, g_nStringIdIX},
  {g_nStringIdE_R_TRIG, g_nStringIdE_R_TRIG},
  {g_nStringIdE_CYCLE, g_nStringIdE_CYCLE},
  {g_nStringIdCRANES_DIS, g_nStringIdID},
  {g_nStringIdBRIDGE, g_nStringIdID},
  {g_nStringIdTROLLEY, g_nStringIdID},
  {g_nStringIdF_WORD_TO_INT, g_nStringIdF_DWORD_TO_INT},
  {g_nStringIdF_WORD_TO_INT_1, g_nStringIdF_DWORD_TO_INT},
  {g_nStringIdF_WORD_TO_INT_2, g_nStringIdF_DWORD_TO_INT},
  {g_nStringIdQX, g_nStringIdQW},
  {g_nStringIdQX_1, g_nStringIdQW},
  {g_nStringIdQX_2, g_nStringIdQW},
  {g_nStringIdQX_3, g_nStringIdQW},
  {g_nStringIdE_F_TRIG_1, g_nStringIdE_F_TRIG},
  {g_nStringIdE_R_TRIG_2, g_nStringIdE_R_TRIG},
  {g_nStringIdE_CYCLE_1, g_nStringIdE_CYCLE},
  {g_nStringIdEV3_CONTROLLER, g_nStringIdEV3_CONTROLLER},
  {g_nStringIdIW, g_nStringIdIW},
  {g_nStringIdF_DWORD_TO_INT, g_nStringIdF_WORD_TO_INT},
  {g_nStringIdMOTOR_F_B, g_nStringIdMOTOR_F_B},
  {g_nStringIdMOTOR_F_B_2, g_nStringIdMOTOR_F_B},
  {g_nStringIdMOTOR_F_B_3, g_nStringIdMOTOR_F_B},
  {g_nStringIdRESET_M, g_nStringIdRESET_M},
};

const SCFB_FBParameter FORTE_SENSORS_ACTUATORS::scm_astParamters[] = {
  {0, g_nStringIdQI, "1"},
  {0, g_nStringIdPARAMS, "outD.motor.pwm"},
  {0, g_nStringIdOUT, "40"},
  {1, g_nStringIdQI, "1"},
  {1, g_nStringIdPARAMS, "outC.motor.pwm"},
  {1, g_nStringIdOUT, "50"},
  {2, g_nStringIdQI, "1"},
  {2, g_nStringIdPARAMS, "outB.motor.pwm"},
  {2, g_nStringIdOUT, "50"},
  {3, g_nStringIdQI, "1"},
  {3, g_nStringIdPARAMS, "outA.motor.pwm"},
  {3, g_nStringIdOUT, "50"},
  {4, g_nStringIdQI, "1"},
  {4, g_nStringIdPARAMS, "outB.motor.enable"},
  {5, g_nStringIdQI, "1"},
  {5, g_nStringIdPARAMS, "outD.motor.enable"},
  {6, g_nStringIdQI, "1"},
  {6, g_nStringIdPARAMS, "outC.motor.enable"},
  {7, g_nStringIdQI, "1"},
  {7, g_nStringIdPARAMS, "outA.motor.enable"},
  {8, g_nStringIdQI, "1"},
  {8, g_nStringIdPARAMS, "in1.sensor.0"},
  {10, g_nStringIdDT, "T#1s"},
  {11, g_nStringIdQI, "1"},
  {11, g_nStringIdPARAMS, "outD.motor.position"},
  {12, g_nStringIdQI, "1"},
  {12, g_nStringIdPARAMS, "outC.motor.position"},
  {13, g_nStringIdQI, "1"},
  {13, g_nStringIdPARAMS, "outA.motor.position"},
  {17, g_nStringIdQI, "1"},
  {17, g_nStringIdPARAMS, "outA.motor.pwm"},
  {17, g_nStringIdOUT, "-50"},
  {18, g_nStringIdQI, "1"},
  {18, g_nStringIdPARAMS, "outB.motor.pwm"},
  {18, g_nStringIdOUT, "-50"},
  {19, g_nStringIdQI, "1"},
  {19, g_nStringIdPARAMS, "outC.motor.pwm"},
  {19, g_nStringIdOUT, "-50"},
  {20, g_nStringIdQI, "1"},
  {20, g_nStringIdPARAMS, "outD.motor.pwm"},
  {20, g_nStringIdOUT, "-40"},
  {23, g_nStringIdDT, "T#100ms"},
  {25, g_nStringIdQI, "1"},
  {25, g_nStringIdPARAMS, "in4.sensorw.0"},
};

const SCFB_FBConnectionData FORTE_SENSORS_ACTUATORS::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_1_E, g_nStringIdINITO), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_1_R, g_nStringIdINIT), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_2_E, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_2_R, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY_E, g_nStringIdINITO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY_F, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdHOOK_E, g_nStringIdINITO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdHOOK_U, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEI), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdEO), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdINIT), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE, g_nStringIdINITO), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCRANES_DIS, g_nStringIdINIT), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCRANES_DIS, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY, g_nStringIdINITO), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE, g_nStringIdINIT), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT_1, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT_1, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT_2, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_2, g_nStringIdEO), 22, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTART), 23},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdEO), 23, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdCNF), 24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_2, g_nStringIdEI), 22},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdREQ), 24},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdINITO), 24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_1_E, g_nStringIdINIT), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCRANES_DIS, g_nStringIdINITO), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIW, g_nStringIdINIT), 25},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCRANES_DIS, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIW, g_nStringIdREQ), 25},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIW, g_nStringIdCNF), 25, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIW, g_nStringIdINITO), 25, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT_2, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DWORD_TO_INT, g_nStringIdREQ), 26},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DWORD_TO_INT, g_nStringIdCNF), 26, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdS_A_E), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B, g_nStringIdCNF), 27, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_1_E, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdHOOK_U, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_3, g_nStringIdINIT), 20},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY_F, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_2, g_nStringIdINIT), 19},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_2_R, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_1, g_nStringIdINIT), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_1_R, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdINIT), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B, g_nStringIdF), 27, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_1_R, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B, g_nStringIdB), 27, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdREQ), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_2, g_nStringIdF), 28, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY_F, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_2, g_nStringIdB), 28, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_2, g_nStringIdREQ), 19},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_3, g_nStringIdF), 29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdHOOK_U, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_3, g_nStringIdB), 29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_3, g_nStringIdREQ), 20},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_3, g_nStringIdCNF), 29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdHOOK_E, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_2, g_nStringIdCNF), 28, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY_E, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdINITO), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRESET_M, g_nStringIdINIT), 30},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEO), 21, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE_1, g_nStringIdSTOP), 23},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdEO), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRESET_M, g_nStringIdREQ), 30},
};

const SCFB_FBFannedOutConnectionData FORTE_SENSORS_ACTUATORS::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_2_E, g_nStringIdINIT), 4},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY_E, g_nStringIdINIT), 6},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdHOOK_E, g_nStringIdINIT), 5},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdINIT), 24},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CYCLE, g_nStringIdSTART), 10},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdEI), 21},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B, g_nStringIdREQ), 27},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_2, g_nStringIdREQ), 28},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_3, g_nStringIdREQ), 29},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY, g_nStringIdINIT), 13},
  {24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_2_E, g_nStringIdREQ), 4},
  {29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_2_R, g_nStringIdREQ), 2},
  {30, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX_1, g_nStringIdREQ), 18},
};

const SCFB_FBConnectionData FORTE_SENSORS_ACTUATORS::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdIN), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG, g_nStringIdQI), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT, g_nStringIdOUT), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBRIDGE_P), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT_1, g_nStringIdOUT), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTROLLEY_P), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY, g_nStringIdIN), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT, g_nStringIdIN), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE, g_nStringIdIN), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT_1, g_nStringIdIN), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCRANES_DIS, g_nStringIdIN), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT_2, g_nStringIdIN), 16},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_ACTIVATE_MP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdCTM_ACTIVATE_MP), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdE_STOP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdE_STOP), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_BRIDGE_F_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdCTM_BRIDGE_F_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_TROLLEY_F_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdCTM_TROLLEY_F_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_TROLLEY_B_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdCTM_TROLLEY_B_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_HOOK_U_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdCTM_HOOK_U_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_HOOK_D_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdCTM_HOOK_D_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_ACTIVATE_MP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFME_ACTIVATE_MP), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_BRIDGE_F_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFME_BRIDGE_F_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_TROLLEY_F_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFME_TROLLEY_F_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_TROLLEY_B_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFME_TROLLEY_B_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_HOOK_U_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFME_HOOK_U_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_HOOK_D_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFME_HOOK_D_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_ACTIVATE_MP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFMA_ACTIVATE_MP), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_BRIDGE_F_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFMA_BRIDGE_F_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_TROLLEY_F_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFMA_TROLLEY_F_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_TROLLEY_B_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFMA_TROLLEY_B_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_HOOK_U_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFMA_HOOK_U_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_HOOK_D_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFMA_HOOK_D_I), 24},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdM_P), 24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_F_TRIG_1, g_nStringIdQI), 21},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIW, g_nStringIdIN), 25, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DWORD_TO_INT, g_nStringIdIN), 26},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_DWORD_TO_INT, g_nStringIdOUT), 26, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCRANE_DIS_S), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_WORD_TO_INT_2, g_nStringIdOUT), 16, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdHOOK_P), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCTM_BRIGDE_B_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdCTM_BRIDGE_B_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFMA_BRIGDE_B_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFMA_BRIDGE_B_I), 24},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdFME_BRIGDE_B_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdFME_BRIDGE_B_I), 24},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B, g_nStringIdF_B), 27, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_1_E, g_nStringIdOUT), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_2, g_nStringIdF_B), 28, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdTROLLEY_E, g_nStringIdOUT), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_3, g_nStringIdF_B), 29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdHOOK_E, g_nStringIdOUT), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdBRIDGE_F), 24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B, g_nStringIdM_F), 27},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdBRIDGE_B), 24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B, g_nStringIdM_B), 27},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdTROLLEY_F), 24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_2, g_nStringIdM_F), 28},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdTROLLEY_B), 24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_2, g_nStringIdM_B), 28},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdHOOK_U), 24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_3, g_nStringIdM_F), 29},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdEV3_CONTROLLER, g_nStringIdHOOK_D), 24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMOTOR_F_B_3, g_nStringIdM_B), 29},
};

const SCFB_FBFannedOutConnectionData FORTE_SENSORS_ACTUATORS::scm_astFannedOutDataConnections[] = {
  {25, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_R_TRIG_2, g_nStringIdQI), 22},
  {32, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBRIDGE_2_E, g_nStringIdOUT), 4},
};

const SCFB_FBNData FORTE_SENSORS_ACTUATORS::scm_stFBNData = {
  31, scm_astInternalFBs,
  40, scm_astEventConnections,
  13, scm_astFannedOutEventConnections,
  41, scm_astDataConnections,
  2, scm_astFannedOutDataConnections,
  44, scm_astParamters
};


