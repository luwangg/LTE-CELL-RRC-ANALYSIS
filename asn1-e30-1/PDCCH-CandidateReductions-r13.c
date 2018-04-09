/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "PDCCH-CandidateReductions-r13.h"

static asn_per_constraints_t asn_PER_type_PDCCH_CandidateReductions_r13_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_CandidateReductions_r13__setup, pdcch_candidateReductionAL1_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCCH_CandidateReductionValue_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcch-candidateReductionAL1-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_CandidateReductions_r13__setup, pdcch_candidateReductionAL2_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCCH_CandidateReductionValue_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcch-candidateReductionAL2-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_CandidateReductions_r13__setup, pdcch_candidateReductionAL3_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCCH_CandidateReductionValue_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcch-candidateReductionAL3-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_CandidateReductions_r13__setup, pdcch_candidateReductionAL4_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCCH_CandidateReductionValue_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcch-candidateReductionAL4-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_CandidateReductions_r13__setup, pdcch_candidateReductionAL5_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCCH_CandidateReductionValue_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcch-candidateReductionAL5-r13"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcch-candidateReductionAL1-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdcch-candidateReductionAL2-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcch-candidateReductionAL3-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pdcch-candidateReductionAL4-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* pdcch-candidateReductionAL5-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct PDCCH_CandidateReductions_r13__setup),
	offsetof(struct PDCCH_CandidateReductions_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_3,
	5,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PDCCH_CandidateReductions_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_CandidateReductions_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCCH_CandidateReductions_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_PDCCH_CandidateReductions_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_PDCCH_CandidateReductions_r13_specs_1 = {
	sizeof(struct PDCCH_CandidateReductions_r13),
	offsetof(struct PDCCH_CandidateReductions_r13, _asn_ctx),
	offsetof(struct PDCCH_CandidateReductions_r13, present),
	sizeof(((struct PDCCH_CandidateReductions_r13 *)0)->present),
	asn_MAP_PDCCH_CandidateReductions_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PDCCH_CandidateReductions_r13 = {
	"PDCCH-CandidateReductions-r13",
	"PDCCH-CandidateReductions-r13",
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
	&asn_PER_type_PDCCH_CandidateReductions_r13_constr_1,
	asn_MBR_PDCCH_CandidateReductions_r13_1,
	2,	/* Elements count */
	&asn_SPC_PDCCH_CandidateReductions_r13_specs_1	/* Additional specs */
};

