/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CellReselectionServingFreqInfo_v1310_H_
#define	_CellReselectionServingFreqInfo_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellReselectionSubPriority-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellReselectionServingFreqInfo-v1310 */
typedef struct CellReselectionServingFreqInfo_v1310 {
	CellReselectionSubPriority_r13_t	 cellReselectionSubPriority_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionServingFreqInfo_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionServingFreqInfo_v1310;

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionServingFreqInfo_v1310_H_ */
#include <asn_internal.h>
