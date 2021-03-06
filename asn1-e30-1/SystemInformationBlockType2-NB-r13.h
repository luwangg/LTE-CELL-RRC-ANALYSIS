/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SystemInformationBlockType2_NB_r13_H_
#define	_SystemInformationBlockType2_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioResourceConfigCommonSIB-NB-r13.h"
#include "UE-TimersAndConstants-NB-r13.h"
#include "TimeAlignmentTimer.h"
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include "AdditionalSpectrumEmission.h"
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType2_NB_r13__cp_Reestablishment_r14 {
	SystemInformationBlockType2_NB_r13__cp_Reestablishment_r14_true	= 0
} e_SystemInformationBlockType2_NB_r13__cp_Reestablishment_r14;

/* Forward declarations */
struct CarrierFreq_NB_r13;

/* SystemInformationBlockType2-NB-r13 */
typedef struct SystemInformationBlockType2_NB_r13 {
	RadioResourceConfigCommonSIB_NB_r13_t	 radioResourceConfigCommon_r13;
	UE_TimersAndConstants_NB_r13_t	 ue_TimersAndConstants_r13;
	struct SystemInformationBlockType2_NB_r13__freqInfo_r13 {
		struct CarrierFreq_NB_r13	*ul_CarrierFreq_r13	/* OPTIONAL */;
		AdditionalSpectrumEmission_t	 additionalSpectrumEmission_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqInfo_r13;
	TimeAlignmentTimer_t	 timeAlignmentTimerCommon_r13;
	struct SystemInformationBlockType2_NB_r13__multiBandInfoList_r13 {
		A_SEQUENCE_OF(AdditionalSpectrumEmission_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList_r13;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*cp_Reestablishment_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType2_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cp_Reestablishment_r14_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2_NB_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreq-NB-r13.h"

#endif	/* _SystemInformationBlockType2_NB_r13_H_ */
#include <asn_internal.h>
