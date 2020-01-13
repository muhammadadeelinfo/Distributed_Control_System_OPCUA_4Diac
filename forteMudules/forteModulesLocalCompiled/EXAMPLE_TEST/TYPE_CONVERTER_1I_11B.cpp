/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TYPE_CONVERTER_1I_11B
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-04-02/adeel - null - 
 *************************************************************************/

#include "TYPE_CONVERTER_1I_11B.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TYPE_CONVERTER_1I_11B_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_TYPE_CONVERTER_1I_11B, g_nStringIdTYPE_CONVERTER_1I_11B)

const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_1I_11B::scm_anDataInputNames[] = {g_nStringIdBOOL1IN, g_nStringIdINT2IN, g_nStringIdBOOL3IN, g_nStringIdBOOL4IN, g_nStringIdBOOL5IN, g_nStringIdBOOL6IN, g_nStringIdBOOL7IN, g_nStringIdBOOL8IN, g_nStringIdBOOL9IN, g_nStringIdBOOL10IN, g_nStringIdBOOL11IN, g_nStringIdBOOL12IN};

const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_1I_11B::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_1I_11B::scm_anDataOutputNames[] = {g_nStringIdBOOL1OUT, g_nStringIdINT2OUT, g_nStringIdBOOL3OUT, g_nStringIdBOOL4OUT, g_nStringIdBOOL5OUT, g_nStringIdBOOL6OUT, g_nStringIdBOOL7OUT, g_nStringIdBOOL8OUT, g_nStringIdBOOL9OUT, g_nStringIdBOOL10OUT, g_nStringIdBOOL11OUT, g_nStringIdBOOL12OUT};

const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_1I_11B::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_TYPE_CONVERTER_1I_11B::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_TYPE_CONVERTER_1I_11B::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 255};
const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_1I_11B::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_TYPE_CONVERTER_1I_11B::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 255};
const TForteInt16 FORTE_TYPE_CONVERTER_1I_11B::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_TYPE_CONVERTER_1I_11B::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_TYPE_CONVERTER_1I_11B::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  12,  scm_anDataInputNames, scm_anDataInputTypeIds,
  12,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_TYPE_CONVERTER_1I_11B::scm_astInternalFBs[] = {
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
};

const SCFB_FBConnectionData FORTE_TYPE_CONVERTER_1I_11B::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdA, g_nStringIdREQ), 9},
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
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdL, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_TYPE_CONVERTER_1I_11B::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINT2IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdB, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINT2OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL1IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdA, g_nStringIdIN), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL3IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdC, g_nStringIdIN), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL4IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdD, g_nStringIdIN), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL5IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL6IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF, g_nStringIdIN), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL7IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdG, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL8IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdH, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL9IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdI, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL10IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdJ, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL11IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdK, g_nStringIdIN), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL12IN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdL, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdA, g_nStringIdOUT), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL1OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdC, g_nStringIdOUT), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL3OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdD, g_nStringIdOUT), 11, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL4OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL5OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL6OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdG, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL7OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdH, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL8OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdI, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL9OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdJ, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL10OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdK, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL11OUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdL, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdBOOL12OUT), -1},
};

const SCFB_FBNData FORTE_TYPE_CONVERTER_1I_11B::scm_stFBNData = {
  12, scm_astInternalFBs,
  13, scm_astEventConnections,
  0, 0,
  24, scm_astDataConnections,
  0, 0,
  0, 0
};


