/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SystemInformation_H_
#define	_SystemInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemInformation-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformation__criticalExtensions_PR {
	SystemInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	SystemInformation__criticalExtensions_PR_systemInformation_r8,
	SystemInformation__criticalExtensions_PR_criticalExtensionsFuture
} SystemInformation__criticalExtensions_PR;

/* SystemInformation */
typedef struct SystemInformation {
	struct SystemInformation__criticalExtensions {
		SystemInformation__criticalExtensions_PR present;
		union SystemInformation__criticalExtensions_u {
			SystemInformation_r8_IEs_t	 systemInformation_r8;
			struct SystemInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformation_H_ */
#include <asn_internal.h>
