/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CellInfoUTRA_TDD_r10_H_
#define	_CellInfoUTRA_TDD_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdUTRA-TDD.h"
#include "ARFCN-ValueUTRA.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellInfoUTRA-TDD-r10 */
typedef struct CellInfoUTRA_TDD_r10 {
	PhysCellIdUTRA_TDD_t	 physCellId_r10;
	ARFCN_ValueUTRA_t	 carrierFreq_r10;
	OCTET_STRING_t	 utra_BCCH_Container_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfoUTRA_TDD_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfoUTRA_TDD_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _CellInfoUTRA_TDD_r10_H_ */
#include <asn_internal.h>
