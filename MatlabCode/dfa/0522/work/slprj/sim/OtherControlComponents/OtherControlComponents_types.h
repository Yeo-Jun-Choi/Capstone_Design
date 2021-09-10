#ifndef RTW_HEADER_OtherControlComponents_types_h_
#define RTW_HEADER_OtherControlComponents_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_NavigationStates_
#define DEFINED_TYPEDEF_FOR_NavigationStates_
typedef struct { real32_T Roll ; real32_T Pitch ; real32_T Yaw ; real32_T
RollRate ; real32_T PitchRate ; real32_T YawRate ; real32_T VerticalPosition
; real32_T VerticalVelocity ; } NavigationStates ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_ControllerBus_
#define DEFINED_TYPEDEF_FOR_ControllerBus_
typedef struct { real32_T Pitch ; real32_T Roll ; real32_T Altitude ; uint8_T
sl_padding0 [ 4 ] ; } ControllerBus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_PWMBus_
#define DEFINED_TYPEDEF_FOR_PWMBus_
typedef struct { real32_T Duty ; real32_T Rev ; } PWMBus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_MotorCommands_
#define DEFINED_TYPEDEF_FOR_MotorCommands_
typedef struct { PWMBus P4 ; PWMBus P3 ; PWMBus P2 ; PWMBus P1 ; }
MotorCommands ;
#endif
typedef struct nwg45kg2r4f_ nwg45kg2r4f ; typedef struct cc1sm0ukfc
lij0uujly1 ;
#endif
