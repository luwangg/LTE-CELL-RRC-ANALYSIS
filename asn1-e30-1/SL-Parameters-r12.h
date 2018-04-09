/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SL_Parameters_r12_H_
#define	_SL_Parameters_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_Parameters_r12__commSimultaneousTx_r12 {
	SL_Parameters_r12__commSimultaneousTx_r12_supported	= 0
} e_SL_Parameters_r12__commSimultaneousTx_r12;
typedef enum SL_Parameters_r12__discScheduledResourceAlloc_r12 {
	SL_Parameters_r12__discScheduledResourceAlloc_r12_supported	= 0
} e_SL_Parameters_r12__discScheduledResourceAlloc_r12;
typedef enum SL_Parameters_r12__disc_UE_SelectedResourceAlloc_r12 {
	SL_Parameters_r12__disc_UE_SelectedResourceAlloc_r12_supported	= 0
} e_SL_Parameters_r12__disc_UE_SelectedResourceAlloc_r12;
typedef enum SL_Parameters_r12__disc_SLSS_r12 {
	SL_Parameters_r12__disc_SLSS_r12_supported	= 0
} e_SL_Parameters_r12__disc_SLSS_r12;
typedef enum SL_Parameters_r12__discSupportedProc_r12 {
	SL_Parameters_r12__discSupportedProc_r12_n50	= 0,
	SL_Parameters_r12__discSupportedProc_r12_n400	= 1
} e_SL_Parameters_r12__discSupportedProc_r12;

/* Forward declarations */
struct FreqBandIndicatorListEUTRA_r12;
struct SupportedBandInfoList_r12;

/* SL-Parameters-r12 */
typedef struct SL_Parameters_r12 {
	long	*commSimultaneousTx_r12	/* OPTIONAL */;
	struct FreqBandIndicatorListEUTRA_r12	*commSupportedBands_r12	/* OPTIONAL */;
	struct SupportedBandInfoList_r12	*discSupportedBands_r12	/* OPTIONAL */;
	long	*discScheduledResourceAlloc_r12	/* OPTIONAL */;
	long	*disc_UE_SelectedResourceAlloc_r12	/* OPTIONAL */;
	long	*disc_SLSS_r12	/* OPTIONAL */;
	long	*discSupportedProc_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_Parameters_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_commSimultaneousTx_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_discScheduledResourceAlloc_r12_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_disc_UE_SelectedResourceAlloc_r12_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_disc_SLSS_r12_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_discSupportedProc_r12_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_Parameters_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FreqBandIndicatorListEUTRA-r12.h"
#include "SupportedBandInfoList-r12.h"

#endif	/* _SL_Parameters_r12_H_ */
#include <asn_internal.h>
