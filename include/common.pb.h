/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8 */

#ifndef PB_CARSERVER_COMMON_PB_H_INCLUDED
#define PB_CARSERVER_COMMON_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _CarServer_Invalid {
    CarServer_Invalid_INVALID = 0
} CarServer_Invalid;

/* Struct definitions */
typedef struct _CarServer_Void {
    char dummy_field;
} CarServer_Void;

typedef struct _CarServer_LatLong {
    float latitude;
    float longitude;
} CarServer_LatLong;

typedef struct _CarServer_PreconditioningTimes {
    pb_size_t which_times;
    union {
        CarServer_Void all_week;
        CarServer_Void weekdays;
    } times;
} CarServer_PreconditioningTimes;

typedef struct _CarServer_OffPeakChargingTimes {
    pb_size_t which_times;
    union {
        CarServer_Void all_week;
        CarServer_Void weekdays;
    } times;
} CarServer_OffPeakChargingTimes;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _CarServer_Invalid_MIN CarServer_Invalid_INVALID
#define _CarServer_Invalid_MAX CarServer_Invalid_INVALID
#define _CarServer_Invalid_ARRAYSIZE ((CarServer_Invalid)(CarServer_Invalid_INVALID+1))






/* Initializer values for message structs */
#define CarServer_Void_init_default              {0}
#define CarServer_LatLong_init_default           {0, 0}
#define CarServer_PreconditioningTimes_init_default {0, {CarServer_Void_init_default}}
#define CarServer_OffPeakChargingTimes_init_default {0, {CarServer_Void_init_default}}
#define CarServer_Void_init_zero                 {0}
#define CarServer_LatLong_init_zero              {0, 0}
#define CarServer_PreconditioningTimes_init_zero {0, {CarServer_Void_init_zero}}
#define CarServer_OffPeakChargingTimes_init_zero {0, {CarServer_Void_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define CarServer_LatLong_latitude_tag           1
#define CarServer_LatLong_longitude_tag          2
#define CarServer_PreconditioningTimes_all_week_tag 1
#define CarServer_PreconditioningTimes_weekdays_tag 2
#define CarServer_OffPeakChargingTimes_all_week_tag 1
#define CarServer_OffPeakChargingTimes_weekdays_tag 2

/* Struct field encoding specification for nanopb */
#define CarServer_Void_FIELDLIST(X, a) \

#define CarServer_Void_CALLBACK NULL
#define CarServer_Void_DEFAULT NULL

#define CarServer_LatLong_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    latitude,          1) \
X(a, STATIC,   SINGULAR, FLOAT,    longitude,         2)
#define CarServer_LatLong_CALLBACK NULL
#define CarServer_LatLong_DEFAULT NULL

#define CarServer_PreconditioningTimes_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (times,all_week,times.all_week),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (times,weekdays,times.weekdays),   2)
#define CarServer_PreconditioningTimes_CALLBACK NULL
#define CarServer_PreconditioningTimes_DEFAULT NULL
#define CarServer_PreconditioningTimes_times_all_week_MSGTYPE CarServer_Void
#define CarServer_PreconditioningTimes_times_weekdays_MSGTYPE CarServer_Void

#define CarServer_OffPeakChargingTimes_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (times,all_week,times.all_week),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (times,weekdays,times.weekdays),   2)
#define CarServer_OffPeakChargingTimes_CALLBACK NULL
#define CarServer_OffPeakChargingTimes_DEFAULT NULL
#define CarServer_OffPeakChargingTimes_times_all_week_MSGTYPE CarServer_Void
#define CarServer_OffPeakChargingTimes_times_weekdays_MSGTYPE CarServer_Void

extern const pb_msgdesc_t CarServer_Void_msg;
extern const pb_msgdesc_t CarServer_LatLong_msg;
extern const pb_msgdesc_t CarServer_PreconditioningTimes_msg;
extern const pb_msgdesc_t CarServer_OffPeakChargingTimes_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define CarServer_Void_fields &CarServer_Void_msg
#define CarServer_LatLong_fields &CarServer_LatLong_msg
#define CarServer_PreconditioningTimes_fields &CarServer_PreconditioningTimes_msg
#define CarServer_OffPeakChargingTimes_fields &CarServer_OffPeakChargingTimes_msg

/* Maximum encoded size of messages (where known) */
#define CARSERVER_COMMON_PB_H_MAX_SIZE           CarServer_LatLong_size
#define CarServer_LatLong_size                   10
#define CarServer_OffPeakChargingTimes_size      2
#define CarServer_PreconditioningTimes_size      2
#define CarServer_Void_size                      0

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif