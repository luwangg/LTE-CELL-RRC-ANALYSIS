/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CellSelectionInfo_v1250_H_
#define	_CellSelectionInfo_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Q-QualMin-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellSelectionInfo-v1250 */
typedef struct CellSelectionInfo_v1250 {
	Q_QualMin_r9_t	 q_QualMinRSRQ_OnAllSymbols_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellSelectionInfo_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellSelectionInfo_v1250;

#ifdef __cplusplus
}
#endif

#endif	/* _CellSelectionInfo_v1250_H_ */
#include <asn_internal.h>
