/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TYPE_CONVERTER_7I_9B
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-02/adeel - null - 
 *************************************************************************/

#include "TYPE_CONVERTER_7I_9B.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TYPE_CONVERTER_7I_9B_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_TYPE_CONVERTER_7I_9B, g_nStringIdTYPE_CONVERTER_7I_9B)

const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_7I_9B::scm_anDataInputNames[] = {g_nStringIdE_STOP_I, g_nStringIdTEXT_BOX_I, g_nStringIdN_CTM_I, g_nStringIdN_FME_I, g_nStringIdN_FMA_I, g_nStringIdCHOOSE_CRANE_I, g_nStringIdACTIVATE_BRIDGE_I, g_nStringIdACTIVATE_TROLLEY_I, g_nStringIdHOOK_U_I, g_nStringIdHOOK_D_I, g_nStringIdX_CTM_I, g_nStringIdY_CTM_I, g_nStringIdX_FME_I, g_nStringIdY_FME_I, g_nStringIdX_FMA_I, g_nStringIdY_FMA_I};

const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_7I_9B::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_7I_9B::scm_anDataOutputNames[] = {g_nStringIdE_STOP_O, g_nStringIdTEXT_BOX_O, g_nStringIdN_CTM_O, g_nStringIdN_FME_O, g_nStringIdN_FMA_O, g_nStringIdCHOOSE_CRANE_O, g_nStringIdACTIVATE_BRIDGE_O, g_nStringIdACTIVATE_TROLLEY_O, g_nStringIdHOOK_U_O, g_nStringIdHOOK_D_O, g_nStringIdX_CTM_O, g_nStringIdY_CTM_O, g_nStringIdX_FME_O, g_nStringIdY_FME_O, g_nStringIdX_FMA_O, g_nStringIdY_FMA_O};

const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_7I_9B::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_TYPE_CONVERTER_7I_9B::scm_anEIWithIndexes[] = {0, 11};
const TDataIOID FORTE_TYPE_CONVERTER_7I_9B::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 255, 10, 11, 12, 13, 14, 15, 255};
const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_7I_9B::scm_anEventInputNames[] = {g_nStringIdCONTROL_E_I, g_nStringIdLOC_E_I};

const TDataIOID FORTE_TYPE_CONVERTER_7I_9B::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 255, 10, 11, 12, 13, 14, 15, 255};
const TForteInt16 FORTE_TYPE_CONVERTER_7I_9B::scm_anEOWithIndexes[] = {0, 11, -1};
const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_7I_9B::scm_anEventOutputNames[] = {g_nStringIdCONTROL_E_O, g_nStringIdLOC_E_O};

const SFBInterfaceSpec FORTE_TYPE_CONVERTER_7I_9B::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  16,  scm_anDataInputNames, scm_anDataInputTypeIds,
  16,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_TYPE_CONVERTER_7I_9B::scm_astInternalFBs[] = {
  {g_nStringIdB, g_nStringIdINT2INT},
  {g_nStringIdG, g_nStringIdBOOL2BOOL},
  {g_nStringIdH, g_nStringIdBOOL2BOOL},
  {g_nStringIdI, g_nStringIdBOOL2BOOL},
  {g_nStringIdJ, g_nStringIdBOOL2BOOL},
  {g_nStringIdK, g_nStringIdBOOL2BOOL},
  {g_nStringIdL, g_nStringIdBOOL2BOOL},
  {g_nStringIdE, g_nStringIdBOOL2BOOL},
  {g_nStringIdF, g_nStringIdBOOL2BOOL},
  {g_nStringIdA, g_nStringIdBOOL2BOOL},
  {g_nStringIdC, g_nStringIdBOOL2BOOL},
  {g_nStringIdD, g_nStringIdBOOL2BOOL},
  {g_nStringIdB_1, g_nStringIdINT2INT},
  {g_nStringIdB_2, g_nStringIdINT2INT},
  {g_nStringIdB_3, g_nStringIdINT2INT},
  {g_nStringIdB_4, g_nStringIdINT2INT},
  {g_nStringIdB_5, g_nStringIdINT2INT},
  {g_nStringIdB_6, g_nStringIdINT2INT},
};

const SCFB_FBConnectionData FORTE_TYPE_CONVERTER_7I_9B::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCONTROL_E_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdA, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdA, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdC, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdC, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdD, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdD, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdG, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdG, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdH, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdH, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdI, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdI, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdJ, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdJ, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdK, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdK, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdL, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdL, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCONTROL_E_O), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdLOC_E_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_1, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_6, g_nStringIdCNF), 17, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdLOC_E_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_1, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_2, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_2, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_3, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_3, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_4, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_4, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_5, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_5, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_6, g_nStringIdREQ), 17},
};

const SCFB_FBConnectionData FORTE_TYPE_CONVERTER_7I_9B::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTEXT_BOX_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdTEXT_BOX_O), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdE_STOP_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdA, g_nStringIdIN), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdN_CTM_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdC, g_nStringIdIN), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdN_FME_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdD, g_nStringIdIN), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdN_FMA_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCHOOSE_CRANE_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF, g_nStringIdIN), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdACTIVATE_BRIDGE_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdG, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdACTIVATE_TROLLEY_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdH, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdHOOK_U_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdI, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdHOOK_D_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdJ, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdA, g_nStringIdOUT), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdE_STOP_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdC, g_nStringIdOUT), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdN_CTM_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdD, g_nStringIdOUT), 11, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdN_FME_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdN_FMA_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCHOOSE_CRANE_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdG, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdACTIVATE_BRIDGE_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdH, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdACTIVATE_TROLLEY_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdI, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdHOOK_U_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdJ, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdHOOK_D_O), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdX_CTM_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_1, g_nStringIdIN), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdY_CTM_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_2, g_nStringIdIN), 13},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdX_FME_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_3, g_nStringIdIN), 14},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdY_FME_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_4, g_nStringIdIN), 15},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdX_FMA_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_5, g_nStringIdIN), 16},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdY_FMA_I), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_6, g_nStringIdIN), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_1, g_nStringIdOUT), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdX_CTM_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_2, g_nStringIdOUT), 13, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdY_CTM_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_3, g_nStringIdOUT), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdX_FME_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_4, g_nStringIdOUT), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdY_FME_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_5, g_nStringIdOUT), 16, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdX_FMA_O), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB_6, g_nStringIdOUT), 17, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdY_FMA_O), -1},
};

const SCFB_FBNData FORTE_TYPE_CONVERTER_7I_9B::scm_stFBNData = {
  18, scm_astInternalFBs,
  20, scm_astEventConnections,
  0, 0,
  32, scm_astDataConnections,
  0, 0,
  0, 0
};


