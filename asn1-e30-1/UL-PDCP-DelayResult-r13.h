/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UL_PDCP_DelayResult_r13_H_
#define	_UL_PDCP_DelayResult_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_PDCP_DelayResult_r13__qci_Id_r13 {
	UL_PDCP_DelayResult_r13__qci_Id_r13_qci1	= 0,
	UL_PDCP_DelayResult_r13__qci_Id_r13_qci2	= 1,
	UL_PDCP_DelayResult_r13__qci_Id_r13_qci3	= 2,
	UL_PDCP_DelayResult_r13__qci_Id_r13_qci4	= 3,
	UL_PDCP_DelayResult_r13__qci_Id_r13_spare4	= 4,
	UL_PDCP_DelayResult_r13__qci_Id_r13_spare3	= 5,
	UL_PDCP_DelayResult_r13__qci_Id_r13_spare2	= 6,
	UL_PDCP_DelayResult_r13__qci_Id_r13_spare1	= 7
} e_UL_PDCP_DelayResult_r13__qci_Id_r13;

/* UL-PDCP-DelayResult-r13 */
typedef struct UL_PDCP_DelayResult_r13 {
	long	 qci_Id_r13;
	long	 excessDelay_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_PDCP_DelayResult_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_qci_Id_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_PDCP_DelayResult_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_PDCP_DelayResult_r13_H_ */
#include <asn_internal.h>
