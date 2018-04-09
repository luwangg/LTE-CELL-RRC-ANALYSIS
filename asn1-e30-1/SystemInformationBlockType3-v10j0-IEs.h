/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SystemInformationBlockType3_v10j0_IEs_H_
#define	_SystemInformationBlockType3_v10j0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NS_PmaxList_r10;
struct MultiBandInfoList_v10j0;

/* SystemInformationBlockType3-v10j0-IEs */
typedef struct SystemInformationBlockType3_v10j0_IEs {
	struct NS_PmaxList_r10	*freqBandInfo_r10	/* OPTIONAL */;
	struct MultiBandInfoList_v10j0	*multiBandInfoList_v10j0	/* OPTIONAL */;
	struct SystemInformationBlockType3_v10j0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType3_v10j0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType3_v10j0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NS-PmaxList-r10.h"
#include "MultiBandInfoList-v10j0.h"

#endif	/* _SystemInformationBlockType3_v10j0_IEs_H_ */
#include <asn_internal.h>
