/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MAC_MainConfigSCell_r11_H_
#define	_MAC_MainConfigSCell_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "STAG-Id-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAC-MainConfigSCell-r11 */
typedef struct MAC_MainConfigSCell_r11 {
	STAG_Id_r11_t	*stag_Id_r11	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_MainConfigSCell_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_MainConfigSCell_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_MainConfigSCell_r11_H_ */
#include <asn_internal.h>
