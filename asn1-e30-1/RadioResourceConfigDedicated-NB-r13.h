/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RadioResourceConfigDedicated_NB_r13_H_
#define	_RadioResourceConfigDedicated_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MAC-MainConfig-NB-r13.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR {
	RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR_NOTHING,	/* No components present */
	RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR_explicitValue_r13,
	RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR_defaultValue_r13
} RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR;

/* Forward declarations */
struct SRB_ToAddModList_NB_r13;
struct DRB_ToAddModList_NB_r13;
struct DRB_ToReleaseList_NB_r13;
struct PhysicalConfigDedicated_NB_r13;
struct RLF_TimersAndConstants_NB_r13;

/* RadioResourceConfigDedicated-NB-r13 */
typedef struct RadioResourceConfigDedicated_NB_r13 {
	struct SRB_ToAddModList_NB_r13	*srb_ToAddModList_r13	/* OPTIONAL */;
	struct DRB_ToAddModList_NB_r13	*drb_ToAddModList_r13	/* OPTIONAL */;
	struct DRB_ToReleaseList_NB_r13	*drb_ToReleaseList_r13	/* OPTIONAL */;
	struct RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13 {
		RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR present;
		union RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_u {
			MAC_MainConfig_NB_r13_t	 explicitValue_r13;
			NULL_t	 defaultValue_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mac_MainConfig_r13;
	struct PhysicalConfigDedicated_NB_r13	*physicalConfigDedicated_r13	/* OPTIONAL */;
	struct RLF_TimersAndConstants_NB_r13	*rlf_TimersAndConstants_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicated_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicated_NB_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRB-ToAddModList-NB-r13.h"
#include "DRB-ToAddModList-NB-r13.h"
#include "DRB-ToReleaseList-NB-r13.h"
#include "PhysicalConfigDedicated-NB-r13.h"
#include "RLF-TimersAndConstants-NB-r13.h"

#endif	/* _RadioResourceConfigDedicated_NB_r13_H_ */
#include <asn_internal.h>
