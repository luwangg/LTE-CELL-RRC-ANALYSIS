/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SystemInformation_r8_IEs_H_
#define	_SystemInformation_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "SystemInformationBlockType2.h"
#include "SystemInformationBlockType3.h"
#include "SystemInformationBlockType4.h"
#include "SystemInformationBlockType5.h"
#include "SystemInformationBlockType6.h"
#include "SystemInformationBlockType7.h"
#include "SystemInformationBlockType8.h"
#include "SystemInformationBlockType9.h"
#include "SystemInformationBlockType10.h"
#include "SystemInformationBlockType11.h"
#include "SystemInformationBlockType12-r9.h"
#include "SystemInformationBlockType13-r9.h"
#include "SystemInformationBlockType14-r11.h"
#include "SystemInformationBlockType15-r11.h"
#include "SystemInformationBlockType16-r11.h"
#include "SystemInformationBlockType17-r12.h"
#include "SystemInformationBlockType18-r12.h"
#include "SystemInformationBlockType19-r12.h"
#include "SystemInformationBlockType20-r13.h"
#include "SystemInformationBlockType21-r14.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR {
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_NOTHING,	/* No components present */
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib2,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib3,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib4,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib5,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib6,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib7,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib8,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib9,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib10,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib11,
	/* Extensions may appear below */
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib12_v920,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib13_v920,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib14_v1130,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib15_v1130,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib16_v1130,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib17_v1250,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib18_v1250,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib19_v1250,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib20_v1310,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib21_v1430
} SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR;

/* Forward declarations */
struct SystemInformation_v8a0_IEs;

/* SystemInformation-r8-IEs */
typedef struct SystemInformation_r8_IEs {
	struct SystemInformation_r8_IEs__sib_TypeAndInfo {
		A_SEQUENCE_OF(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member {
			SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR present;
			union SystemInformation_r8_IEs__sib_TypeAndInfo__Member_u {
				SystemInformationBlockType2_t	 sib2;
				SystemInformationBlockType3_t	 sib3;
				SystemInformationBlockType4_t	 sib4;
				SystemInformationBlockType5_t	 sib5;
				SystemInformationBlockType6_t	 sib6;
				SystemInformationBlockType7_t	 sib7;
				SystemInformationBlockType8_t	 sib8;
				SystemInformationBlockType9_t	 sib9;
				SystemInformationBlockType10_t	 sib10;
				SystemInformationBlockType11_t	 sib11;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				SystemInformationBlockType12_r9_t	 sib12_v920;
				SystemInformationBlockType13_r9_t	 sib13_v920;
				SystemInformationBlockType14_r11_t	 sib14_v1130;
				SystemInformationBlockType15_r11_t	 sib15_v1130;
				SystemInformationBlockType16_r11_t	 sib16_v1130;
				SystemInformationBlockType17_r12_t	 sib17_v1250;
				SystemInformationBlockType18_r12_t	 sib18_v1250;
				SystemInformationBlockType19_r12_t	 sib19_v1250;
				SystemInformationBlockType20_r13_t	 sib20_v1310;
				SystemInformationBlockType21_r14_t	 sib21_v1430;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sib_TypeAndInfo;
	struct SystemInformation_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformation_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SystemInformation-v8a0-IEs.h"

#endif	/* _SystemInformation_r8_IEs_H_ */
#include <asn_internal.h>
