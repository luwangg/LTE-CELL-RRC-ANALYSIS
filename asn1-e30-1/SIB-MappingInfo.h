/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SIB_MappingInfo_H_
#define	_SIB_MappingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-Type.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SIB-MappingInfo */
typedef struct SIB_MappingInfo {
	A_SEQUENCE_OF(SIB_Type_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB_MappingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB_MappingInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_MappingInfo_H_ */
#include <asn_internal.h>
