/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CellInfoListUTRA_TDD_r10_H_
#define	_CellInfoListUTRA_TDD_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellInfoUTRA_TDD_r10;

/* CellInfoListUTRA-TDD-r10 */
typedef struct CellInfoListUTRA_TDD_r10 {
	A_SEQUENCE_OF(struct CellInfoUTRA_TDD_r10) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfoListUTRA_TDD_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfoListUTRA_TDD_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellInfoUTRA-TDD-r10.h"

#endif	/* _CellInfoListUTRA_TDD_r10_H_ */
#include <asn_internal.h>
