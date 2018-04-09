/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "CarrierFreqsGERAN.h"

static int
memb_arfcn_Spacing_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_numberOfFollowingARFCNs_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_variableBitMapOfARFCNs_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_arfcn_Spacing_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_numberOfFollowingARFCNs_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_variableBitMapOfARFCNs_constr_9 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_followingARFCNs_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_equallySpacedARFCNs_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsGERAN__followingARFCNs__equallySpacedARFCNs, arfcn_Spacing),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_arfcn_Spacing_constraint_6,
		&asn_PER_memb_arfcn_Spacing_constr_7,
		0,
		"arfcn-Spacing"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsGERAN__followingARFCNs__equallySpacedARFCNs, numberOfFollowingARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_numberOfFollowingARFCNs_constraint_6,
		&asn_PER_memb_numberOfFollowingARFCNs_constr_8,
		0,
		"numberOfFollowingARFCNs"
		},
};
static ber_tlv_tag_t asn_DEF_equallySpacedARFCNs_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_equallySpacedARFCNs_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* arfcn-Spacing */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* numberOfFollowingARFCNs */
};
static asn_SEQUENCE_specifics_t asn_SPC_equallySpacedARFCNs_specs_6 = {
	sizeof(struct CarrierFreqsGERAN__followingARFCNs__equallySpacedARFCNs),
	offsetof(struct CarrierFreqsGERAN__followingARFCNs__equallySpacedARFCNs, _asn_ctx),
	asn_MAP_equallySpacedARFCNs_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_equallySpacedARFCNs_6 = {
	"equallySpacedARFCNs",
	"equallySpacedARFCNs",
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
	asn_DEF_equallySpacedARFCNs_tags_6,
	sizeof(asn_DEF_equallySpacedARFCNs_tags_6)
		/sizeof(asn_DEF_equallySpacedARFCNs_tags_6[0]) - 1, /* 1 */
	asn_DEF_equallySpacedARFCNs_tags_6,	/* Same as above */
	sizeof(asn_DEF_equallySpacedARFCNs_tags_6)
		/sizeof(asn_DEF_equallySpacedARFCNs_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_equallySpacedARFCNs_6,
	2,	/* Elements count */
	&asn_SPC_equallySpacedARFCNs_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_followingARFCNs_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsGERAN__followingARFCNs, choice.explicitListOfARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExplicitListOfARFCNs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicitListOfARFCNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsGERAN__followingARFCNs, choice.equallySpacedARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_equallySpacedARFCNs_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"equallySpacedARFCNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsGERAN__followingARFCNs, choice.variableBitMapOfARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_variableBitMapOfARFCNs_constraint_4,
		&asn_PER_memb_variableBitMapOfARFCNs_constr_9,
		0,
		"variableBitMapOfARFCNs"
		},
};
static asn_TYPE_tag2member_t asn_MAP_followingARFCNs_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitListOfARFCNs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* equallySpacedARFCNs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* variableBitMapOfARFCNs */
};
static asn_CHOICE_specifics_t asn_SPC_followingARFCNs_specs_4 = {
	sizeof(struct CarrierFreqsGERAN__followingARFCNs),
	offsetof(struct CarrierFreqsGERAN__followingARFCNs, _asn_ctx),
	offsetof(struct CarrierFreqsGERAN__followingARFCNs, present),
	sizeof(((struct CarrierFreqsGERAN__followingARFCNs *)0)->present),
	asn_MAP_followingARFCNs_tag2el_4,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_followingARFCNs_4 = {
	"followingARFCNs",
	"followingARFCNs",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_followingARFCNs_constr_4,
	asn_MBR_followingARFCNs_4,
	3,	/* Elements count */
	&asn_SPC_followingARFCNs_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CarrierFreqsGERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsGERAN, startingARFCN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"startingARFCN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsGERAN, bandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandIndicatorGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqsGERAN, followingARFCNs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_followingARFCNs_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"followingARFCNs"
		},
};
static ber_tlv_tag_t asn_DEF_CarrierFreqsGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CarrierFreqsGERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startingARFCN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* followingARFCNs */
};
static asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqsGERAN_specs_1 = {
	sizeof(struct CarrierFreqsGERAN),
	offsetof(struct CarrierFreqsGERAN, _asn_ctx),
	asn_MAP_CarrierFreqsGERAN_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqsGERAN = {
	"CarrierFreqsGERAN",
	"CarrierFreqsGERAN",
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
	asn_DEF_CarrierFreqsGERAN_tags_1,
	sizeof(asn_DEF_CarrierFreqsGERAN_tags_1)
		/sizeof(asn_DEF_CarrierFreqsGERAN_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqsGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqsGERAN_tags_1)
		/sizeof(asn_DEF_CarrierFreqsGERAN_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CarrierFreqsGERAN_1,
	3,	/* Elements count */
	&asn_SPC_CarrierFreqsGERAN_specs_1	/* Additional specs */
};

