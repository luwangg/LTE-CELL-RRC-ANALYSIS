/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_Format4_resource_r13_H_
#define	_Format4_resource_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Format4-resource-r13 */
typedef struct Format4_resource_r13 {
	long	 startingPRB_format4_r13;
	long	 numberOfPRB_format4_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Format4_resource_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Format4_resource_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _Format4_resource_r13_H_ */
#include <asn_internal.h>
