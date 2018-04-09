/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PUCCH_ConfigCommon_v1310_H_
#define	_PUCCH_ConfigCommon_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13 {
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13_n1	= 0,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13_n2	= 1,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13_n4	= 2,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13_n8	= 3
} e_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13;
typedef enum PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13 {
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13_n1	= 0,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13_n2	= 1,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13_n4	= 2,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13_n8	= 3
} e_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13;
typedef enum PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13 {
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13_n4	= 0,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13_n8	= 1,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13_n16	= 2,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13_n32	= 3
} e_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13;
typedef enum PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13 {
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13_n4	= 0,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13_n8	= 1,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13_n16	= 2,
	PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13_n32	= 3
} e_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13;

/* Forward declarations */
struct N1PUCCH_AN_InfoList_r13;

/* PUCCH-ConfigCommon-v1310 */
typedef struct PUCCH_ConfigCommon_v1310 {
	struct N1PUCCH_AN_InfoList_r13	*n1PUCCH_AN_InfoList_r13	/* OPTIONAL */;
	long	*pucch_NumRepetitionCE_Msg4_Level0_r13	/* OPTIONAL */;
	long	*pucch_NumRepetitionCE_Msg4_Level1_r13	/* OPTIONAL */;
	long	*pucch_NumRepetitionCE_Msg4_Level2_r13	/* OPTIONAL */;
	long	*pucch_NumRepetitionCE_Msg4_Level3_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigCommon_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_NumRepetitionCE_Msg4_Level0_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_NumRepetitionCE_Msg4_Level1_r13_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_NumRepetitionCE_Msg4_Level2_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_NumRepetitionCE_Msg4_Level3_r13_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigCommon_v1310;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "N1PUCCH-AN-InfoList-r13.h"

#endif	/* _PUCCH_ConfigCommon_v1310_H_ */
#include <asn_internal.h>
