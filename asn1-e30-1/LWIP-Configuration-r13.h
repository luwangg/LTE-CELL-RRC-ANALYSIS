/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_LWIP_Configuration_r13_H_
#define	_LWIP_Configuration_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LWIP-Config-r13.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LWIP_Configuration_r13_PR {
	LWIP_Configuration_r13_PR_NOTHING,	/* No components present */
	LWIP_Configuration_r13_PR_release,
	LWIP_Configuration_r13_PR_setup
} LWIP_Configuration_r13_PR;

/* LWIP-Configuration-r13 */
typedef struct LWIP_Configuration_r13 {
	LWIP_Configuration_r13_PR present;
	union LWIP_Configuration_r13_u {
		NULL_t	 release;
		struct LWIP_Configuration_r13__setup {
			LWIP_Config_r13_t	 lwip_Config_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LWIP_Configuration_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LWIP_Configuration_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _LWIP_Configuration_r13_H_ */
#include <asn_internal.h>
