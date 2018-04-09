/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SupportedBandCombinationReduced_v1430_H_
#define	_SupportedBandCombinationReduced_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombinationParameters_v1430;

/* SupportedBandCombinationReduced-v1430 */
typedef struct SupportedBandCombinationReduced_v1430 {
	A_SEQUENCE_OF(struct BandCombinationParameters_v1430) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandCombinationReduced_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandCombinationReduced_v1430;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandCombinationParameters-v1430.h"

#endif	/* _SupportedBandCombinationReduced_v1430_H_ */
#include <asn_internal.h>
