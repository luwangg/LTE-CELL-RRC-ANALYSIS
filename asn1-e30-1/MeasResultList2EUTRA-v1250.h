/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasResultList2EUTRA_v1250_H_
#define	_MeasResultList2EUTRA_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResult2EUTRA_v1250;

/* MeasResultList2EUTRA-v1250 */
typedef struct MeasResultList2EUTRA_v1250 {
	A_SEQUENCE_OF(struct MeasResult2EUTRA_v1250) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultList2EUTRA_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultList2EUTRA_v1250;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResult2EUTRA-v1250.h"

#endif	/* _MeasResultList2EUTRA_v1250_H_ */
#include <asn_internal.h>
