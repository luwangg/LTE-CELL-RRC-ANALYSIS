/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MobilityControlInfo_H_
#define	_MobilityControlInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "AdditionalSpectrumEmission.h"
#include <NativeEnumerated.h>
#include "C-RNTI.h"
#include "RadioResourceConfigCommon.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityControlInfo__t304 {
	MobilityControlInfo__t304_ms50	= 0,
	MobilityControlInfo__t304_ms100	= 1,
	MobilityControlInfo__t304_ms150	= 2,
	MobilityControlInfo__t304_ms200	= 3,
	MobilityControlInfo__t304_ms500	= 4,
	MobilityControlInfo__t304_ms1000	= 5,
	MobilityControlInfo__t304_ms2000	= 6,
	MobilityControlInfo__t304_ms10000_v1310	= 7
} e_MobilityControlInfo__t304;
typedef enum MobilityControlInfo__drb_ContinueROHC_r11 {
	MobilityControlInfo__drb_ContinueROHC_r11_true	= 0
} e_MobilityControlInfo__drb_ContinueROHC_r11;
typedef enum MobilityControlInfo__handoverWithoutWT_Change_r14 {
	MobilityControlInfo__handoverWithoutWT_Change_r14_keepLWA_Config	= 0,
	MobilityControlInfo__handoverWithoutWT_Change_r14_sendEndMarker	= 1
} e_MobilityControlInfo__handoverWithoutWT_Change_r14;
typedef enum MobilityControlInfo__makeBeforeBreak_r14 {
	MobilityControlInfo__makeBeforeBreak_r14_true	= 0
} e_MobilityControlInfo__makeBeforeBreak_r14;
typedef enum MobilityControlInfo__sameSFN_Indication_r14 {
	MobilityControlInfo__sameSFN_Indication_r14_true	= 0
} e_MobilityControlInfo__sameSFN_Indication_r14;

/* Forward declarations */
struct CarrierFreqEUTRA;
struct CarrierBandwidthEUTRA;
struct RACH_ConfigDedicated;
struct CarrierFreqEUTRA_v9e0;
struct MobilityControlInfoV2X_r14;
struct RACH_Skip_r14;

/* MobilityControlInfo */
typedef struct MobilityControlInfo {
	PhysCellId_t	 targetPhysCellId;
	struct CarrierFreqEUTRA	*carrierFreq	/* OPTIONAL */;
	struct CarrierBandwidthEUTRA	*carrierBandwidth	/* OPTIONAL */;
	AdditionalSpectrumEmission_t	*additionalSpectrumEmission	/* OPTIONAL */;
	long	 t304;
	C_RNTI_t	 newUE_Identity;
	RadioResourceConfigCommon_t	 radioResourceConfigCommon;
	struct RACH_ConfigDedicated	*rach_ConfigDedicated	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CarrierFreqEUTRA_v9e0	*carrierFreq_v9e0	/* OPTIONAL */;
	long	*drb_ContinueROHC_r11	/* OPTIONAL */;
	struct MobilityControlInfoV2X_r14	*mobilityControlInfoV2X_r14	/* OPTIONAL */;
	long	*handoverWithoutWT_Change_r14	/* OPTIONAL */;
	long	*makeBeforeBreak_r14	/* OPTIONAL */;
	struct RACH_Skip_r14	*rach_Skip_r14	/* OPTIONAL */;
	long	*sameSFN_Indication_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityControlInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t304_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drb_ContinueROHC_r11_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_handoverWithoutWT_Change_r14_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_makeBeforeBreak_r14_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sameSFN_Indication_r14_29;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MobilityControlInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqEUTRA.h"
#include "CarrierBandwidthEUTRA.h"
#include "RACH-ConfigDedicated.h"
#include "CarrierFreqEUTRA-v9e0.h"
#include "MobilityControlInfoV2X-r14.h"
#include "RACH-Skip-r14.h"

#endif	/* _MobilityControlInfo_H_ */
#include <asn_internal.h>
