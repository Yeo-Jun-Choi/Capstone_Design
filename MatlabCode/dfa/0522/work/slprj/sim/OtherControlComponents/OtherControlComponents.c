#include "OtherControlComponents_capi.h"
#include "OtherControlComponents.h"
#include "OtherControlComponents_private.h"
int_T blo2ixfbbd [ 2 ] ; const ControllerBus
OtherControlComponents_rtZControllerBus = { 0.0F , 0.0F , 0.0F , { 0U , 0U ,
0U , 0U } } ; static RegMdlInfo rtMdlInfo_OtherControlComponents [ 63 ] = { {
"pgvqcqg2vbe" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "pgvqcqg2vb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "emqcscnpy3l" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "id0whyie1yv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "cwwpdya2tp3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "dwsu3nxlykk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "fll2lht2013" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "oeltasm4bgl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "bfg0uttp1dh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "injt22dnup" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "djcsspzgbtv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "ib0zer0fwx3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "fr5g3wzb34g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "cs1zkeeqmuy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "cgxcgbinflf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "emqcscnpy3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "id0whyie1y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "cwwpdya2tp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "dwsu3nxlyk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "fll2lht201" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "oeltasm4bg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "bfg0uttp1d" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "djcsspzgbt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "ib0zer0fwx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "fr5g3wzb34" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "cs1zkeeqmu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "cgxcgbinfl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "halzpk3ef3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "bjmabliddk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "kb4qmvlpsl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "lvkwh0ocut" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "ikll3qr0xq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "mthvo2tq05" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "fmdpyfumq2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "admxrvikso" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "jwhbtu1nsx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "otd0dbz4ze" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "o4hjb3vm0y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "OtherControlComponents" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "ndqgflts4zi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "blo2ixfbbd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "iejl1ay1w25" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "c5bln4htjhu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "cc1sm0ukfc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "lij0uujly1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OtherControlComponents" } , { "MotorCommands" , MDL_INFO_ID_DATA_TYPE , 0 ,
- 1 , ( NULL ) } , { "PWMBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "ControllerBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"NavigationStates" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_OtherControlComponents_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OtherControlComponents" }
, { "mr_OtherControlComponents_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "OtherControlComponents" } , {
"mr_OtherControlComponents_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "OtherControlComponents" } , { "OtherControlComponents.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "OtherControlComponents.c"
, MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "OtherControlComponents" } }
; nwg45kg2r4f fr5g3wzb34 = { - 0.00457687862F , - 0.0496012904F , -
0.00552577246F , - 0.0568842664F , 0.0142135443F , - 0.12132892F ,
0.0131100649F , - 0.0944725F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F
, 0.0F , 11.2352352F , 76.7547913F , 8.72815F , 78.8436356F , 0.161968261F ,
- 0.617679775F , 0.163786873F , - 0.464796692F , 0.01F , 0.01F , 0.01F ,
0.01F , 0.01F , 0.01F , 0.01F , 0.01F , { 1.0F , 1.0F , 1.0F , 1.0F } , {
0.0F , 1.0F , 0.0F , - 1.0F } , { 1.0F , 0.0F , - 1.0F , 0.0F } , 0.1F , 4.0F
, - 4.0F , 0.0F , 0.0F , 0.0F , 0.0F , - 1.0F , - 1.0F , 4.0F , 4.0F , 0.0F ,
4.0F , 4.0F , 0.0F , 4.0F , 4.0F , 0.0F , 4.0F , 4.0F , 0.0F , { 0.0F , 0.0F
, 0.0F , 0.0F } } ; pgvqcqg2vbe pgvqcqg2vb ; cgxcgbinflf c5bln4htjhu ;
cs1zkeeqmuy iejl1ay1w25 ; void o4hjb3vm0y ( void ) { lij0uujly1 * const
kmnlllhkv2 = & ( pgvqcqg2vb . rtm ) ; if ( ( ssGetSimMode ( kmnlllhkv2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( kmnlllhkv2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( kmnlllhkv2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( kmnlllhkv2
-> _mdlRefSfcnS ) ) { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "VerticalRate" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "VerticalRate" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"OtherControlComponents/Controller/Vertical Control/In3" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "VerticalRate" ) ; sdiAsyncQueueHandle hForEachParent
= ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_SINGLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( kmnlllhkv2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , kmnlllhkv2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } iejl1ay1w25 . fe2wzclgut . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , kmnlllhkv2 -> DataMapInfo
. mmi . InstanceMap . fullPath , "7f5e3659-7a7f-4a70-8bcd-a1bb20ad2c29" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
iejl1ay1w25 . fe2wzclgut . AQHandles ) { sdiSetSignalSampleTimeString (
iejl1ay1w25 . fe2wzclgut . AQHandles , "0.01" , 0.01 , rtmGetTFinal (
kmnlllhkv2 ) ) ; sdiSetRunStartTime ( iejl1ay1w25 . fe2wzclgut . AQHandles ,
rtmGetTaskTime ( kmnlllhkv2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings (
iejl1ay1w25 . fe2wzclgut . AQHandles , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( iejl1ay1w25 . fe2wzclgut . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , iejl1ay1w25 .
fe2wzclgut . AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName )
{ sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } } } void admxrvikso ( void ) { iejl1ay1w25
. f04yokzbrn = fr5g3wzb34 . P_12 ; iejl1ay1w25 . dcrr1aieb4 = fr5g3wzb34 .
P_8 ; iejl1ay1w25 . azhiykzg5k = fr5g3wzb34 . P_13 ; iejl1ay1w25 . e01oxlmf1l
= fr5g3wzb34 . P_9 ; iejl1ay1w25 . gev2wbbyu3 = fr5g3wzb34 . P_14 ;
iejl1ay1w25 . lw2vefx24z = fr5g3wzb34 . P_10 ; iejl1ay1w25 . gif54btgsw =
fr5g3wzb34 . P_15 ; iejl1ay1w25 . h3dem55g50 = fr5g3wzb34 . P_11 ; } void
lvkwh0ocut ( void ) { iejl1ay1w25 . bkb2rdjwjo = false ; } void
OtherControlComponents ( const boolean_T * ltf4qte0zg , const real32_T *
g0hy0q3l50 , const real32_T * pjv4agzcie , const real32_T * jhrqrunbya ,
const NavigationStates * hqyqxgwefg , real32_T * hhdo2il34x , real32_T *
exphpnjrtd , real32_T * ercqwcgzqg , real32_T * gmh4qc2jfn , real32_T *
bocvdn2jmg , real32_T * kdxo20h1kt , real32_T * el1y503i4y , real32_T *
isqs5n15me ) { lij0uujly1 * const kmnlllhkv2 = & ( pgvqcqg2vb . rtm ) ;
real32_T he4ecpjfem [ 4 ] ; real32_T mb241f5rzr ; real32_T ipjw4liyjv ;
real32_T jspnfmkmhe ; real32_T jigrz5kbpk ; real32_T dbu5nxndpi ; real32_T
bjupoxtsbi ; real32_T epjnnxll4w ; real32_T gy3zl5hupj ; real32_T m0nic5i3yv
; real32_T mjkaonouhh ; if ( * ltf4qte0zg ) { if ( ! iejl1ay1w25 . bkb2rdjwjo
) { if ( rtmGetTaskTime ( kmnlllhkv2 , 0 ) != rtmGetTStart ( kmnlllhkv2 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( kmnlllhkv2 -> _mdlRefSfcnS ) ; }
iejl1ay1w25 . bkb2rdjwjo = true ; } mjkaonouhh = * g0hy0q3l50 - hqyqxgwefg ->
Pitch ; c5bln4htjhu . dzccvabsvl = ( fr5g3wzb34 . P_0 * mjkaonouhh -
iejl1ay1w25 . dcrr1aieb4 ) * fr5g3wzb34 . P_16 ; m0nic5i3yv = ( ( fr5g3wzb34
. P_20 * mjkaonouhh + iejl1ay1w25 . f04yokzbrn ) + c5bln4htjhu . dzccvabsvl )
- hqyqxgwefg -> PitchRate ; c5bln4htjhu . kutyo51t4o = ( fr5g3wzb34 . P_1 *
m0nic5i3yv - iejl1ay1w25 . e01oxlmf1l ) * fr5g3wzb34 . P_17 ; gy3zl5hupj = *
pjv4agzcie - hqyqxgwefg -> Roll ; c5bln4htjhu . fwzhwtn4xi = ( fr5g3wzb34 .
P_2 * gy3zl5hupj - iejl1ay1w25 . lw2vefx24z ) * fr5g3wzb34 . P_18 ;
epjnnxll4w = ( ( fr5g3wzb34 . P_22 * gy3zl5hupj + iejl1ay1w25 . gev2wbbyu3 )
+ c5bln4htjhu . fwzhwtn4xi ) - hqyqxgwefg -> RollRate ; c5bln4htjhu .
dobvcbjggf = ( fr5g3wzb34 . P_3 * epjnnxll4w - iejl1ay1w25 . h3dem55g50 ) *
fr5g3wzb34 . P_19 ; c5bln4htjhu . apycry55zg . Pitch = ( fr5g3wzb34 . P_21 *
m0nic5i3yv + iejl1ay1w25 . azhiykzg5k ) + c5bln4htjhu . kutyo51t4o ;
c5bln4htjhu . apycry55zg . Roll = ( fr5g3wzb34 . P_23 * epjnnxll4w +
iejl1ay1w25 . gif54btgsw ) + c5bln4htjhu . dobvcbjggf ; c5bln4htjhu .
apycry55zg . Altitude = * jhrqrunbya ; c5bln4htjhu . au0rsa3quo = fr5g3wzb34
. P_4 * mjkaonouhh ; c5bln4htjhu . gcqlhokp2z = fr5g3wzb34 . P_5 * m0nic5i3yv
; c5bln4htjhu . hfleaf25oo = fr5g3wzb34 . P_6 * gy3zl5hupj ; c5bln4htjhu .
dpxzfdmqlm = fr5g3wzb34 . P_7 * epjnnxll4w ; { if ( iejl1ay1w25 . fe2wzclgut
. AQHandles && ssGetLogOutput ( kmnlllhkv2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( iejl1ay1w25 . fe2wzclgut . AQHandles , rtmGetTaskTime (
kmnlllhkv2 , 0 ) , ( char * ) jhrqrunbya + 0 ) ; } } srUpdateBC ( iejl1ay1w25
. b43lfpg0uy ) ; epjnnxll4w = ( ( fr5g3wzb34 . P_34 [ 0 ] * c5bln4htjhu .
apycry55zg . Pitch + fr5g3wzb34 . P_33 [ 0 ] * c5bln4htjhu . apycry55zg .
Roll ) + fr5g3wzb34 . P_32 [ 0 ] * c5bln4htjhu . apycry55zg . Altitude ) +
fr5g3wzb34 . P_35 ; if ( epjnnxll4w > fr5g3wzb34 . P_36 ) { he4ecpjfem [ 0 ]
= fr5g3wzb34 . P_36 ; } else if ( epjnnxll4w < fr5g3wzb34 . P_37 ) {
he4ecpjfem [ 0 ] = fr5g3wzb34 . P_37 ; } else { he4ecpjfem [ 0 ] = epjnnxll4w
; } epjnnxll4w = ( ( fr5g3wzb34 . P_34 [ 1 ] * c5bln4htjhu . apycry55zg .
Pitch + fr5g3wzb34 . P_33 [ 1 ] * c5bln4htjhu . apycry55zg . Roll ) +
fr5g3wzb34 . P_32 [ 1 ] * c5bln4htjhu . apycry55zg . Altitude ) + fr5g3wzb34
. P_35 ; if ( epjnnxll4w > fr5g3wzb34 . P_36 ) { he4ecpjfem [ 1 ] =
fr5g3wzb34 . P_36 ; } else if ( epjnnxll4w < fr5g3wzb34 . P_37 ) { he4ecpjfem
[ 1 ] = fr5g3wzb34 . P_37 ; } else { he4ecpjfem [ 1 ] = epjnnxll4w ; }
epjnnxll4w = ( ( fr5g3wzb34 . P_34 [ 2 ] * c5bln4htjhu . apycry55zg . Pitch +
fr5g3wzb34 . P_33 [ 2 ] * c5bln4htjhu . apycry55zg . Roll ) + fr5g3wzb34 .
P_32 [ 2 ] * c5bln4htjhu . apycry55zg . Altitude ) + fr5g3wzb34 . P_35 ; if (
epjnnxll4w > fr5g3wzb34 . P_36 ) { he4ecpjfem [ 2 ] = fr5g3wzb34 . P_36 ; }
else if ( epjnnxll4w < fr5g3wzb34 . P_37 ) { he4ecpjfem [ 2 ] = fr5g3wzb34 .
P_37 ; } else { he4ecpjfem [ 2 ] = epjnnxll4w ; } epjnnxll4w = ( ( fr5g3wzb34
. P_34 [ 3 ] * c5bln4htjhu . apycry55zg . Pitch + fr5g3wzb34 . P_33 [ 3 ] *
c5bln4htjhu . apycry55zg . Roll ) + fr5g3wzb34 . P_32 [ 3 ] * c5bln4htjhu .
apycry55zg . Altitude ) + fr5g3wzb34 . P_35 ; if ( epjnnxll4w > fr5g3wzb34 .
P_36 ) { he4ecpjfem [ 3 ] = fr5g3wzb34 . P_36 ; } else if ( epjnnxll4w <
fr5g3wzb34 . P_37 ) { he4ecpjfem [ 3 ] = fr5g3wzb34 . P_37 ; } else {
he4ecpjfem [ 3 ] = epjnnxll4w ; } } else { if ( iejl1ay1w25 . bkb2rdjwjo ) {
ssSetBlockStateForSolverChangedAtMajorStep ( kmnlllhkv2 -> _mdlRefSfcnS ) ;
iejl1ay1w25 . bkb2rdjwjo = false ; } he4ecpjfem [ 0 ] = fr5g3wzb34 . P_56 [ 0
] ; he4ecpjfem [ 1 ] = fr5g3wzb34 . P_56 [ 1 ] ; he4ecpjfem [ 2 ] =
fr5g3wzb34 . P_56 [ 2 ] ; he4ecpjfem [ 3 ] = fr5g3wzb34 . P_56 [ 3 ] ; }
mb241f5rzr = fr5g3wzb34 . P_42 * he4ecpjfem [ 1 ] ; ipjw4liyjv = fr5g3wzb34 .
P_43 * he4ecpjfem [ 3 ] ; jspnfmkmhe = ( real32_T ) ( he4ecpjfem [ 0 ] >
fr5g3wzb34 . P_38 ) ; * exphpnjrtd = fr5g3wzb34 . P_44 * jspnfmkmhe ;
epjnnxll4w = muSingleScalarAbs ( he4ecpjfem [ 0 ] ) ; if ( epjnnxll4w >
fr5g3wzb34 . P_45 ) { * hhdo2il34x = fr5g3wzb34 . P_45 ; } else if (
epjnnxll4w < fr5g3wzb34 . P_46 ) { * hhdo2il34x = fr5g3wzb34 . P_46 ; } else
{ * hhdo2il34x = epjnnxll4w ; } jigrz5kbpk = ( real32_T ) ( mb241f5rzr >
fr5g3wzb34 . P_39 ) ; * gmh4qc2jfn = fr5g3wzb34 . P_47 * jigrz5kbpk ;
epjnnxll4w = muSingleScalarAbs ( mb241f5rzr ) ; if ( epjnnxll4w > fr5g3wzb34
. P_48 ) { * ercqwcgzqg = fr5g3wzb34 . P_48 ; } else if ( epjnnxll4w <
fr5g3wzb34 . P_49 ) { * ercqwcgzqg = fr5g3wzb34 . P_49 ; } else { *
ercqwcgzqg = epjnnxll4w ; } dbu5nxndpi = ( real32_T ) ( he4ecpjfem [ 2 ] >
fr5g3wzb34 . P_40 ) ; * kdxo20h1kt = fr5g3wzb34 . P_50 * dbu5nxndpi ;
epjnnxll4w = muSingleScalarAbs ( he4ecpjfem [ 2 ] ) ; if ( epjnnxll4w >
fr5g3wzb34 . P_51 ) { * bocvdn2jmg = fr5g3wzb34 . P_51 ; } else if (
epjnnxll4w < fr5g3wzb34 . P_52 ) { * bocvdn2jmg = fr5g3wzb34 . P_52 ; } else
{ * bocvdn2jmg = epjnnxll4w ; } bjupoxtsbi = ( real32_T ) ( ipjw4liyjv >
fr5g3wzb34 . P_41 ) ; * isqs5n15me = fr5g3wzb34 . P_53 * bjupoxtsbi ;
epjnnxll4w = muSingleScalarAbs ( ipjw4liyjv ) ; if ( epjnnxll4w > fr5g3wzb34
. P_54 ) { * el1y503i4y = fr5g3wzb34 . P_54 ; } else if ( epjnnxll4w <
fr5g3wzb34 . P_55 ) { * el1y503i4y = fr5g3wzb34 . P_55 ; } else { *
el1y503i4y = epjnnxll4w ; } } void OtherControlComponentsTID1 ( void ) { }
void mthvo2tq05 ( void ) { if ( iejl1ay1w25 . bkb2rdjwjo ) { iejl1ay1w25 .
f04yokzbrn += fr5g3wzb34 . P_24 * c5bln4htjhu . au0rsa3quo ; iejl1ay1w25 .
dcrr1aieb4 += fr5g3wzb34 . P_25 * c5bln4htjhu . dzccvabsvl ; iejl1ay1w25 .
azhiykzg5k += fr5g3wzb34 . P_26 * c5bln4htjhu . gcqlhokp2z ; iejl1ay1w25 .
e01oxlmf1l += fr5g3wzb34 . P_27 * c5bln4htjhu . kutyo51t4o ; iejl1ay1w25 .
gev2wbbyu3 += fr5g3wzb34 . P_28 * c5bln4htjhu . hfleaf25oo ; iejl1ay1w25 .
lw2vefx24z += fr5g3wzb34 . P_29 * c5bln4htjhu . fwzhwtn4xi ; iejl1ay1w25 .
gif54btgsw += fr5g3wzb34 . P_30 * c5bln4htjhu . dpxzfdmqlm ; iejl1ay1w25 .
h3dem55g50 += fr5g3wzb34 . P_31 * c5bln4htjhu . dobvcbjggf ; } } void
mthvo2tq05TID1 ( void ) { } void kb4qmvlpsl ( void ) { lij0uujly1 * const
kmnlllhkv2 = & ( pgvqcqg2vb . rtm ) ; if ( ( ssGetSimMode ( kmnlllhkv2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( kmnlllhkv2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
iejl1ay1w25 . fe2wzclgut . AQHandles ) { sdiTerminateStreaming ( &
iejl1ay1w25 . fe2wzclgut . AQHandles ) ; } } } void bjmabliddk ( void ) {
lij0uujly1 * const kmnlllhkv2 = & ( pgvqcqg2vb . rtm ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( kmnlllhkv2 ->
_mdlRefSfcnS , "OtherControlComponents" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void jwhbtu1nsx (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
lij0uujly1 * const kmnlllhkv2 = & ( pgvqcqg2vb . rtm ) ; rt_InitInfAndNaN (
sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) kmnlllhkv2 , 0 , sizeof (
lij0uujly1 ) ) ; blo2ixfbbd [ 0 ] = mdlref_TID0 ; blo2ixfbbd [ 1 ] =
mdlref_TID1 ; kmnlllhkv2 -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( kmnlllhkv2 ->
_mdlRefSfcnS , "OtherControlComponents" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { c5bln4htjhu . apycry55zg =
OtherControlComponents_rtZControllerBus ; c5bln4htjhu . dzccvabsvl = 0.0F ;
c5bln4htjhu . kutyo51t4o = 0.0F ; c5bln4htjhu . fwzhwtn4xi = 0.0F ;
c5bln4htjhu . dobvcbjggf = 0.0F ; c5bln4htjhu . au0rsa3quo = 0.0F ;
c5bln4htjhu . gcqlhokp2z = 0.0F ; c5bln4htjhu . hfleaf25oo = 0.0F ;
c5bln4htjhu . dpxzfdmqlm = 0.0F ; } ( void ) memset ( ( void * ) &
iejl1ay1w25 , 0 , sizeof ( cs1zkeeqmuy ) ) ; iejl1ay1w25 . f04yokzbrn = 0.0F
; iejl1ay1w25 . dcrr1aieb4 = 0.0F ; iejl1ay1w25 . azhiykzg5k = 0.0F ;
iejl1ay1w25 . e01oxlmf1l = 0.0F ; iejl1ay1w25 . gev2wbbyu3 = 0.0F ;
iejl1ay1w25 . lw2vefx24z = 0.0F ; iejl1ay1w25 . gif54btgsw = 0.0F ;
iejl1ay1w25 . h3dem55g50 = 0.0F ;
OtherControlComponents_InitializeDataMapInfo ( kmnlllhkv2 , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
kmnlllhkv2 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( kmnlllhkv2 ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
kmnlllhkv2 -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_OtherControlComponents_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_OtherControlComponents , 63 ) ; * retVal
= 1 ; } static void mr_OtherControlComponents_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_OtherControlComponents_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_OtherControlComponents_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_OtherControlComponents_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_OtherControlComponents_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_OtherControlComponents_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_OtherControlComponents_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_OtherControlComponents_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_OtherControlComponents_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_OtherControlComponents_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_OtherControlComponents_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_OtherControlComponents_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_OtherControlComponents_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_OtherControlComponents_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_OtherControlComponents_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_OtherControlComponents_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_OtherControlComponents_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "c5bln4htjhu" , "iejl1ay1w25" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_OtherControlComponents_cacheDataAsMxArray ( ssDW , 0 ,
0 , & ( c5bln4htjhu ) , sizeof ( c5bln4htjhu ) ) ; { static const char *
rtdwDataFieldNames [ 10 ] = { "iejl1ay1w25.f04yokzbrn" ,
"iejl1ay1w25.dcrr1aieb4" , "iejl1ay1w25.azhiykzg5k" ,
"iejl1ay1w25.e01oxlmf1l" , "iejl1ay1w25.gev2wbbyu3" ,
"iejl1ay1w25.lw2vefx24z" , "iejl1ay1w25.gif54btgsw" ,
"iejl1ay1w25.h3dem55g50" , "iejl1ay1w25.b43lfpg0uy" ,
"iejl1ay1w25.bkb2rdjwjo" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1
, 1 , 10 , rtdwDataFieldNames ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 0 , & (
iejl1ay1w25 . f04yokzbrn ) , sizeof ( iejl1ay1w25 . f04yokzbrn ) ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 1 , & (
iejl1ay1w25 . dcrr1aieb4 ) , sizeof ( iejl1ay1w25 . dcrr1aieb4 ) ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 2 , & (
iejl1ay1w25 . azhiykzg5k ) , sizeof ( iejl1ay1w25 . azhiykzg5k ) ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 3 , & (
iejl1ay1w25 . e01oxlmf1l ) , sizeof ( iejl1ay1w25 . e01oxlmf1l ) ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 4 , & (
iejl1ay1w25 . gev2wbbyu3 ) , sizeof ( iejl1ay1w25 . gev2wbbyu3 ) ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 5 , & (
iejl1ay1w25 . lw2vefx24z ) , sizeof ( iejl1ay1w25 . lw2vefx24z ) ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 6 , & (
iejl1ay1w25 . gif54btgsw ) , sizeof ( iejl1ay1w25 . gif54btgsw ) ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 7 , & (
iejl1ay1w25 . h3dem55g50 ) , sizeof ( iejl1ay1w25 . h3dem55g50 ) ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 8 , & (
iejl1ay1w25 . b43lfpg0uy ) , sizeof ( iejl1ay1w25 . b43lfpg0uy ) ) ;
mr_OtherControlComponents_cacheDataAsMxArray ( rtdwData , 0 , 9 , & (
iejl1ay1w25 . bkb2rdjwjo ) , sizeof ( iejl1ay1w25 . bkb2rdjwjo ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_OtherControlComponents_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( c5bln4htjhu ) , ssDW ,
0 , 0 , sizeof ( c5bln4htjhu ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
f04yokzbrn ) , rtdwData , 0 , 0 , sizeof ( iejl1ay1w25 . f04yokzbrn ) ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
dcrr1aieb4 ) , rtdwData , 0 , 1 , sizeof ( iejl1ay1w25 . dcrr1aieb4 ) ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
azhiykzg5k ) , rtdwData , 0 , 2 , sizeof ( iejl1ay1w25 . azhiykzg5k ) ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
e01oxlmf1l ) , rtdwData , 0 , 3 , sizeof ( iejl1ay1w25 . e01oxlmf1l ) ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
gev2wbbyu3 ) , rtdwData , 0 , 4 , sizeof ( iejl1ay1w25 . gev2wbbyu3 ) ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
lw2vefx24z ) , rtdwData , 0 , 5 , sizeof ( iejl1ay1w25 . lw2vefx24z ) ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
gif54btgsw ) , rtdwData , 0 , 6 , sizeof ( iejl1ay1w25 . gif54btgsw ) ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
h3dem55g50 ) , rtdwData , 0 , 7 , sizeof ( iejl1ay1w25 . h3dem55g50 ) ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
b43lfpg0uy ) , rtdwData , 0 , 8 , sizeof ( iejl1ay1w25 . b43lfpg0uy ) ) ;
mr_OtherControlComponents_restoreDataFromMxArray ( & ( iejl1ay1w25 .
bkb2rdjwjo ) , rtdwData , 0 , 9 , sizeof ( iejl1ay1w25 . bkb2rdjwjo ) ) ; } }
void mr_OtherControlComponents_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 4293284107U , 225742468U , 1955434233U ,
2315776433U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"OtherControlComponents" , & chksum [ 0 ] ) ; } mxArray *
mr_OtherControlComponents_GetSimStateDisallowedBlocks ( ) { return NULL ; }
static void * OtherControlComponents_InitRestoreDataPtr = NULL ; void
mr_OtherControlComponents_CreateInitRestoreData ( ) {
OtherControlComponents_InitRestoreDataPtr = utMalloc ( sizeof ( iejl1ay1w25 )
) ; memcpy ( OtherControlComponents_InitRestoreDataPtr , ( void * ) & (
iejl1ay1w25 ) , sizeof ( iejl1ay1w25 ) ) ; } void
mr_OtherControlComponents_CopyFromInitRestoreData ( ) { memcpy ( ( void * ) &
( iejl1ay1w25 ) , OtherControlComponents_InitRestoreDataPtr , sizeof (
iejl1ay1w25 ) ) ; } void mr_OtherControlComponents_DestroyInitRestoreData ( )
{ utFree ( OtherControlComponents_InitRestoreDataPtr ) ; }
