/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SCG_ConfigInfo_r12_IEs_H_
#define	_SCG_ConfigInfo_r12_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "P-Max.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioResourceConfigDedicated;
struct SCellToAddModList_r10;
struct MeasGapConfig;
struct PowerCoordinationInfo_r12;
struct SCG_ConfigPartSCG_r12;
struct SCG_ConfigRestrictInfo_r12;
struct MeasResultServCellListSCG_r12;
struct DRB_InfoListSCG_r12;
struct DRB_ToReleaseList;
struct SCellToAddModListSCG_r12;
struct SCellToReleaseList_r10;
struct SCG_ConfigInfo_v1310_IEs;

/* SCG-ConfigInfo-r12-IEs */
typedef struct SCG_ConfigInfo_r12_IEs {
	struct RadioResourceConfigDedicated	*radioResourceConfigDedMCG_r12	/* OPTIONAL */;
	struct SCellToAddModList_r10	*sCellToAddModListMCG_r12	/* OPTIONAL */;
	struct MeasGapConfig	*measGapConfig_r12	/* OPTIONAL */;
	struct PowerCoordinationInfo_r12	*powerCoordinationInfo_r12	/* OPTIONAL */;
	struct SCG_ConfigPartSCG_r12	*scg_RadioConfig_r12	/* OPTIONAL */;
	OCTET_STRING_t	*eutra_CapabilityInfo_r12	/* OPTIONAL */;
	struct SCG_ConfigRestrictInfo_r12	*scg_ConfigRestrictInfo_r12	/* OPTIONAL */;
	OCTET_STRING_t	*mbmsInterestIndication_r12	/* OPTIONAL */;
	struct MeasResultServCellListSCG_r12	*measResultServCellListSCG_r12	/* OPTIONAL */;
	struct DRB_InfoListSCG_r12	*drb_ToAddModListSCG_r12	/* OPTIONAL */;
	struct DRB_ToReleaseList	*drb_ToReleaseListSCG_r12	/* OPTIONAL */;
	struct SCellToAddModListSCG_r12	*sCellToAddModListSCG_r12	/* OPTIONAL */;
	struct SCellToReleaseList_r10	*sCellToReleaseListSCG_r12	/* OPTIONAL */;
	P_Max_t	*p_Max_r12	/* OPTIONAL */;
	struct SCG_ConfigInfo_v1310_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_ConfigInfo_r12_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_ConfigInfo_r12_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioResourceConfigDedicated.h"
#include "SCellToAddModList-r10.h"
#include "MeasGapConfig.h"
#include "PowerCoordinationInfo-r12.h"
#include "SCG-ConfigPartSCG-r12.h"
#include "SCG-ConfigRestrictInfo-r12.h"
#include "MeasResultServCellListSCG-r12.h"
#include "DRB-InfoListSCG-r12.h"
#include "DRB-ToReleaseList.h"
#include "SCellToAddModListSCG-r12.h"
#include "SCellToReleaseList-r10.h"
#include "SCG-ConfigInfo-v1310-IEs.h"

#endif	/* _SCG_ConfigInfo_r12_IEs_H_ */
#include <asn_internal.h>
