/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "MeasObjectToAddModExt-r13.h"

static asn_per_constraints_t asn_PER_type_measObject_r13_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measObject_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddModExt_r13__measObject_r13, choice.measObjectEUTRA_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectEUTRA-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddModExt_r13__measObject_r13, choice.measObjectUTRA_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectUTRA-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddModExt_r13__measObject_r13, choice.measObjectGERAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectGERAN-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddModExt_r13__measObject_r13, choice.measObjectCDMA2000_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectCDMA2000-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddModExt_r13__measObject_r13, choice.measObjectWLAN_v1320),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectWLAN_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectWLAN-v1320"
		},
};
static asn_TYPE_tag2member_t asn_MAP_measObject_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectEUTRA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measObjectUTRA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measObjectGERAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measObjectCDMA2000-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* measObjectWLAN-v1320 */
};
static asn_CHOICE_specifics_t asn_SPC_measObject_r13_specs_3 = {
	sizeof(struct MeasObjectToAddModExt_r13__measObject_r13),
	offsetof(struct MeasObjectToAddModExt_r13__measObject_r13, _asn_ctx),
	offsetof(struct MeasObjectToAddModExt_r13__measObject_r13, present),
	sizeof(((struct MeasObjectToAddModExt_r13__measObject_r13 *)0)->present),
	asn_MAP_measObject_r13_tag2el_3,
	5,	/* Count of tags in the map */
	0,
	4	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measObject_r13_3 = {
	"measObject-r13",
	"measObject-r13",
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
	&asn_PER_type_measObject_r13_constr_3,
	asn_MBR_measObject_r13_3,
	5,	/* Elements count */
	&asn_SPC_measObject_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasObjectToAddModExt_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddModExt_r13, measObjectId_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectId_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectId-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddModExt_r13, measObject_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_measObject_r13_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObject-r13"
		},
};
static ber_tlv_tag_t asn_DEF_MeasObjectToAddModExt_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasObjectToAddModExt_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measObject-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasObjectToAddModExt_r13_specs_1 = {
	sizeof(struct MeasObjectToAddModExt_r13),
	offsetof(struct MeasObjectToAddModExt_r13, _asn_ctx),
	asn_MAP_MeasObjectToAddModExt_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectToAddModExt_r13 = {
	"MeasObjectToAddModExt-r13",
	"MeasObjectToAddModExt-r13",
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
	asn_DEF_MeasObjectToAddModExt_r13_tags_1,
	sizeof(asn_DEF_MeasObjectToAddModExt_r13_tags_1)
		/sizeof(asn_DEF_MeasObjectToAddModExt_r13_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectToAddModExt_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectToAddModExt_r13_tags_1)
		/sizeof(asn_DEF_MeasObjectToAddModExt_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasObjectToAddModExt_r13_1,
	2,	/* Elements count */
	&asn_SPC_MeasObjectToAddModExt_r13_specs_1	/* Additional specs */
};

