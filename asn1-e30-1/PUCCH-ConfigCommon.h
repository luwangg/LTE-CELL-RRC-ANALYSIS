/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PUCCH_ConfigCommon_H_
#define	_PUCCH_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigCommon__deltaPUCCH_Shift {
	PUCCH_ConfigCommon__deltaPUCCH_Shift_ds1	= 0,
	PUCCH_ConfigCommon__deltaPUCCH_Shift_ds2	= 1,
	PUCCH_ConfigCommon__deltaPUCCH_Shift_ds3	= 2
} e_PUCCH_ConfigCommon__deltaPUCCH_Shift;

/* PUCCH-ConfigCommon */
typedef struct PUCCH_ConfigCommon {
	long	 deltaPUCCH_Shift;
	long	 nRB_CQI;
	long	 nCS_AN;
	long	 n1PUCCH_AN;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaPUCCH_Shift_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigCommon;

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ConfigCommon_H_ */
#include <asn_internal.h>
