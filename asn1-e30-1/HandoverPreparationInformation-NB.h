/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_HandoverPreparationInformation_NB_H_
#define	_HandoverPreparationInformation_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HandoverPreparationInformation-NB-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverPreparationInformation_NB__criticalExtensions_PR {
	HandoverPreparationInformation_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	HandoverPreparationInformation_NB__criticalExtensions_PR_c1,
	HandoverPreparationInformation_NB__criticalExtensions_PR_criticalExtensionsFuture
} HandoverPreparationInformation_NB__criticalExtensions_PR;
typedef enum HandoverPreparationInformation_NB__criticalExtensions__c1_PR {
	HandoverPreparationInformation_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	HandoverPreparationInformation_NB__criticalExtensions__c1_PR_handoverPreparationInformation_r13,
	HandoverPreparationInformation_NB__criticalExtensions__c1_PR_spare3,
	HandoverPreparationInformation_NB__criticalExtensions__c1_PR_spare2,
	HandoverPreparationInformation_NB__criticalExtensions__c1_PR_spare1
} HandoverPreparationInformation_NB__criticalExtensions__c1_PR;

/* HandoverPreparationInformation-NB */
typedef struct HandoverPreparationInformation_NB {
	struct HandoverPreparationInformation_NB__criticalExtensions {
		HandoverPreparationInformation_NB__criticalExtensions_PR present;
		union HandoverPreparationInformation_NB__criticalExtensions_u {
			struct HandoverPreparationInformation_NB__criticalExtensions__c1 {
				HandoverPreparationInformation_NB__criticalExtensions__c1_PR present;
				union HandoverPreparationInformation_NB__criticalExtensions__c1_u {
					HandoverPreparationInformation_NB_IEs_t	 handoverPreparationInformation_r13;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct HandoverPreparationInformation_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_NB_H_ */
#include <asn_internal.h>
