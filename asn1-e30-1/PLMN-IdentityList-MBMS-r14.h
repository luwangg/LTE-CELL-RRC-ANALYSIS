/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PLMN_IdentityList_MBMS_r14_H_
#define	_PLMN_IdentityList_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;

/* PLMN-IdentityList-MBMS-r14 */
typedef struct PLMN_IdentityList_MBMS_r14 {
	A_SEQUENCE_OF(struct PLMN_Identity) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityList_MBMS_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityList_MBMS_r14;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"

#endif	/* _PLMN_IdentityList_MBMS_r14_H_ */
#include <asn_internal.h>
