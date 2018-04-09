/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UE_EUTRA_Capability_v10c0_IEs_H_
#define	_UE_EUTRA_Capability_v10c0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OTDOA_PositioningCapabilities_r10;
struct UE_EUTRA_Capability_v10f0_IEs;

/* UE-EUTRA-Capability-v10c0-IEs */
typedef struct UE_EUTRA_Capability_v10c0_IEs {
	struct OTDOA_PositioningCapabilities_r10	*otdoa_PositioningCapabilities_r10	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v10f0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v10c0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v10c0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OTDOA-PositioningCapabilities-r10.h"
#include "UE-EUTRA-Capability-v10f0-IEs.h"

#endif	/* _UE_EUTRA_Capability_v10c0_IEs_H_ */
#include <asn_internal.h>
