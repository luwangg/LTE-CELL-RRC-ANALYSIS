/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_VarWLAN_MobilityConfig_H_
#define	_VarWLAN_MobilityConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VarWLAN_MobilityConfig__successReportRequested {
	VarWLAN_MobilityConfig__successReportRequested_true	= 0
} e_VarWLAN_MobilityConfig__successReportRequested;

/* Forward declarations */
struct WLAN_Id_List_r13;
struct WLAN_SuspendConfig_r14;

/* VarWLAN-MobilityConfig */
typedef struct VarWLAN_MobilityConfig {
	struct WLAN_Id_List_r13	*wlan_MobilitySet_r13	/* OPTIONAL */;
	long	*successReportRequested	/* OPTIONAL */;
	struct WLAN_SuspendConfig_r14	*wlan_SuspendConfig_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarWLAN_MobilityConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_successReportRequested_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_VarWLAN_MobilityConfig;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WLAN-Id-List-r13.h"
#include "WLAN-SuspendConfig-r14.h"

#endif	/* _VarWLAN_MobilityConfig_H_ */
#include <asn_internal.h>
