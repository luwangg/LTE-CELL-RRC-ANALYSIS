/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_DataBLER_MCH_ResultList_r12_H_
#define	_DataBLER_MCH_ResultList_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DataBLER_MCH_Result_r12;

/* DataBLER-MCH-ResultList-r12 */
typedef struct DataBLER_MCH_ResultList_r12 {
	A_SEQUENCE_OF(struct DataBLER_MCH_Result_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DataBLER_MCH_ResultList_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataBLER_MCH_ResultList_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DataBLER-MCH-Result-r12.h"

#endif	/* _DataBLER_MCH_ResultList_r12_H_ */
#include <asn_internal.h>
