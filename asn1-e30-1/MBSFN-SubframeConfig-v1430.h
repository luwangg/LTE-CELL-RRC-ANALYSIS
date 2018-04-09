/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MBSFN_SubframeConfig_v1430_H_
#define	_MBSFN_SubframeConfig_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR {
	MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR_NOTHING,	/* No components present */
	MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR_oneFrame_v1430,
	MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR_fourFrames_v1430
} MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR;

/* MBSFN-SubframeConfig-v1430 */
typedef struct MBSFN_SubframeConfig_v1430 {
	struct MBSFN_SubframeConfig_v1430__subframeAllocation_v1430 {
		MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR present;
		union MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_u {
			BIT_STRING_t	 oneFrame_v1430;
			BIT_STRING_t	 fourFrames_v1430;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subframeAllocation_v1430;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_SubframeConfig_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_SubframeConfig_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFN_SubframeConfig_v1430_H_ */
#include <asn_internal.h>
