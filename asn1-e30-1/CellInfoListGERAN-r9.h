/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CellInfoListGERAN_r9_H_
#define	_CellInfoListGERAN_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellInfoGERAN_r9;

/* CellInfoListGERAN-r9 */
typedef struct CellInfoListGERAN_r9 {
	A_SEQUENCE_OF(struct CellInfoGERAN_r9) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfoListGERAN_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfoListGERAN_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellInfoGERAN-r9.h"

#endif	/* _CellInfoListGERAN_r9_H_ */
#include <asn_internal.h>
