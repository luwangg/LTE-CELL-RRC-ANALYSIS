/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_ReselectionInfoRelay_r13_H_
#define	_ReselectionInfoRelay_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Q-RxLevMin.h"
#include "FilterCoefficient.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReselectionInfoRelay_r13__minHyst_r13 {
	ReselectionInfoRelay_r13__minHyst_r13_dB0	= 0,
	ReselectionInfoRelay_r13__minHyst_r13_dB3	= 1,
	ReselectionInfoRelay_r13__minHyst_r13_dB6	= 2,
	ReselectionInfoRelay_r13__minHyst_r13_dB9	= 3,
	ReselectionInfoRelay_r13__minHyst_r13_dB12	= 4,
	ReselectionInfoRelay_r13__minHyst_r13_dBinf	= 5
} e_ReselectionInfoRelay_r13__minHyst_r13;

/* ReselectionInfoRelay-r13 */
typedef struct ReselectionInfoRelay_r13 {
	Q_RxLevMin_t	 q_RxLevMin_r13;
	FilterCoefficient_t	 filterCoefficient_r13;
	long	*minHyst_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReselectionInfoRelay_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_minHyst_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ReselectionInfoRelay_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _ReselectionInfoRelay_r13_H_ */
#include <asn_internal.h>
