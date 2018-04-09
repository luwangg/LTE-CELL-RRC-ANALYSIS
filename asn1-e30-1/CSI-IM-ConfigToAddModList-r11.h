/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CSI_IM_ConfigToAddModList_r11_H_
#define	_CSI_IM_ConfigToAddModList_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_IM_Config_r11;

/* CSI-IM-ConfigToAddModList-r11 */
typedef struct CSI_IM_ConfigToAddModList_r11 {
	A_SEQUENCE_OF(struct CSI_IM_Config_r11) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_IM_ConfigToAddModList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_IM_ConfigToAddModList_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CSI-IM-Config-r11.h"

#endif	/* _CSI_IM_ConfigToAddModList_r11_H_ */
#include <asn_internal.h>
