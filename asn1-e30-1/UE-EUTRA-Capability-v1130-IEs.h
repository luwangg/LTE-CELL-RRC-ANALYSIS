/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UE_EUTRA_Capability_v1130_IEs_H_
#define	_UE_EUTRA_Capability_v1130_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDCP-Parameters-v1130.h"
#include "RF-Parameters-v1130.h"
#include "MeasParameters-v1130.h"
#include "IRAT-ParametersCDMA2000-v1130.h"
#include "Other-Parameters-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1130;
struct UE_EUTRA_CapabilityAddXDD_Mode_v1130;
struct UE_EUTRA_Capability_v1170_IEs;

/* UE-EUTRA-Capability-v1130-IEs */
typedef struct UE_EUTRA_Capability_v1130_IEs {
	PDCP_Parameters_v1130_t	 pdcp_Parameters_v1130;
	struct PhyLayerParameters_v1130	*phyLayerParameters_v1130	/* OPTIONAL */;
	RF_Parameters_v1130_t	 rf_Parameters_v1130;
	MeasParameters_v1130_t	 measParameters_v1130;
	IRAT_ParametersCDMA2000_v1130_t	 interRAT_ParametersCDMA2000_v1130;
	Other_Parameters_r11_t	 otherParameters_r11;
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1130	*fdd_Add_UE_EUTRA_Capabilities_v1130	/* OPTIONAL */;
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1130	*tdd_Add_UE_EUTRA_Capabilities_v1130	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1170_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1130_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1130_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v1130.h"
#include "UE-EUTRA-CapabilityAddXDD-Mode-v1130.h"
#include "UE-EUTRA-Capability-v1170-IEs.h"

#endif	/* _UE_EUTRA_Capability_v1130_IEs_H_ */
#include <asn_internal.h>
