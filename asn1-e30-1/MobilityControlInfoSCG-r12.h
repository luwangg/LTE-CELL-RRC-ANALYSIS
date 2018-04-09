/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MobilityControlInfoSCG_r12_H_
#define	_MobilityControlInfoSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "C-RNTI.h"
#include "CipheringAlgorithm-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityControlInfoSCG_r12__t307_r12 {
	MobilityControlInfoSCG_r12__t307_r12_ms50	= 0,
	MobilityControlInfoSCG_r12__t307_r12_ms100	= 1,
	MobilityControlInfoSCG_r12__t307_r12_ms150	= 2,
	MobilityControlInfoSCG_r12__t307_r12_ms200	= 3,
	MobilityControlInfoSCG_r12__t307_r12_ms500	= 4,
	MobilityControlInfoSCG_r12__t307_r12_ms1000	= 5,
	MobilityControlInfoSCG_r12__t307_r12_ms2000	= 6,
	MobilityControlInfoSCG_r12__t307_r12_spare1	= 7
} e_MobilityControlInfoSCG_r12__t307_r12;
typedef enum MobilityControlInfoSCG_r12__makeBeforeBreakSCG_r14 {
	MobilityControlInfoSCG_r12__makeBeforeBreakSCG_r14_true	= 0
} e_MobilityControlInfoSCG_r12__makeBeforeBreakSCG_r14;

/* Forward declarations */
struct RACH_ConfigDedicated;
struct RACH_Skip_r14;

/* MobilityControlInfoSCG-r12 */
typedef struct MobilityControlInfoSCG_r12 {
	long	 t307_r12;
	C_RNTI_t	*ue_IdentitySCG_r12	/* OPTIONAL */;
	struct RACH_ConfigDedicated	*rach_ConfigDedicated_r12	/* OPTIONAL */;
	CipheringAlgorithm_r12_t	*cipheringAlgorithmSCG_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*makeBeforeBreakSCG_r14	/* OPTIONAL */;
	struct RACH_Skip_r14	*rach_SkipSCG_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityControlInfoSCG_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t307_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_makeBeforeBreakSCG_r14_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MobilityControlInfoSCG_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RACH-ConfigDedicated.h"
#include "RACH-Skip-r14.h"

#endif	/* _MobilityControlInfoSCG_r12_H_ */
#include <asn_internal.h>
