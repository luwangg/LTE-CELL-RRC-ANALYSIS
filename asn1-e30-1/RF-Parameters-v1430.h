/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RF_Parameters_v1430_H_
#define	_RF_Parameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "BandCombinationList-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_Parameters_v1430__diffFallbackCombReport_r14 {
	RF_Parameters_v1430__diffFallbackCombReport_r14_supported	= 0
} e_RF_Parameters_v1430__diffFallbackCombReport_r14;

/* Forward declarations */
struct SupportedBandCombination_v1430;
struct SupportedBandCombinationAdd_v1430;
struct SupportedBandCombinationReduced_v1430;

/* RF-Parameters-v1430 */
typedef struct RF_Parameters_v1430 {
	struct SupportedBandCombination_v1430	*supportedBandCombination_v1430	/* OPTIONAL */;
	struct SupportedBandCombinationAdd_v1430	*supportedBandCombinationAdd_v1430	/* OPTIONAL */;
	struct SupportedBandCombinationReduced_v1430	*supportedBandCombinationReduced_v1430	/* OPTIONAL */;
	struct RF_Parameters_v1430__eNB_RequestedParameters_v1430 {
		BandCombinationList_r14_t	 requestedDiffFallbackCombList_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *eNB_RequestedParameters_v1430;
	long	*diffFallbackCombReport_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_diffFallbackCombReport_r14_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1430;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandCombination-v1430.h"
#include "SupportedBandCombinationAdd-v1430.h"
#include "SupportedBandCombinationReduced-v1430.h"

#endif	/* _RF_Parameters_v1430_H_ */
#include <asn_internal.h>
