/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SecurityModeFailure_H_
#define	_SecurityModeFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "SecurityModeFailure-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityModeFailure__criticalExtensions_PR {
	SecurityModeFailure__criticalExtensions_PR_NOTHING,	/* No components present */
	SecurityModeFailure__criticalExtensions_PR_securityModeFailure_r8,
	SecurityModeFailure__criticalExtensions_PR_criticalExtensionsFuture
} SecurityModeFailure__criticalExtensions_PR;

/* SecurityModeFailure */
typedef struct SecurityModeFailure {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct SecurityModeFailure__criticalExtensions {
		SecurityModeFailure__criticalExtensions_PR present;
		union SecurityModeFailure__criticalExtensions_u {
			SecurityModeFailure_r8_IEs_t	 securityModeFailure_r8;
			struct SecurityModeFailure__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeFailure;

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityModeFailure_H_ */
#include <asn_internal.h>
