/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RF_Parameters_v1270_H_
#define	_RF_Parameters_v1270_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandCombination_v1270;
struct SupportedBandCombinationAdd_v1270;

/* RF-Parameters-v1270 */
typedef struct RF_Parameters_v1270 {
	struct SupportedBandCombination_v1270	*supportedBandCombination_v1270	/* OPTIONAL */;
	struct SupportedBandCombinationAdd_v1270	*supportedBandCombinationAdd_v1270	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1270_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1270;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandCombination-v1270.h"
#include "SupportedBandCombinationAdd-v1270.h"

#endif	/* _RF_Parameters_v1270_H_ */
#include <asn_internal.h>
