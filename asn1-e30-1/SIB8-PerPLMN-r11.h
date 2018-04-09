/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SIB8_PerPLMN_r11_H_
#define	_SIB8_PerPLMN_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "ParametersCDMA2000-r11.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR {
	SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR_NOTHING,	/* No components present */
	SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR_explicitValue,
	SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR_defaultValue
} SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR;

/* SIB8-PerPLMN-r11 */
typedef struct SIB8_PerPLMN_r11 {
	long	 plmn_Identity_r11;
	struct SIB8_PerPLMN_r11__parametersCDMA2000_r11 {
		SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR present;
		union SIB8_PerPLMN_r11__parametersCDMA2000_r11_u {
			ParametersCDMA2000_r11_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} parametersCDMA2000_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB8_PerPLMN_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB8_PerPLMN_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB8_PerPLMN_r11_H_ */
#include <asn_internal.h>
