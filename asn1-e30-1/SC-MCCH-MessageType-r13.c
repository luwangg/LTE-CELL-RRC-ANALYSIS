/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SC-MCCH-MessageType-r13.h"

static asn_per_constraints_t asn_PER_type_c1_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_c2_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_messageClassExtension_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_SC_MCCH_MessageType_r13_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_c1_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MCCH_MessageType_r13__c1, choice.scptmConfiguration_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCPTMConfiguration_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scptmConfiguration-r13"
		},
};
static asn_TYPE_tag2member_t asn_MAP_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* scptmConfiguration-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_2 = {
	sizeof(struct SC_MCCH_MessageType_r13__c1),
	offsetof(struct SC_MCCH_MessageType_r13__c1, _asn_ctx),
	offsetof(struct SC_MCCH_MessageType_r13__c1, present),
	sizeof(((struct SC_MCCH_MessageType_r13__c1 *)0)->present),
	asn_MAP_c1_tag2el_2,
	1,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_2 = {
	"c1",
	"c1",
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
	&asn_PER_type_c1_constr_2,
	asn_MBR_c1_2,
	1,	/* Elements count */
	&asn_SPC_c1_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_c2_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MCCH_MessageType_r13__messageClassExtension__c2, choice.scptmConfiguration_BR_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCPTMConfiguration_BR_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scptmConfiguration-BR-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MCCH_MessageType_r13__messageClassExtension__c2, choice.spare),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spare"
		},
};
static asn_TYPE_tag2member_t asn_MAP_c2_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scptmConfiguration-BR-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* spare */
};
static asn_CHOICE_specifics_t asn_SPC_c2_specs_5 = {
	sizeof(struct SC_MCCH_MessageType_r13__messageClassExtension__c2),
	offsetof(struct SC_MCCH_MessageType_r13__messageClassExtension__c2, _asn_ctx),
	offsetof(struct SC_MCCH_MessageType_r13__messageClassExtension__c2, present),
	sizeof(((struct SC_MCCH_MessageType_r13__messageClassExtension__c2 *)0)->present),
	asn_MAP_c2_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c2_5 = {
	"c2",
	"c2",
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
	&asn_PER_type_c2_constr_5,
	asn_MBR_c2_5,
	2,	/* Elements count */
	&asn_SPC_c2_specs_5	/* Additional specs */
};

static ber_tlv_tag_t asn_DEF_messageClassExtensionFuture_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_messageClassExtensionFuture_r14_specs_8 = {
	sizeof(struct SC_MCCH_MessageType_r13__messageClassExtension__messageClassExtensionFuture_r14),
	offsetof(struct SC_MCCH_MessageType_r13__messageClassExtension__messageClassExtensionFuture_r14, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtensionFuture_r14_8 = {
	"messageClassExtensionFuture-r14",
	"messageClassExtensionFuture-r14",
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
	asn_DEF_messageClassExtensionFuture_r14_tags_8,
	sizeof(asn_DEF_messageClassExtensionFuture_r14_tags_8)
		/sizeof(asn_DEF_messageClassExtensionFuture_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_messageClassExtensionFuture_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_messageClassExtensionFuture_r14_tags_8)
		/sizeof(asn_DEF_messageClassExtensionFuture_r14_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_messageClassExtensionFuture_r14_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_messageClassExtension_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MCCH_MessageType_r13__messageClassExtension, choice.c2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c2_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"c2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MCCH_MessageType_r13__messageClassExtension, choice.messageClassExtensionFuture_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_messageClassExtensionFuture_r14_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"messageClassExtensionFuture-r14"
		},
};
static asn_TYPE_tag2member_t asn_MAP_messageClassExtension_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtensionFuture-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_messageClassExtension_specs_4 = {
	sizeof(struct SC_MCCH_MessageType_r13__messageClassExtension),
	offsetof(struct SC_MCCH_MessageType_r13__messageClassExtension, _asn_ctx),
	offsetof(struct SC_MCCH_MessageType_r13__messageClassExtension, present),
	sizeof(((struct SC_MCCH_MessageType_r13__messageClassExtension *)0)->present),
	asn_MAP_messageClassExtension_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtension_4 = {
	"messageClassExtension",
	"messageClassExtension",
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
	&asn_PER_type_messageClassExtension_constr_4,
	asn_MBR_messageClassExtension_4,
	2,	/* Elements count */
	&asn_SPC_messageClassExtension_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SC_MCCH_MessageType_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MCCH_MessageType_r13, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c1_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"c1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MCCH_MessageType_r13, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_messageClassExtension_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"messageClassExtension"
		},
};
static asn_TYPE_tag2member_t asn_MAP_SC_MCCH_MessageType_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
static asn_CHOICE_specifics_t asn_SPC_SC_MCCH_MessageType_r13_specs_1 = {
	sizeof(struct SC_MCCH_MessageType_r13),
	offsetof(struct SC_MCCH_MessageType_r13, _asn_ctx),
	offsetof(struct SC_MCCH_MessageType_r13, present),
	sizeof(((struct SC_MCCH_MessageType_r13 *)0)->present),
	asn_MAP_SC_MCCH_MessageType_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SC_MCCH_MessageType_r13 = {
	"SC-MCCH-MessageType-r13",
	"SC-MCCH-MessageType-r13",
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
	&asn_PER_type_SC_MCCH_MessageType_r13_constr_1,
	asn_MBR_SC_MCCH_MessageType_r13_1,
	2,	/* Elements count */
	&asn_SPC_SC_MCCH_MessageType_r13_specs_1	/* Additional specs */
};

