/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_AffectedCarrierFreqList_v1310_H_
#define	_AffectedCarrierFreqList_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AffectedCarrierFreq_v1310;

/* AffectedCarrierFreqList-v1310 */
typedef struct AffectedCarrierFreqList_v1310 {
	A_SEQUENCE_OF(struct AffectedCarrierFreq_v1310) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AffectedCarrierFreqList_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AffectedCarrierFreqList_v1310;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AffectedCarrierFreq-v1310.h"

#endif	/* _AffectedCarrierFreqList_v1310_H_ */
#include <asn_internal.h>
