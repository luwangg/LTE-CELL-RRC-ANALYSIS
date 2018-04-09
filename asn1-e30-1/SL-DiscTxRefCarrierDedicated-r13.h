/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SL_DiscTxRefCarrierDedicated_r13_H_
#define	_SL_DiscTxRefCarrierDedicated_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "SCellIndex-r10.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_DiscTxRefCarrierDedicated_r13_PR {
	SL_DiscTxRefCarrierDedicated_r13_PR_NOTHING,	/* No components present */
	SL_DiscTxRefCarrierDedicated_r13_PR_pCell,
	SL_DiscTxRefCarrierDedicated_r13_PR_sCell
} SL_DiscTxRefCarrierDedicated_r13_PR;

/* SL-DiscTxRefCarrierDedicated-r13 */
typedef struct SL_DiscTxRefCarrierDedicated_r13 {
	SL_DiscTxRefCarrierDedicated_r13_PR present;
	union SL_DiscTxRefCarrierDedicated_r13_u {
		NULL_t	 pCell;
		SCellIndex_r10_t	 sCell;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscTxRefCarrierDedicated_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscTxRefCarrierDedicated_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_DiscTxRefCarrierDedicated_r13_H_ */
#include <asn_internal.h>
