/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_LWIP_Parameters_v1430_H_
#define	_LWIP_Parameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LWIP_Parameters_v1430__lwip_Aggregation_DL_r14 {
	LWIP_Parameters_v1430__lwip_Aggregation_DL_r14_supported	= 0
} e_LWIP_Parameters_v1430__lwip_Aggregation_DL_r14;
typedef enum LWIP_Parameters_v1430__lwip_Aggregation_UL_r14 {
	LWIP_Parameters_v1430__lwip_Aggregation_UL_r14_supported	= 0
} e_LWIP_Parameters_v1430__lwip_Aggregation_UL_r14;

/* LWIP-Parameters-v1430 */
typedef struct LWIP_Parameters_v1430 {
	long	*lwip_Aggregation_DL_r14	/* OPTIONAL */;
	long	*lwip_Aggregation_UL_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LWIP_Parameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_lwip_Aggregation_DL_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_lwip_Aggregation_UL_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LWIP_Parameters_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _LWIP_Parameters_v1430_H_ */
#include <asn_internal.h>
