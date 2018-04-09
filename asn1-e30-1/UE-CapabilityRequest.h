/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UE_CapabilityRequest_H_
#define	_UE_CapabilityRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAT-Type.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-CapabilityRequest */
typedef struct UE_CapabilityRequest {
	A_SEQUENCE_OF(RAT_Type_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_CapabilityRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_CapabilityRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_CapabilityRequest_H_ */
#include <asn_internal.h>
