#include<iostream>
#include<cmath>
#include<string>

using namespace std;

enum class ParkingManeuverType {
  kInvalid = 0,          // Not initialized
  kParkIn = 1 << 0,      // Park in maneuver
  kParkOut = 1 << 1,     // Park out maneuver
  kMemoryIn = 1 << 2,    // Memory Park in maneuver
  kMemoryOut = 1 << 3,   // Memory Park out maneuver
  kSummon = 1 << 4,      // Summon to user
  kUndo = 1 << 5,        // Undo last maneuver
  kRetrace = 1 << 6,     // Retrace last manually driven trajectory
  kTrailer = 1 << 7,     // Trailer assist aka Hitchtronic
  kExploration = 1 << 8  // Exploration mode
};

// 0 0 1 0 0 1 1 0 1 readiness


// 0 0 1 0 0 0 1 0 1 availibility

// Supervision levels associated with the parking maneuver
enum class dwParkingDISupervision {
  DW_DI_PARKING_SUPERVISION_NA = 0U,  // none selected
  DW_DI_PARKING_SUPERVISION_DRV =
      1U << 0U,  // Driver on driver seat for L1/L2 functions
  DW_DI_PARKING_SUPERVISION_DRV_REMOTE =
      1U << 1U,  // Driver from outside vehicle for L2 functions
  DW_DI_PARKING_SUPERVISION_SYS_L3 =
      1U << 2U,  // System while driver is on driver seat
  DW_DI_PARKING_SUPERVISION_SYS_L3_REMOTE =
      1U << 3U,  // System while driver is near the vehicle
  DW_DI_PARKING_SUPERVISION_SYS_L4 =
      1U << 4U,  // System while driver is on driver seat with no
  DW_DI_PARKING_SUPERVISION_SYS_L4_REMOTE =
      1U << 5U,  // System & driver may be absent

  /// Force enum to be 32 bits
  // DW_DI_PARKING_SUPERVISION_FORCE32 = 0x7FFFFFFF
};

typedef enum O_PSM_supervisionType_enum_tag {
   O_PSM_SUPERVISIONTYPE_ENUM_DRV_NA = 0, 
   O_PSM_SUPERVISIONTYPE_ENUM_DRV = 1, 
   O_PSM_SUPERVISIONTYPE_ENUM_DRV_REMOTE = 2, 
   O_PSM_SUPERVISIONTYPE_ENUM_SYS_L3 = 4, 
   O_PSM_SUPERVISIONTYPE_ENUM_SYS_L3_REMOTE = 8, 
   O_PSM_SUPERVISIONTYPE_ENUM_SYS_L4 = 16, 
   O_PSM_SUPERVISIONTYPE_ENUM_SYS_L4_REMOTE = 32 
} O_PSM_supervisionType_enum; /* Description: The interface of this signal is TM_NDA_SEND */


int main()
{

  bool O_PSM_actionStart = false;
  int x;
  cin >>x;
  O_PSM_supervisionType_enum O_PSM_supervisionType;
  O_PSM_supervisionType = static_cast<O_PSM_supervisionType_enum>(x);
  dwParkingDISupervision supervisionLevel;
  switch (O_PSM_supervisionType){
    case O_PSM_supervisionType_enum::O_PSM_SUPERVISIONTYPE_ENUM_DRV_NA:
      supervisionLevel =
          dwParkingDISupervision::DW_DI_PARKING_SUPERVISION_NA;
      break;
    case O_PSM_supervisionType_enum::O_PSM_SUPERVISIONTYPE_ENUM_DRV:
      supervisionLevel =
          dwParkingDISupervision::DW_DI_PARKING_SUPERVISION_DRV;
      break;
    case O_PSM_supervisionType_enum::O_PSM_SUPERVISIONTYPE_ENUM_DRV_REMOTE:
      supervisionLevel =
          dwParkingDISupervision::DW_DI_PARKING_SUPERVISION_DRV_REMOTE;
      break;
    case O_PSM_supervisionType_enum::O_PSM_SUPERVISIONTYPE_ENUM_SYS_L3:
      supervisionLevel =
          dwParkingDISupervision::DW_DI_PARKING_SUPERVISION_SYS_L3;
      break;
    case O_PSM_supervisionType_enum::O_PSM_SUPERVISIONTYPE_ENUM_SYS_L4:
      supervisionLevel =
          dwParkingDISupervision::DW_DI_PARKING_SUPERVISION_SYS_L4;
      break;
    case O_PSM_supervisionType_enum::O_PSM_SUPERVISIONTYPE_ENUM_SYS_L4_REMOTE:
      supervisionLevel =
          dwParkingDISupervision::DW_DI_PARKING_SUPERVISION_SYS_L4_REMOTE;
      break;
    default:
      supervisionLevel =
          dwParkingDISupervision::DW_DI_PARKING_SUPERVISION_NA;
      break;
}

  cout<<O_PSM_supervisionType<<endl;
  // cout<<supervisionLevel<<endl;
  int p = int(supervisionLevel);
  cout<<p<<endl;

  supervisionLevel =static_cast<dwParkingDISupervision>(O_PSM_actionStart);

  p = int(supervisionLevel);
  cout<<p<<endl;
  return 0;
}

