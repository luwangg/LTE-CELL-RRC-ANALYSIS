/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CarrierFreqEUTRA_H_
#define	_CarrierFreqEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqEUTRA */
typedef struct CarrierFreqEUTRA {
	ARFCN_ValueEUTRA_t	 dl_CarrierFreq;
	ARFCN_ValueEUTRA_t	*ul_CarrierFreq	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqEUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqEUTRA_H_ */
#include <asn_internal.h>
