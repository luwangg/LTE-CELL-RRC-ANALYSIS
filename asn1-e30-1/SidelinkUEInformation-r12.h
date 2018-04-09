/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SidelinkUEInformation_r12_H_
#define	_SidelinkUEInformation_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SidelinkUEInformation-r12-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SidelinkUEInformation_r12__criticalExtensions_PR {
	SidelinkUEInformation_r12__criticalExtensions_PR_NOTHING,	/* No components present */
	SidelinkUEInformation_r12__criticalExtensions_PR_c1,
	SidelinkUEInformation_r12__criticalExtensions_PR_criticalExtensionsFuture
} SidelinkUEInformation_r12__criticalExtensions_PR;
typedef enum SidelinkUEInformation_r12__criticalExtensions__c1_PR {
	SidelinkUEInformation_r12__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	SidelinkUEInformation_r12__criticalExtensions__c1_PR_sidelinkUEInformation_r12,
	SidelinkUEInformation_r12__criticalExtensions__c1_PR_spare3,
	SidelinkUEInformation_r12__criticalExtensions__c1_PR_spare2,
	SidelinkUEInformation_r12__criticalExtensions__c1_PR_spare1
} SidelinkUEInformation_r12__criticalExtensions__c1_PR;

/* SidelinkUEInformation-r12 */
typedef struct SidelinkUEInformation_r12 {
	struct SidelinkUEInformation_r12__criticalExtensions {
		SidelinkUEInformation_r12__criticalExtensions_PR present;
		union SidelinkUEInformation_r12__criticalExtensions_u {
			struct SidelinkUEInformation_r12__criticalExtensions__c1 {
				SidelinkUEInformation_r12__criticalExtensions__c1_PR present;
				union SidelinkUEInformation_r12__criticalExtensions__c1_u {
					SidelinkUEInformation_r12_IEs_t	 sidelinkUEInformation_r12;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct SidelinkUEInformation_r12__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SidelinkUEInformation_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SidelinkUEInformation_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _SidelinkUEInformation_r12_H_ */
#include <asn_internal.h>
