/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PUSCH_ConfigDedicatedSCell_v1430_H_
#define	_PUSCH_ConfigDedicatedSCell_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Enable256QAM_r14;

/* PUSCH-ConfigDedicatedSCell-v1430 */
typedef struct PUSCH_ConfigDedicatedSCell_v1430 {
	struct Enable256QAM_r14	*enable256QAM_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicatedSCell_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicatedSCell_v1430;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Enable256QAM-r14.h"

#endif	/* _PUSCH_ConfigDedicatedSCell_v1430_H_ */
#include <asn_internal.h>
