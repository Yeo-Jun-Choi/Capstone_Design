#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "OtherControlComponents_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "OtherControlComponents.h"
#include "OtherControlComponents_capi.h"
#include "OtherControlComponents_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING (
 "OtherControlComponents/Controller/Pitch Control/ PID Pitch/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1
, TARGET_STRING (
 "OtherControlComponents/Controller/Pitch Control/ PID Pitch/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1
, TARGET_STRING (
 "OtherControlComponents/Controller/Pitch Control/PID YOmega/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 3 , - 1
, TARGET_STRING (
 "OtherControlComponents/Controller/Pitch Control/PID YOmega/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 4 , - 1
, TARGET_STRING (
 "OtherControlComponents/Controller/Roll Control/ PID Roll/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 5 , - 1
, TARGET_STRING (
 "OtherControlComponents/Controller/Roll Control/ PID Roll/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 6 , - 1
, TARGET_STRING (
 "OtherControlComponents/Controller/Roll Control/ PID XOmega/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 7 , - 1
, TARGET_STRING (
 "OtherControlComponents/Controller/Roll Control/ PID XOmega/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void OtherControlComponents_InitializeDataAddr ( void * dataAddr [ ] )
{ dataAddr [ 0 ] = ( void * ) ( & iejl1ay1w25 . dcrr1aieb4 ) ; dataAddr [ 1 ]
= ( void * ) ( & iejl1ay1w25 . f04yokzbrn ) ; dataAddr [ 2 ] = ( void * ) ( &
iejl1ay1w25 . e01oxlmf1l ) ; dataAddr [ 3 ] = ( void * ) ( & iejl1ay1w25 .
azhiykzg5k ) ; dataAddr [ 4 ] = ( void * ) ( & iejl1ay1w25 . lw2vefx24z ) ;
dataAddr [ 5 ] = ( void * ) ( & iejl1ay1w25 . gev2wbbyu3 ) ; dataAddr [ 6 ] =
( void * ) ( & iejl1ay1w25 . h3dem55g50 ) ; dataAddr [ 7 ] = ( void * ) ( &
iejl1ay1w25 . gif54btgsw ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void OtherControlComponents_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void OtherControlComponents_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ;
loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3
] = ( NULL ) ; loggingPtrs [ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ;
loggingPtrs [ 6 ] = ( NULL ) ; loggingPtrs [ 7 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , SS_SINGLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 4 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 4 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 8 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1507574128U , 3874409010U , 1570949146U ,
3479382965U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * OtherControlComponents_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void OtherControlComponents_InitializeSystemRan ( lij0uujly1 * const
kmnlllhkv2 , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( kmnlllhkv2 ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) &
iejl1ay1w25 . b43lfpg0uy ; systemRan [ 2 ] = ( NULL ) ; systemRan [ 3 ] = (
NULL ) ; systemTid [ 1 ] = blo2ixfbbd [ 0 ] ; systemTid [ 2 ] = blo2ixfbbd [
0 ] ; systemTid [ 3 ] = blo2ixfbbd [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [
2 ] = 0 ; rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void OtherControlComponents_InitializeDataMapInfo ( lij0uujly1 * const
kmnlllhkv2 , void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion (
kmnlllhkv2 -> DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( kmnlllhkv2 ->
DataMapInfo . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( kmnlllhkv2
-> DataMapInfo . mmi , & mmiStaticInfoLogging ) ;
OtherControlComponents_InitializeDataAddr ( kmnlllhkv2 -> DataMapInfo .
dataAddress ) ; rtwCAPI_SetDataAddressMap ( kmnlllhkv2 -> DataMapInfo . mmi ,
kmnlllhkv2 -> DataMapInfo . dataAddress ) ;
OtherControlComponents_InitializeVarDimsAddr ( kmnlllhkv2 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( kmnlllhkv2 -> DataMapInfo .
mmi , kmnlllhkv2 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
kmnlllhkv2 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
kmnlllhkv2 -> DataMapInfo . mmi , ( NULL ) ) ;
OtherControlComponents_InitializeLoggingFunctions ( kmnlllhkv2 -> DataMapInfo
. loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( kmnlllhkv2 -> DataMapInfo . mmi ,
kmnlllhkv2 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
kmnlllhkv2 -> DataMapInfo . mmi , & kmnlllhkv2 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( kmnlllhkv2 -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( kmnlllhkv2 -> DataMapInfo .
mmi , 0 ) ; OtherControlComponents_InitializeSystemRan ( kmnlllhkv2 ,
kmnlllhkv2 -> DataMapInfo . systemRan , kmnlllhkv2 -> DataMapInfo . systemTid
, sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( kmnlllhkv2 -> DataMapInfo
. mmi , kmnlllhkv2 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
kmnlllhkv2 -> DataMapInfo . mmi , kmnlllhkv2 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( kmnlllhkv2 -> DataMapInfo . mmi , & blo2ixfbbd [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void OtherControlComponents_host_InitializeDataMapInfo (
OtherControlComponents_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
