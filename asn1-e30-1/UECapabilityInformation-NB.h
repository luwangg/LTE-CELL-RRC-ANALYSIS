/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UECapabilityInformation_NB_H_
#define	_UECapabilityInformation_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UECapabilityInformation-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UECapabilityInformation_NB__criticalExtensions_PR {
	UECapabilityInformation_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	UECapabilityInformation_NB__criticalExtensions_PR_ueCapabilityInformation_r13,
	UECapabilityInformation_NB__criticalExtensions_PR_criticalExtensionsFuture
} UECapabilityInformation_NB__criticalExtensions_PR;

/* UECapabilityInformation-NB */
typedef struct UECapabilityInformation_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct UECapabilityInformation_NB__criticalExtensions {
		UECapabilityInformation_NB__criticalExtensions_PR present;
		union UECapabilityInformation_NB__criticalExtensions_u {
			UECapabilityInformation_NB_r13_IEs_t	 ueCapabilityInformation_r13;
			struct UECapabilityInformation_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityInformation_NB_H_ */
#include <asn_internal.h>
