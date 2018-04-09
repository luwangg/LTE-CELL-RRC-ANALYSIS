/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CSI_RS_ConfigNZP_EMIMO_v1430_H_
#define	_CSI_RS_ConfigNZP_EMIMO_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_ConfigNZP_EMIMO_v1430__cdmType_v1430 {
	CSI_RS_ConfigNZP_EMIMO_v1430__cdmType_v1430_cdm8	= 0
} e_CSI_RS_ConfigNZP_EMIMO_v1430__cdmType_v1430;

/* Forward declarations */
struct NZP_ResourceConfig_r13;

/* CSI-RS-ConfigNZP-EMIMO-v1430 */
typedef struct CSI_RS_ConfigNZP_EMIMO_v1430 {
	struct CSI_RS_ConfigNZP_EMIMO_v1430__nzp_resourceConfigListExt_r14 {
		A_SEQUENCE_OF(struct NZP_ResourceConfig_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nzp_resourceConfigListExt_r14;
	long	*cdmType_v1430	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigNZP_EMIMO_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cdmType_v1430_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigNZP_EMIMO_v1430;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NZP-ResourceConfig-r13.h"

#endif	/* _CSI_RS_ConfigNZP_EMIMO_v1430_H_ */
#include <asn_internal.h>
