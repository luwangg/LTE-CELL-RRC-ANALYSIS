/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_AS_Config_v9e0_H_
#define	_AS_Config_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-v9e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AS-Config-v9e0 */
typedef struct AS_Config_v9e0 {
	ARFCN_ValueEUTRA_v9e0_t	 sourceDl_CarrierFreq_v9e0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AS_Config_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_Config_v9e0;

#ifdef __cplusplus
}
#endif

#endif	/* _AS_Config_v9e0_H_ */
#include <asn_internal.h>
