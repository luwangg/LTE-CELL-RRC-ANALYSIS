/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CellSelectionInfo_NB_v1430_H_
#define	_CellSelectionInfo_NB_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14 {
	CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB_6	= 0,
	CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB_3	= 1,
	CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB3	= 2,
	CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB6	= 3,
	CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB9	= 4,
	CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB12	= 5
} e_CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14;
typedef enum CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14 {
	CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB5	= 0,
	CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB10	= 1,
	CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB15	= 2,
	CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB20	= 3,
	CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB25	= 4,
	CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB30	= 5,
	CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB35	= 6
} e_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14;

/* CellSelectionInfo-NB-v1430 */
typedef struct CellSelectionInfo_NB_v1430 {
	long	*powerClass14dBm_Offset_r14	/* OPTIONAL */;
	long	*ce_authorisationOffset_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellSelectionInfo_NB_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerClass14dBm_Offset_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_authorisationOffset_r14_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellSelectionInfo_NB_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _CellSelectionInfo_NB_v1430_H_ */
#include <asn_internal.h>
