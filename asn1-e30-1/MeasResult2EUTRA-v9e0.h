/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasResult2EUTRA_v9e0_H_
#define	_MeasResult2EUTRA_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-v9e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResult2EUTRA-v9e0 */
typedef struct MeasResult2EUTRA_v9e0 {
	ARFCN_ValueEUTRA_v9e0_t	*carrierFreq_v9e0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResult2EUTRA_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResult2EUTRA_v9e0;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResult2EUTRA_v9e0_H_ */
#include <asn_internal.h>
