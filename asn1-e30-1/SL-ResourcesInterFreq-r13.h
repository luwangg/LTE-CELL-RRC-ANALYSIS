/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SL_ResourcesInterFreq_r13_H_
#define	_SL_ResourcesInterFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_DiscRxPoolList_r12;
struct SL_DiscTxResourcesInterFreq_r13;

/* SL-ResourcesInterFreq-r13 */
typedef struct SL_ResourcesInterFreq_r13 {
	struct SL_DiscRxPoolList_r12	*discRxResourcesInterFreq_r13	/* OPTIONAL */;
	struct SL_DiscTxResourcesInterFreq_r13	*discTxResourcesInterFreq_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_ResourcesInterFreq_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_ResourcesInterFreq_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-DiscRxPoolList-r12.h"
#include "SL-DiscTxResourcesInterFreq-r13.h"

#endif	/* _SL_ResourcesInterFreq_r13_H_ */
#include <asn_internal.h>
