/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UEInformationResponse_v930_IEs_H_
#define	_UEInformationResponse_v930_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UEInformationResponse_v1020_IEs;

/* UEInformationResponse-v930-IEs */
typedef struct UEInformationResponse_v930_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct UEInformationResponse_v1020_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_v930_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_v930_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UEInformationResponse-v1020-IEs.h"

#endif	/* _UEInformationResponse_v930_IEs_H_ */
#include <asn_internal.h>
