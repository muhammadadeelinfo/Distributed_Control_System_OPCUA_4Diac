/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: PUBLISH_OPCUA_4
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-02-09/iotdeveloperpk - null - 
 *************************************************************************/

#include "PUBLISH_OPCUA_4.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "PUBLISH_OPCUA_4_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_PUBLISH_OPCUA_4, g_nStringIdPUBLISH_OPCUA_4)

const CStringDictionary::TStringId FORTE_PUBLISH_OPCUA_4::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdSD_1, g_nStringIdSD_2, g_nStringIdSD_3, g_nStringIdSD_4};

const CStringDictionary::TStringId FORTE_PUBLISH_OPCUA_4::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_PUBLISH_OPCUA_4::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_PUBLISH_OPCUA_4::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TForteInt16 FORTE_PUBLISH_OPCUA_4::scm_anEIWithIndexes[] = {0, 6};
const TDataIOID FORTE_PUBLISH_OPCUA_4::scm_anEIWith[] = {0, 1, 2, 3, 4, 255, 0, 1, 2, 3, 4, 255};
const CStringDictionary::TStringId FORTE_PUBLISH_OPCUA_4::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_PUBLISH_OPCUA_4::scm_anEOWith[] = {0, 1, 255, 0, 1, 255};
const TForteInt16 FORTE_PUBLISH_OPCUA_4::scm_anEOWithIndexes[] = {0, 3, -1};
const CStringDictionary::TStringId FORTE_PUBLISH_OPCUA_4::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_PUBLISH_OPCUA_4::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  5,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_PUBLISH_OPCUA_4::scm_astInternalFBs[] = {
  {g_nStringIdPUBLISH_1, g_nStringIdPUBLISH_1},
  {g_nStringIdPUBLISH_1_1, g_nStringIdPUBLISH_1},
  {g_nStringIdPUBLISH_1_2, g_nStringIdPUBLISH_1},
  {g_nStringIdPUBLISH_1_3, g_nStringIdPUBLISH_1},
  {g_nStringIdvariable1, g_nStringIdINT2INT},
  {g_nStringIdvariable2, g_nStringIdINT2INT},
  {g_nStringIdvariable3, g_nStringIdINT2INT},
  {g_nStringIdvariable4, g_nStringIdINT2INT},
};

const SCFB_FBParameter FORTE_PUBLISH_OPCUA_4::scm_astParamters[] = {
  {0, g_nStringIdID, "opc_ua[/Objects/1:variables]"},
  {1, g_nStringIdID, "opc_ua[/Objects/1:variables]"},
  {2, g_nStringIdID, "opc_ua[/Objects/1:variables]"},
  {3, g_nStringIdID, "opc_ua[/Objects/1:variables]"},
};

const SCFB_FBConnectionData FORTE_PUBLISH_OPCUA_4::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_3, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_2, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable1, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable4, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_3, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable3, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_2, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable2, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable1, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_PUBLISH_OPCUA_4::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_1, g_nStringIdINIT), 1},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_2, g_nStringIdINIT), 2},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_3, g_nStringIdINIT), 3},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable2, g_nStringIdREQ), 5},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable3, g_nStringIdREQ), 6},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable4, g_nStringIdREQ), 7},
};

const SCFB_FBConnectionData FORTE_PUBLISH_OPCUA_4::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable1, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdSD_1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable2, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_1, g_nStringIdSD_1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable3, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_2, g_nStringIdSD_1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable4, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_3, g_nStringIdSD_1), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdSTATUS), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSD_1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable1, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSD_2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable2, g_nStringIdIN), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSD_3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable3, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSD_4), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdvariable4, g_nStringIdIN), 7},
};

const SCFB_FBFannedOutConnectionData FORTE_PUBLISH_OPCUA_4::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_2, g_nStringIdQI), 2},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_1, g_nStringIdQI), 1},
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1_3, g_nStringIdQI), 3},
};

const SCFB_FBNData FORTE_PUBLISH_OPCUA_4::scm_stFBNData = {
  8, scm_astInternalFBs,
  11, scm_astEventConnections,
  6, scm_astFannedOutEventConnections,
  11, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  4, scm_astParamters
};


