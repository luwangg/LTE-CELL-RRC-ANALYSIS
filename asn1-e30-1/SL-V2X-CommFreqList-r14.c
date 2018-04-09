/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SL-V2X-CommFreqList-r14.h"

static int
memb_NativeInteger_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_SL_V2X_CommFreqList_r14_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SL_V2X_CommFreqList_r14_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_NativeInteger_constraint_1,
		&asn_PER_memb_Member_constr_2,
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_SL_V2X_CommFreqList_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_SL_V2X_CommFreqList_r14_specs_1 = {
	sizeof(struct SL_V2X_CommFreqList_r14),
	offsetof(struct SL_V2X_CommFreqList_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SL_V2X_CommFreqList_r14 = {
	"SL-V2X-CommFreqList-r14",
	"SL-V2X-CommFreqList-r14",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SL_V2X_CommFreqList_r14_tags_1,
	sizeof(asn_DEF_SL_V2X_CommFreqList_r14_tags_1)
		/sizeof(asn_DEF_SL_V2X_CommFreqList_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_V2X_CommFreqList_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_V2X_CommFreqList_r14_tags_1)
		/sizeof(asn_DEF_SL_V2X_CommFreqList_r14_tags_1[0]), /* 1 */
	&asn_PER_type_SL_V2X_CommFreqList_r14_constr_1,
	asn_MBR_SL_V2X_CommFreqList_r14_1,
	1,	/* Single element */
	&asn_SPC_SL_V2X_CommFreqList_r14_specs_1	/* Additional specs */
};

