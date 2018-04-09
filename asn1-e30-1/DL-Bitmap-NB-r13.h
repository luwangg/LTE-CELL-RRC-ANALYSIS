/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_DL_Bitmap_NB_r13_H_
#define	_DL_Bitmap_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_Bitmap_NB_r13_PR {
	DL_Bitmap_NB_r13_PR_NOTHING,	/* No components present */
	DL_Bitmap_NB_r13_PR_subframePattern10_r13,
	DL_Bitmap_NB_r13_PR_subframePattern40_r13
} DL_Bitmap_NB_r13_PR;

/* DL-Bitmap-NB-r13 */
typedef struct DL_Bitmap_NB_r13 {
	DL_Bitmap_NB_r13_PR present;
	union DL_Bitmap_NB_r13_u {
		BIT_STRING_t	 subframePattern10_r13;
		BIT_STRING_t	 subframePattern40_r13;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_Bitmap_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_Bitmap_NB_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_Bitmap_NB_r13_H_ */
#include <asn_internal.h>
