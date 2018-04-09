/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_LBT_Config_r14_H_
#define	_LBT_Config_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LBT_Config_r14_PR {
	LBT_Config_r14_PR_NOTHING,	/* No components present */
	LBT_Config_r14_PR_maxEnergyDetectionThreshold_r14,
	LBT_Config_r14_PR_energyDetectionThresholdOffset_r14
} LBT_Config_r14_PR;

/* LBT-Config-r14 */
typedef struct LBT_Config_r14 {
	LBT_Config_r14_PR present;
	union LBT_Config_r14_u {
		long	 maxEnergyDetectionThreshold_r14;
		long	 energyDetectionThresholdOffset_r14;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LBT_Config_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LBT_Config_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _LBT_Config_r14_H_ */
#include <asn_internal.h>
