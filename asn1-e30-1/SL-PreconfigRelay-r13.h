/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SL_PreconfigRelay_r13_H_
#define	_SL_PreconfigRelay_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReselectionInfoRelay-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-PreconfigRelay-r13 */
typedef struct SL_PreconfigRelay_r13 {
	ReselectionInfoRelay_r13_t	 reselectionInfoOoC_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PreconfigRelay_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_PreconfigRelay_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PreconfigRelay_r13_H_ */
#include <asn_internal.h>
