/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MBMSSessionInfo_r13_H_
#define	_MBMSSessionInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TMGI-r9.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMSSessionInfo-r13 */
typedef struct MBMSSessionInfo_r13 {
	TMGI_r9_t	 tmgi_r13;
	OCTET_STRING_t	*sessionId_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSSessionInfo_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSSessionInfo_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMSSessionInfo_r13_H_ */
#include <asn_internal.h>
