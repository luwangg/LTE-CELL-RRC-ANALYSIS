/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_HandoverPreparationInformation_v1430_IEs_H_
#define	_HandoverPreparationInformation_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverPreparationInformation_v1430_IEs__makeBeforeBreakReq_r14 {
	HandoverPreparationInformation_v1430_IEs__makeBeforeBreakReq_r14_true	= 0
} e_HandoverPreparationInformation_v1430_IEs__makeBeforeBreakReq_r14;

/* Forward declarations */
struct AS_Config_v1430;

/* HandoverPreparationInformation-v1430-IEs */
typedef struct HandoverPreparationInformation_v1430_IEs {
	struct AS_Config_v1430	*as_Config_v1430	/* OPTIONAL */;
	long	*makeBeforeBreakReq_r14	/* OPTIONAL */;
	struct HandoverPreparationInformation_v1430_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v1430_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_makeBeforeBreakReq_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v1430_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AS-Config-v1430.h"

#endif	/* _HandoverPreparationInformation_v1430_IEs_H_ */
#include <asn_internal.h>
