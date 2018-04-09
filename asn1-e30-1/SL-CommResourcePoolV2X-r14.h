/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SL_CommResourcePoolV2X_r14_H_
#define	_SL_CommResourcePoolV2X_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SubframeBitmapSL-r14.h"
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "SL-V2X-TxPoolReportIdentity-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_CommResourcePoolV2X_r14__sizeSubchannel_r14 {
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n4	= 0,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n5	= 1,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n6	= 2,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n8	= 3,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n9	= 4,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n10	= 5,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n12	= 6,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n15	= 7,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n16	= 8,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n18	= 9,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n20	= 10,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n25	= 11,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n30	= 12,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n48	= 13,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n50	= 14,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n72	= 15,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n75	= 16,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n96	= 17,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_n100	= 18,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare13	= 19,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare12	= 20,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare11	= 21,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare10	= 22,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare9	= 23,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare8	= 24,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare7	= 25,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare6	= 26,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare5	= 27,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare4	= 28,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare3	= 29,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare2	= 30,
	SL_CommResourcePoolV2X_r14__sizeSubchannel_r14_spare1	= 31
} e_SL_CommResourcePoolV2X_r14__sizeSubchannel_r14;
typedef enum SL_CommResourcePoolV2X_r14__numSubchannel_r14 {
	SL_CommResourcePoolV2X_r14__numSubchannel_r14_n1	= 0,
	SL_CommResourcePoolV2X_r14__numSubchannel_r14_n3	= 1,
	SL_CommResourcePoolV2X_r14__numSubchannel_r14_n5	= 2,
	SL_CommResourcePoolV2X_r14__numSubchannel_r14_n8	= 3,
	SL_CommResourcePoolV2X_r14__numSubchannel_r14_n10	= 4,
	SL_CommResourcePoolV2X_r14__numSubchannel_r14_n15	= 5,
	SL_CommResourcePoolV2X_r14__numSubchannel_r14_n20	= 6,
	SL_CommResourcePoolV2X_r14__numSubchannel_r14_spare1	= 7
} e_SL_CommResourcePoolV2X_r14__numSubchannel_r14;

/* Forward declarations */
struct SL_OffsetIndicator_r12;
struct SL_TxParameters_r12;
struct SL_CBR_PPPP_TxConfigList_r14;
struct SL_P2X_ResourceSelectionConfig_r14;
struct SL_SyncAllowed_r14;
struct SL_RestrictResourceReservationPeriodList_r14;
struct TDD_Config;

/* SL-CommResourcePoolV2X-r14 */
typedef struct SL_CommResourcePoolV2X_r14 {
	struct SL_OffsetIndicator_r12	*sl_OffsetIndicator_r14	/* OPTIONAL */;
	SubframeBitmapSL_r14_t	 sl_Subframe_r14;
	BOOLEAN_t	 adjacencyPSCCH_PSSCH_r14;
	long	 sizeSubchannel_r14;
	long	 numSubchannel_r14;
	long	 startRB_Subchannel_r14;
	long	*startRB_PSCCH_Pool_r14	/* OPTIONAL */;
	struct SL_CommResourcePoolV2X_r14__rxParametersNCell_r14 {
		struct TDD_Config	*tdd_Config_r14	/* OPTIONAL */;
		long	 syncConfigIndex_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParametersNCell_r14;
	struct SL_TxParameters_r12	*dataTxParameters_r14	/* OPTIONAL */;
	long	*zoneID_r14	/* OPTIONAL */;
	long	*threshS_RSSI_CBR_r14	/* OPTIONAL */;
	SL_V2X_TxPoolReportIdentity_r14_t	*poolReportId_r14	/* OPTIONAL */;
	struct SL_CBR_PPPP_TxConfigList_r14	*cbr_pssch_TxConfigList_r14	/* OPTIONAL */;
	struct SL_P2X_ResourceSelectionConfig_r14	*resourceSelectionConfigP2X_r14	/* OPTIONAL */;
	struct SL_SyncAllowed_r14	*syncAllowed_r14	/* OPTIONAL */;
	struct SL_RestrictResourceReservationPeriodList_r14	*restrictResourceReservationPeriod_r14	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CommResourcePoolV2X_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sizeSubchannel_r14_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_numSubchannel_r14_38;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_CommResourcePoolV2X_r14;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-OffsetIndicator-r12.h"
#include "SL-TxParameters-r12.h"
#include "SL-CBR-PPPP-TxConfigList-r14.h"
#include "SL-P2X-ResourceSelectionConfig-r14.h"
#include "SL-SyncAllowed-r14.h"
#include "SL-RestrictResourceReservationPeriodList-r14.h"
#include "TDD-Config.h"

#endif	/* _SL_CommResourcePoolV2X_r14_H_ */
#include <asn_internal.h>
