/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PhyLayerParameters_v1330_H_
#define	_PhyLayerParameters_v1330_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeA_r13 {
	PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeA_r13_supported	= 0
} e_PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeA_r13;
typedef enum PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeB_r13 {
	PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeB_r13_supported	= 0
} e_PhyLayerParameters_v1330__cch_InterfMitigation_RefRecTypeB_r13;

/* PhyLayerParameters-v1330 */
typedef struct PhyLayerParameters_v1330 {
	long	*cch_InterfMitigation_RefRecTypeA_r13	/* OPTIONAL */;
	long	*cch_InterfMitigation_RefRecTypeB_r13	/* OPTIONAL */;
	long	*cch_InterfMitigation_MaxNumCCs_r13	/* OPTIONAL */;
	long	*crs_InterfMitigationTM1toTM9_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1330_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1330;

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1330_H_ */
#include <asn_internal.h>
