/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SystemInformation_NB_r13_IEs_H_
#define	_SystemInformation_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include "SystemInformationBlockType2-NB-r13.h"
#include "SystemInformationBlockType3-NB-r13.h"
#include "SystemInformationBlockType4-NB-r13.h"
#include "SystemInformationBlockType5-NB-r13.h"
#include "SystemInformationBlockType14-NB-r13.h"
#include "SystemInformationBlockType16-NB-r13.h"
#include "SystemInformationBlockType15-NB-r14.h"
#include "SystemInformationBlockType20-NB-r14.h"
#include "SystemInformationBlockType22-NB-r14.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR {
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_NOTHING,	/* No components present */
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib2_r13,
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib3_r13,
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib4_r13,
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib5_r13,
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib14_r13,
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib16_r13,
	/* Extensions may appear below */
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib15_v1430,
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib20_v1430,
	SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib22_v1430
} SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR;

/* SystemInformation-NB-r13-IEs */
typedef struct SystemInformation_NB_r13_IEs {
	struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13 {
		A_SEQUENCE_OF(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member {
			SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR present;
			union SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_u {
				SystemInformationBlockType2_NB_r13_t	 sib2_r13;
				SystemInformationBlockType3_NB_r13_t	 sib3_r13;
				SystemInformationBlockType4_NB_r13_t	 sib4_r13;
				SystemInformationBlockType5_NB_r13_t	 sib5_r13;
				SystemInformationBlockType14_NB_r13_t	 sib14_r13;
				SystemInformationBlockType16_NB_r13_t	 sib16_r13;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				SystemInformationBlockType15_NB_r14_t	 sib15_v1430;
				SystemInformationBlockType20_NB_r14_t	 sib20_v1430;
				SystemInformationBlockType22_NB_r14_t	 sib22_v1430;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sib_TypeAndInfo_r13;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct SystemInformation_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformation_NB_r13_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformation_NB_r13_IEs_H_ */
#include <asn_internal.h>
