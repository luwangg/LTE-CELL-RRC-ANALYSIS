/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_BandClassListCDMA2000_H_
#define	_BandClassListCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandClassInfoCDMA2000;

/* BandClassListCDMA2000 */
typedef struct BandClassListCDMA2000 {
	A_SEQUENCE_OF(struct BandClassInfoCDMA2000) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandClassListCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandClassListCDMA2000;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandClassInfoCDMA2000.h"

#endif	/* _BandClassListCDMA2000_H_ */
#include <asn_internal.h>
