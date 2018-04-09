/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_HandoverPreparationInformation_v1130_IEs_H_
#define	_HandoverPreparationInformation_v1130_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AS_Context_v1130;
struct HandoverPreparationInformation_v1250_IEs;

/* HandoverPreparationInformation-v1130-IEs */
typedef struct HandoverPreparationInformation_v1130_IEs {
	struct AS_Context_v1130	*as_Context_v1130	/* OPTIONAL */;
	struct HandoverPreparationInformation_v1250_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v1130_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v1130_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AS-Context-v1130.h"
#include "HandoverPreparationInformation-v1250-IEs.h"

#endif	/* _HandoverPreparationInformation_v1130_IEs_H_ */
#include <asn_internal.h>
