/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SchedulingInfoList_BR_r13_H_
#define	_SchedulingInfoList_BR_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SchedulingInfo_BR_r13;

/* SchedulingInfoList-BR-r13 */
typedef struct SchedulingInfoList_BR_r13 {
	A_SEQUENCE_OF(struct SchedulingInfo_BR_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInfoList_BR_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInfoList_BR_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SchedulingInfo-BR-r13.h"

#endif	/* _SchedulingInfoList_BR_r13_H_ */
#include <asn_internal.h>
