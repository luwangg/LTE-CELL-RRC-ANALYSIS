/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_DC_Parameters_v1310_H_
#define	_DC_Parameters_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DC_Parameters_v1310__pdcp_TransferSplitUL_r13 {
	DC_Parameters_v1310__pdcp_TransferSplitUL_r13_supported	= 0
} e_DC_Parameters_v1310__pdcp_TransferSplitUL_r13;
typedef enum DC_Parameters_v1310__ue_SSTD_Meas_r13 {
	DC_Parameters_v1310__ue_SSTD_Meas_r13_supported	= 0
} e_DC_Parameters_v1310__ue_SSTD_Meas_r13;

/* DC-Parameters-v1310 */
typedef struct DC_Parameters_v1310 {
	long	*pdcp_TransferSplitUL_r13	/* OPTIONAL */;
	long	*ue_SSTD_Meas_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DC_Parameters_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcp_TransferSplitUL_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_SSTD_Meas_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DC_Parameters_v1310;

#ifdef __cplusplus
}
#endif

#endif	/* _DC_Parameters_v1310_H_ */
#include <asn_internal.h>
