/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SBCCH_SL_BCH_Message_V2X_r14_H_
#define	_SBCCH_SL_BCH_Message_V2X_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SBCCH-SL-BCH-MessageType-V2X-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SBCCH-SL-BCH-Message-V2X-r14 */
typedef struct SBCCH_SL_BCH_Message_V2X_r14 {
	SBCCH_SL_BCH_MessageType_V2X_r14_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SBCCH_SL_BCH_Message_V2X_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBCCH_SL_BCH_Message_V2X_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _SBCCH_SL_BCH_Message_V2X_r14_H_ */
#include <asn_internal.h>
