/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_EPDCCH_Config_r11_H_
#define	_EPDCCH_Config_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include "MeasSubframePattern-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EPDCCH_Config_r11__config_r11_PR {
	EPDCCH_Config_r11__config_r11_PR_NOTHING,	/* No components present */
	EPDCCH_Config_r11__config_r11_PR_release,
	EPDCCH_Config_r11__config_r11_PR_setup
} EPDCCH_Config_r11__config_r11_PR;
typedef enum EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR {
	EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR_NOTHING,	/* No components present */
	EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR_release,
	EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR_setup
} EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR;

/* Forward declarations */
struct EPDCCH_SetConfigToReleaseList_r11;
struct EPDCCH_SetConfigToAddModList_r11;

/* EPDCCH-Config-r11 */
typedef struct EPDCCH_Config_r11 {
	struct EPDCCH_Config_r11__config_r11 {
		EPDCCH_Config_r11__config_r11_PR present;
		union EPDCCH_Config_r11__config_r11_u {
			NULL_t	 release;
			struct EPDCCH_Config_r11__config_r11__setup {
				struct EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11 {
					EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR present;
					union EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_u {
						NULL_t	 release;
						struct EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11__setup {
							MeasSubframePattern_r10_t	 subframePattern_r11;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} setup;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *subframePatternConfig_r11;
				long	*startSymbol_r11	/* OPTIONAL */;
				struct EPDCCH_SetConfigToReleaseList_r11	*setConfigToReleaseList_r11	/* OPTIONAL */;
				struct EPDCCH_SetConfigToAddModList_r11	*setConfigToAddModList_r11	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} config_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EPDCCH_Config_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPDCCH_Config_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EPDCCH-SetConfigToReleaseList-r11.h"
#include "EPDCCH-SetConfigToAddModList-r11.h"

#endif	/* _EPDCCH_Config_r11_H_ */
#include <asn_internal.h>
