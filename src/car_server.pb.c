/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.8 */

#include "car_server.pb.h"
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

PB_BIND(CarServer_Action, CarServer_Action, AUTO)


PB_BIND(CarServer_VehicleAction, CarServer_VehicleAction, 2)


PB_BIND(CarServer_EraseUserDataAction, CarServer_EraseUserDataAction, AUTO)


PB_BIND(CarServer_Response, CarServer_Response, AUTO)


PB_BIND(CarServer_ActionStatus, CarServer_ActionStatus, AUTO)


PB_BIND(CarServer_ResultReason, CarServer_ResultReason, AUTO)


PB_BIND(CarServer_EncryptedData, CarServer_EncryptedData, AUTO)


PB_BIND(CarServer_ChargingSetLimitAction, CarServer_ChargingSetLimitAction, AUTO)


PB_BIND(CarServer_ChargingStartStopAction, CarServer_ChargingStartStopAction, AUTO)


PB_BIND(CarServer_DrivingClearSpeedLimitPinAction, CarServer_DrivingClearSpeedLimitPinAction, AUTO)


PB_BIND(CarServer_DrivingSetSpeedLimitAction, CarServer_DrivingSetSpeedLimitAction, AUTO)


PB_BIND(CarServer_DrivingSpeedLimitAction, CarServer_DrivingSpeedLimitAction, AUTO)


PB_BIND(CarServer_HvacAutoAction, CarServer_HvacAutoAction, AUTO)


PB_BIND(CarServer_HvacSeatHeaterActions, CarServer_HvacSeatHeaterActions, AUTO)


PB_BIND(CarServer_HvacSeatHeaterActions_HvacSeatHeaterAction, CarServer_HvacSeatHeaterActions_HvacSeatHeaterAction, AUTO)


PB_BIND(CarServer_HvacSeatCoolerActions, CarServer_HvacSeatCoolerActions, AUTO)


PB_BIND(CarServer_HvacSeatCoolerActions_HvacSeatCoolerAction, CarServer_HvacSeatCoolerActions_HvacSeatCoolerAction, AUTO)


PB_BIND(CarServer_HvacSetPreconditioningMaxAction, CarServer_HvacSetPreconditioningMaxAction, AUTO)


PB_BIND(CarServer_HvacSteeringWheelHeaterAction, CarServer_HvacSteeringWheelHeaterAction, AUTO)


PB_BIND(CarServer_HvacTemperatureAdjustmentAction, CarServer_HvacTemperatureAdjustmentAction, AUTO)


PB_BIND(CarServer_HvacTemperatureAdjustmentAction_Temperature, CarServer_HvacTemperatureAdjustmentAction_Temperature, AUTO)


PB_BIND(CarServer_HvacTemperatureAdjustmentAction_HvacTemperatureZone, CarServer_HvacTemperatureAdjustmentAction_HvacTemperatureZone, AUTO)


PB_BIND(CarServer_GetNearbyChargingSites, CarServer_GetNearbyChargingSites, AUTO)


PB_BIND(CarServer_NearbyChargingSites, CarServer_NearbyChargingSites, AUTO)


PB_BIND(CarServer_Superchargers, CarServer_Superchargers, AUTO)


PB_BIND(CarServer_MediaPlayAction, CarServer_MediaPlayAction, AUTO)


PB_BIND(CarServer_MediaUpdateVolume, CarServer_MediaUpdateVolume, AUTO)


PB_BIND(CarServer_MediaNextFavorite, CarServer_MediaNextFavorite, AUTO)


PB_BIND(CarServer_MediaPreviousFavorite, CarServer_MediaPreviousFavorite, AUTO)


PB_BIND(CarServer_MediaNextTrack, CarServer_MediaNextTrack, AUTO)


PB_BIND(CarServer_MediaPreviousTrack, CarServer_MediaPreviousTrack, AUTO)


PB_BIND(CarServer_VehicleControlCancelSoftwareUpdateAction, CarServer_VehicleControlCancelSoftwareUpdateAction, AUTO)


PB_BIND(CarServer_VehicleControlFlashLightsAction, CarServer_VehicleControlFlashLightsAction, AUTO)


PB_BIND(CarServer_VehicleControlHonkHornAction, CarServer_VehicleControlHonkHornAction, AUTO)


PB_BIND(CarServer_VehicleControlResetValetPinAction, CarServer_VehicleControlResetValetPinAction, AUTO)


PB_BIND(CarServer_VehicleControlScheduleSoftwareUpdateAction, CarServer_VehicleControlScheduleSoftwareUpdateAction, AUTO)


PB_BIND(CarServer_VehicleControlSetSentryModeAction, CarServer_VehicleControlSetSentryModeAction, AUTO)


PB_BIND(CarServer_VehicleControlSetValetModeAction, CarServer_VehicleControlSetValetModeAction, AUTO)


PB_BIND(CarServer_VehicleControlSunroofOpenCloseAction, CarServer_VehicleControlSunroofOpenCloseAction, AUTO)


PB_BIND(CarServer_VehicleControlTriggerHomelinkAction, CarServer_VehicleControlTriggerHomelinkAction, AUTO)


PB_BIND(CarServer_VehicleControlWindowAction, CarServer_VehicleControlWindowAction, AUTO)


PB_BIND(CarServer_HvacBioweaponModeAction, CarServer_HvacBioweaponModeAction, AUTO)


PB_BIND(CarServer_AutoSeatClimateAction, CarServer_AutoSeatClimateAction, AUTO)


PB_BIND(CarServer_AutoSeatClimateAction_CarSeat, CarServer_AutoSeatClimateAction_CarSeat, AUTO)


PB_BIND(CarServer_Ping, CarServer_Ping, AUTO)


PB_BIND(CarServer_ScheduledChargingAction, CarServer_ScheduledChargingAction, AUTO)


PB_BIND(CarServer_ScheduledDepartureAction, CarServer_ScheduledDepartureAction, AUTO)


PB_BIND(CarServer_HvacClimateKeeperAction, CarServer_HvacClimateKeeperAction, AUTO)


PB_BIND(CarServer_SetChargingAmpsAction, CarServer_SetChargingAmpsAction, AUTO)


PB_BIND(CarServer_SetCabinOverheatProtectionAction, CarServer_SetCabinOverheatProtectionAction, AUTO)


PB_BIND(CarServer_SetVehicleNameAction, CarServer_SetVehicleNameAction, AUTO)


PB_BIND(CarServer_ChargePortDoorClose, CarServer_ChargePortDoorClose, AUTO)


PB_BIND(CarServer_ChargePortDoorOpen, CarServer_ChargePortDoorOpen, AUTO)


PB_BIND(CarServer_SetCopTempAction, CarServer_SetCopTempAction, AUTO)


PB_BIND(CarServer_VehicleControlSetPinToDriveAction, CarServer_VehicleControlSetPinToDriveAction, AUTO)


PB_BIND(CarServer_VehicleControlResetPinToDriveAction, CarServer_VehicleControlResetPinToDriveAction, AUTO)









#ifndef PB_CONVERT_DOUBLE_FLOAT
/* On some platforms (such as AVR), double is really float.
 * To be able to encode/decode double on these platforms, you need.
 * to define PB_CONVERT_DOUBLE_FLOAT in pb.h or compiler command line.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)
#endif

