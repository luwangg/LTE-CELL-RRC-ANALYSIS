/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_DL_DCCH_Message_NB_H_
#define	_DL_DCCH_Message_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-DCCH-MessageType-NB.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-DCCH-Message-NB */
typedef struct DL_DCCH_Message_NB {
	DL_DCCH_MessageType_NB_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DCCH_Message_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DCCH_Message_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_DCCH_Message_NB_H_ */
#include <asn_internal.h>
