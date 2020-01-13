/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SUBSCRIBE_OPCUA_4
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-02-09/iotdeveloperpk - null - 
 *************************************************************************/

#include "SUBSCRIBE_OPCUA_4.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SUBSCRIBE_OPCUA_4_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_SUBSCRIBE_OPCUA_4, g_nStringIdSUBSCRIBE_OPCUA_4)

const CStringDictionary::TStringId FORTE_SUBSCRIBE_OPCUA_4::scm_anDataInputNames[] = {g_nStringIdQI};

const CStringDictionary::TStringId FORTE_SUBSCRIBE_OPCUA_4::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_SUBSCRIBE_OPCUA_4::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdRD_1, g_nStringIdRD_2, g_nStringIdRD_3, g_nStringIdRD_4};

const CStringDictionary::TStringId FORTE_SUBSCRIBE_OPCUA_4::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_SUBSCRIBE_OPCUA_4::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_SUBSCRIBE_OPCUA_4::scm_anEIWith[] = {0, 255, 0, 255};
const CStringDictionary::TStringId FORTE_SUBSCRIBE_OPCUA_4::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_SUBSCRIBE_OPCUA_4::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 255, 0, 1, 2, 3, 4, 5, 255};
const TForteInt16 FORTE_SUBSCRIBE_OPCUA_4::scm_anEOWithIndexes[] = {0, 7, -1};
const CStringDictionary::TStringId FORTE_SUBSCRIBE_OPCUA_4::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_SUBSCRIBE_OPCUA_4::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  6,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_SUBSCRIBE_OPCUA_4::scm_astInternalFBs[] = {
  {g_nStringIdINT2INT, g_nStringIdINT2INT},
  {g_nStringIdINT2INT_1, g_nStringIdINT2INT},
  {g_nStringIdINT2INT_2, g_nStringIdINT2INT},
  {g_nStringIdINT2INT_3, g_nStringIdINT2INT},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdSUBSCRIBE_1_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdSUBSCRIBE_1_2, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdSUBSCRIBE_1_3, g_nStringIdSUBSCRIBE_1},
};

const SCFB_FBParameter FORTE_SUBSCRIBE_OPCUA_4::scm_astParamters[] = {
  {4, g_nStringIdID, "opc_ua[opc.tcp://localhost:4840#/Objects/1:variables/variable1/OUT]"},
  {5, g_nStringIdID, "opc_ua[opc.tcp://localhost:4840#/Objects/1:variables/variable2/OUT]"},
  {6, g_nStringIdID, "opc_ua[opc.tcp://localhost:4840#/Objects/1:variables/variable3/OUT]"},
  {7, g_nStringIdID, "opc_ua[opc.tcp://localhost:4840#/Objects/1:variables/variable4/OUT]"},
};

const SCFB_FBConnectionData FORTE_SUBSCRIBE_OPCUA_4::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRSP), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_1, g_nStringIdIND), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_2, g_nStringIdIND), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_2, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_3, g_nStringIdIND), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_3, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_2, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_3, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_SUBSCRIBE_OPCUA_4::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_1, g_nStringIdINIT), 5},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_2, g_nStringIdINIT), 6},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_3, g_nStringIdINIT), 7},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_1, g_nStringIdRSP), 5},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_2, g_nStringIdRSP), 6},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_3, g_nStringIdRSP), 7},
};

const SCFB_FBConnectionData FORTE_SUBSCRIBE_OPCUA_4::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_1, g_nStringIdRD_1), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_1, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_2, g_nStringIdRD_1), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_2, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_3, g_nStringIdRD_1), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_3, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdQI), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdQO), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdSTATUS), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRD_1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_1, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRD_2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_2, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRD_3), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT_3, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRD_4), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_SUBSCRIBE_OPCUA_4::scm_astFannedOutDataConnections[] = {
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_1, g_nStringIdQI), 5},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_2, g_nStringIdQI), 6},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1_3, g_nStringIdQI), 7},
};

const SCFB_FBNData FORTE_SUBSCRIBE_OPCUA_4::scm_stFBNData = {
  8, scm_astInternalFBs,
  11, scm_astEventConnections,
  6, scm_astFannedOutEventConnections,
  11, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  4, scm_astParamters
};


