/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "CellSelectionInfo-NB-v1350.h"

static int
memb_delta_RxLevMin_v1350_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= -1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_delta_RxLevMin_v1350_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -8, -1 }	/* (-8..-1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_CellSelectionInfo_NB_v1350_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectionInfo_NB_v1350, delta_RxLevMin_v1350),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_delta_RxLevMin_v1350_constraint_1,
		&asn_PER_memb_delta_RxLevMin_v1350_constr_2,
		0,
		"delta-RxLevMin-v1350"
		},
};
static ber_tlv_tag_t asn_DEF_CellSelectionInfo_NB_v1350_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellSelectionInfo_NB_v1350_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* delta-RxLevMin-v1350 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellSelectionInfo_NB_v1350_specs_1 = {
	sizeof(struct CellSelectionInfo_NB_v1350),
	offsetof(struct CellSelectionInfo_NB_v1350, _asn_ctx),
	asn_MAP_CellSelectionInfo_NB_v1350_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectionInfo_NB_v1350 = {
	"CellSelectionInfo-NB-v1350",
	"CellSelectionInfo-NB-v1350",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CellSelectionInfo_NB_v1350_tags_1,
	sizeof(asn_DEF_CellSelectionInfo_NB_v1350_tags_1)
		/sizeof(asn_DEF_CellSelectionInfo_NB_v1350_tags_1[0]), /* 1 */
	asn_DEF_CellSelectionInfo_NB_v1350_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectionInfo_NB_v1350_tags_1)
		/sizeof(asn_DEF_CellSelectionInfo_NB_v1350_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellSelectionInfo_NB_v1350_1,
	1,	/* Elements count */
	&asn_SPC_CellSelectionInfo_NB_v1350_specs_1	/* Additional specs */
};

