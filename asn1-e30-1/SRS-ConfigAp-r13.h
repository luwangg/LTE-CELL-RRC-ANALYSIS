/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SRS_ConfigAp_r13_H_
#define	_SRS_ConfigAp_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SRS-AntennaPort.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_ConfigAp_r13__srs_BandwidthAp_r13 {
	SRS_ConfigAp_r13__srs_BandwidthAp_r13_bw0	= 0,
	SRS_ConfigAp_r13__srs_BandwidthAp_r13_bw1	= 1,
	SRS_ConfigAp_r13__srs_BandwidthAp_r13_bw2	= 2,
	SRS_ConfigAp_r13__srs_BandwidthAp_r13_bw3	= 3
} e_SRS_ConfigAp_r13__srs_BandwidthAp_r13;
typedef enum SRS_ConfigAp_r13__cyclicShiftAp_r13 {
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs0	= 0,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs1	= 1,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs2	= 2,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs3	= 3,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs4	= 4,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs5	= 5,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs6	= 6,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs7	= 7,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs8	= 8,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs9	= 9,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs10	= 10,
	SRS_ConfigAp_r13__cyclicShiftAp_r13_cs11	= 11
} e_SRS_ConfigAp_r13__cyclicShiftAp_r13;
typedef enum SRS_ConfigAp_r13__transmissionCombNum_r13 {
	SRS_ConfigAp_r13__transmissionCombNum_r13_n2	= 0,
	SRS_ConfigAp_r13__transmissionCombNum_r13_n4	= 1
} e_SRS_ConfigAp_r13__transmissionCombNum_r13;

/* SRS-ConfigAp-r13 */
typedef struct SRS_ConfigAp_r13 {
	SRS_AntennaPort_t	 srs_AntennaPortAp_r13;
	long	 srs_BandwidthAp_r13;
	long	 freqDomainPositionAp_r13;
	long	 transmissionCombAp_r13;
	long	 cyclicShiftAp_r13;
	long	 transmissionCombNum_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_ConfigAp_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_BandwidthAp_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cyclicShiftAp_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionCombNum_r13_23;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRS_ConfigAp_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_ConfigAp_r13_H_ */
#include <asn_internal.h>
