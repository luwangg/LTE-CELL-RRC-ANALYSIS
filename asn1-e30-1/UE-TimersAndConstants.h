/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UE_TimersAndConstants_H_
#define	_UE_TimersAndConstants_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_TimersAndConstants__t300 {
	UE_TimersAndConstants__t300_ms100	= 0,
	UE_TimersAndConstants__t300_ms200	= 1,
	UE_TimersAndConstants__t300_ms300	= 2,
	UE_TimersAndConstants__t300_ms400	= 3,
	UE_TimersAndConstants__t300_ms600	= 4,
	UE_TimersAndConstants__t300_ms1000	= 5,
	UE_TimersAndConstants__t300_ms1500	= 6,
	UE_TimersAndConstants__t300_ms2000	= 7
} e_UE_TimersAndConstants__t300;
typedef enum UE_TimersAndConstants__t301 {
	UE_TimersAndConstants__t301_ms100	= 0,
	UE_TimersAndConstants__t301_ms200	= 1,
	UE_TimersAndConstants__t301_ms300	= 2,
	UE_TimersAndConstants__t301_ms400	= 3,
	UE_TimersAndConstants__t301_ms600	= 4,
	UE_TimersAndConstants__t301_ms1000	= 5,
	UE_TimersAndConstants__t301_ms1500	= 6,
	UE_TimersAndConstants__t301_ms2000	= 7
} e_UE_TimersAndConstants__t301;
typedef enum UE_TimersAndConstants__t310 {
	UE_TimersAndConstants__t310_ms0	= 0,
	UE_TimersAndConstants__t310_ms50	= 1,
	UE_TimersAndConstants__t310_ms100	= 2,
	UE_TimersAndConstants__t310_ms200	= 3,
	UE_TimersAndConstants__t310_ms500	= 4,
	UE_TimersAndConstants__t310_ms1000	= 5,
	UE_TimersAndConstants__t310_ms2000	= 6
} e_UE_TimersAndConstants__t310;
typedef enum UE_TimersAndConstants__n310 {
	UE_TimersAndConstants__n310_n1	= 0,
	UE_TimersAndConstants__n310_n2	= 1,
	UE_TimersAndConstants__n310_n3	= 2,
	UE_TimersAndConstants__n310_n4	= 3,
	UE_TimersAndConstants__n310_n6	= 4,
	UE_TimersAndConstants__n310_n8	= 5,
	UE_TimersAndConstants__n310_n10	= 6,
	UE_TimersAndConstants__n310_n20	= 7
} e_UE_TimersAndConstants__n310;
typedef enum UE_TimersAndConstants__t311 {
	UE_TimersAndConstants__t311_ms1000	= 0,
	UE_TimersAndConstants__t311_ms3000	= 1,
	UE_TimersAndConstants__t311_ms5000	= 2,
	UE_TimersAndConstants__t311_ms10000	= 3,
	UE_TimersAndConstants__t311_ms15000	= 4,
	UE_TimersAndConstants__t311_ms20000	= 5,
	UE_TimersAndConstants__t311_ms30000	= 6
} e_UE_TimersAndConstants__t311;
typedef enum UE_TimersAndConstants__n311 {
	UE_TimersAndConstants__n311_n1	= 0,
	UE_TimersAndConstants__n311_n2	= 1,
	UE_TimersAndConstants__n311_n3	= 2,
	UE_TimersAndConstants__n311_n4	= 3,
	UE_TimersAndConstants__n311_n5	= 4,
	UE_TimersAndConstants__n311_n6	= 5,
	UE_TimersAndConstants__n311_n8	= 6,
	UE_TimersAndConstants__n311_n10	= 7
} e_UE_TimersAndConstants__n311;
typedef enum UE_TimersAndConstants__t300_v1310 {
	UE_TimersAndConstants__t300_v1310_ms2500	= 0,
	UE_TimersAndConstants__t300_v1310_ms3000	= 1,
	UE_TimersAndConstants__t300_v1310_ms3500	= 2,
	UE_TimersAndConstants__t300_v1310_ms4000	= 3,
	UE_TimersAndConstants__t300_v1310_ms5000	= 4,
	UE_TimersAndConstants__t300_v1310_ms6000	= 5,
	UE_TimersAndConstants__t300_v1310_ms8000	= 6,
	UE_TimersAndConstants__t300_v1310_ms10000	= 7
} e_UE_TimersAndConstants__t300_v1310;
typedef enum UE_TimersAndConstants__t301_v1310 {
	UE_TimersAndConstants__t301_v1310_ms2500	= 0,
	UE_TimersAndConstants__t301_v1310_ms3000	= 1,
	UE_TimersAndConstants__t301_v1310_ms3500	= 2,
	UE_TimersAndConstants__t301_v1310_ms4000	= 3,
	UE_TimersAndConstants__t301_v1310_ms5000	= 4,
	UE_TimersAndConstants__t301_v1310_ms6000	= 5,
	UE_TimersAndConstants__t301_v1310_ms8000	= 6,
	UE_TimersAndConstants__t301_v1310_ms10000	= 7
} e_UE_TimersAndConstants__t301_v1310;
typedef enum UE_TimersAndConstants__t310_v1330 {
	UE_TimersAndConstants__t310_v1330_ms4000	= 0,
	UE_TimersAndConstants__t310_v1330_ms6000	= 1
} e_UE_TimersAndConstants__t310_v1330;

/* UE-TimersAndConstants */
typedef struct UE_TimersAndConstants {
	long	 t300;
	long	 t301;
	long	 t310;
	long	 n310;
	long	 t311;
	long	 n311;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*t300_v1310	/* OPTIONAL */;
	long	*t301_v1310	/* OPTIONAL */;
	long	*t310_v1330	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_TimersAndConstants_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t300_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t301_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t310_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_n310_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t311_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_n311_45;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t300_v1310_55;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t301_v1310_64;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t310_v1330_73;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_TimersAndConstants;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_TimersAndConstants_H_ */
#include <asn_internal.h>
