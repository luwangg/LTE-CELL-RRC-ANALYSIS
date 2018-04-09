/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UECapabilityEnquiry_NB_r13_IEs_H_
#define	_UECapabilityEnquiry_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UECapabilityEnquiry-NB-r13-IEs */
typedef struct UECapabilityEnquiry_NB_r13_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct UECapabilityEnquiry_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_NB_r13_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_NB_r13_IEs_H_ */
#include <asn_internal.h>
