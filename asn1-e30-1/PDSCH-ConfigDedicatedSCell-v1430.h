/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PDSCH_ConfigDedicatedSCell_v1430_H_
#define	_PDSCH_ConfigDedicatedSCell_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_ConfigDedicatedSCell_v1430__tbsIndexAlt2_r14 {
	PDSCH_ConfigDedicatedSCell_v1430__tbsIndexAlt2_r14_b33	= 0
} e_PDSCH_ConfigDedicatedSCell_v1430__tbsIndexAlt2_r14;

/* PDSCH-ConfigDedicatedSCell-v1430 */
typedef struct PDSCH_ConfigDedicatedSCell_v1430 {
	long	*tbsIndexAlt2_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigDedicatedSCell_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt2_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicatedSCell_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigDedicatedSCell_v1430_H_ */
#include <asn_internal.h>
