/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasSubframePatternConfigNeigh_r10_H_
#define	_MeasSubframePatternConfigNeigh_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "MeasSubframePattern-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasSubframePatternConfigNeigh_r10_PR {
	MeasSubframePatternConfigNeigh_r10_PR_NOTHING,	/* No components present */
	MeasSubframePatternConfigNeigh_r10_PR_release,
	MeasSubframePatternConfigNeigh_r10_PR_setup
} MeasSubframePatternConfigNeigh_r10_PR;

/* Forward declarations */
struct MeasSubframeCellList_r10;

/* MeasSubframePatternConfigNeigh-r10 */
typedef struct MeasSubframePatternConfigNeigh_r10 {
	MeasSubframePatternConfigNeigh_r10_PR present;
	union MeasSubframePatternConfigNeigh_r10_u {
		NULL_t	 release;
		struct MeasSubframePatternConfigNeigh_r10__setup {
			MeasSubframePattern_r10_t	 measSubframePatternNeigh_r10;
			struct MeasSubframeCellList_r10	*measSubframeCellList_r10	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasSubframePatternConfigNeigh_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasSubframePatternConfigNeigh_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasSubframeCellList-r10.h"

#endif	/* _MeasSubframePatternConfigNeigh_r10_H_ */
#include <asn_internal.h>
