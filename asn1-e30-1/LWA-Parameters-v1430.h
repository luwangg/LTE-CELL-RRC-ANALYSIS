/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_LWA_Parameters_v1430_H_
#define	_LWA_Parameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LWA_Parameters_v1430__lwa_HO_WithoutWT_Change_r14 {
	LWA_Parameters_v1430__lwa_HO_WithoutWT_Change_r14_supported	= 0
} e_LWA_Parameters_v1430__lwa_HO_WithoutWT_Change_r14;
typedef enum LWA_Parameters_v1430__lwa_UL_r14 {
	LWA_Parameters_v1430__lwa_UL_r14_supported	= 0
} e_LWA_Parameters_v1430__lwa_UL_r14;
typedef enum LWA_Parameters_v1430__wlan_PeriodicMeas_r14 {
	LWA_Parameters_v1430__wlan_PeriodicMeas_r14_supported	= 0
} e_LWA_Parameters_v1430__wlan_PeriodicMeas_r14;
typedef enum LWA_Parameters_v1430__wlan_ReportAnyWLAN_r14 {
	LWA_Parameters_v1430__wlan_ReportAnyWLAN_r14_supported	= 0
} e_LWA_Parameters_v1430__wlan_ReportAnyWLAN_r14;

/* LWA-Parameters-v1430 */
typedef struct LWA_Parameters_v1430 {
	long	*lwa_HO_WithoutWT_Change_r14	/* OPTIONAL */;
	long	*lwa_UL_r14	/* OPTIONAL */;
	long	*wlan_PeriodicMeas_r14	/* OPTIONAL */;
	long	*wlan_ReportAnyWLAN_r14	/* OPTIONAL */;
	long	*wlan_SupportedDataRate_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LWA_Parameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_lwa_HO_WithoutWT_Change_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_lwa_UL_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_wlan_PeriodicMeas_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_wlan_ReportAnyWLAN_r14_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LWA_Parameters_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _LWA_Parameters_v1430_H_ */
#include <asn_internal.h>
