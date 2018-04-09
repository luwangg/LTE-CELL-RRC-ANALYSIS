/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_HandoverPreparationInformation_NB_IEs_H_
#define	_HandoverPreparationInformation_NB_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Capability-NB-r13.h"
#include "AS-Config-NB.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRM_Config_NB;
struct AS_Context_NB;

/* HandoverPreparationInformation-NB-IEs */
typedef struct HandoverPreparationInformation_NB_IEs {
	UE_Capability_NB_r13_t	 ue_RadioAccessCapabilityInfo_r13;
	AS_Config_NB_t	 as_Config_r13;
	struct RRM_Config_NB	*rrm_Config_r13	/* OPTIONAL */;
	struct AS_Context_NB	*as_Context_r13	/* OPTIONAL */;
	struct HandoverPreparationInformation_NB_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_NB_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_NB_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRM-Config-NB.h"
#include "AS-Context-NB.h"

#endif	/* _HandoverPreparationInformation_NB_IEs_H_ */
#include <asn_internal.h>
