/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MBSFNAreaConfiguration_v1430_IEs_H_
#define	_MBSFNAreaConfiguration_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CommonSF-AllocPatternList-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBSFNAreaConfiguration-v1430-IEs */
typedef struct MBSFNAreaConfiguration_v1430_IEs {
	CommonSF_AllocPatternList_r14_t	 commonSF_Alloc_r14;
	struct MBSFNAreaConfiguration_v1430_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFNAreaConfiguration_v1430_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFNAreaConfiguration_v1430_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFNAreaConfiguration_v1430_IEs_H_ */
#include <asn_internal.h>
