/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_AdditionalSI_Info_r9_H_
#define	_AdditionalSI_Info_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "CSG-Identity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AdditionalSI_Info_r9__csg_MemberStatus_r9 {
	AdditionalSI_Info_r9__csg_MemberStatus_r9_member	= 0
} e_AdditionalSI_Info_r9__csg_MemberStatus_r9;

/* AdditionalSI-Info-r9 */
typedef struct AdditionalSI_Info_r9 {
	long	*csg_MemberStatus_r9	/* OPTIONAL */;
	CSG_Identity_t	*csg_Identity_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalSI_Info_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csg_MemberStatus_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalSI_Info_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalSI_Info_r9_H_ */
#include <asn_internal.h>
