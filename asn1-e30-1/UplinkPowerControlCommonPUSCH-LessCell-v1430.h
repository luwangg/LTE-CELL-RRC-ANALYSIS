/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UplinkPowerControlCommonPUSCH_LessCell_v1430_H_
#define	_UplinkPowerControlCommonPUSCH_LessCell_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Alpha-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UplinkPowerControlCommonPUSCH-LessCell-v1430 */
typedef struct UplinkPowerControlCommonPUSCH_LessCell_v1430 {
	long	*p0_Nominal_PeriodicSRS_r14	/* OPTIONAL */;
	long	*p0_Nominal_AperiodicSRS_r14	/* OPTIONAL */;
	Alpha_r12_t	*alpha_SRS_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlCommonPUSCH_LessCell_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlCommonPUSCH_LessCell_v1430_H_ */
#include <asn_internal.h>
