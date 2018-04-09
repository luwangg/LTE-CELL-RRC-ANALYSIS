/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "PUCCH-ConfigDedicated-v1130.h"

static int
memb_NativeInteger_constraint_5(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
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
memb_n1PUCCH_AN_CS_ListP1_r11_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 2 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nPUCCH_Identity_r11_constraint_9(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 503)) {
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
memb_n1PUCCH_AN_r11_constraint_9(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n1PUCCH_AN_CS_ListP1_r11_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  2,  4 }	/* (SIZE(2..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n1PUCCH_AN_CS_ListP1_r11_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  2,  4 }	/* (SIZE(2..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n1PUCCH_AN_CS_v1130_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nPUCCH_Identity_r11_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n1PUCCH_AN_r11_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nPUCCH_Param_r11_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_n1PUCCH_AN_CS_ListP1_r11_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_NativeInteger_constraint_5,
		&asn_PER_memb_Member_constr_6,
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_n1PUCCH_AN_CS_ListP1_r11_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_n1PUCCH_AN_CS_ListP1_r11_specs_5 = {
	sizeof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130__setup__n1PUCCH_AN_CS_ListP1_r11),
	offsetof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130__setup__n1PUCCH_AN_CS_ListP1_r11, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n1PUCCH_AN_CS_ListP1_r11_5 = {
	"n1PUCCH-AN-CS-ListP1-r11",
	"n1PUCCH-AN-CS-ListP1-r11",
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
	asn_DEF_n1PUCCH_AN_CS_ListP1_r11_tags_5,
	sizeof(asn_DEF_n1PUCCH_AN_CS_ListP1_r11_tags_5)
		/sizeof(asn_DEF_n1PUCCH_AN_CS_ListP1_r11_tags_5[0]) - 1, /* 1 */
	asn_DEF_n1PUCCH_AN_CS_ListP1_r11_tags_5,	/* Same as above */
	sizeof(asn_DEF_n1PUCCH_AN_CS_ListP1_r11_tags_5)
		/sizeof(asn_DEF_n1PUCCH_AN_CS_ListP1_r11_tags_5[0]), /* 2 */
	&asn_PER_type_n1PUCCH_AN_CS_ListP1_r11_constr_5,
	asn_MBR_n1PUCCH_AN_CS_ListP1_r11_5,
	1,	/* Single element */
	&asn_SPC_n1PUCCH_AN_CS_ListP1_r11_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130__setup, n1PUCCH_AN_CS_ListP1_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_n1PUCCH_AN_CS_ListP1_r11_5,
		memb_n1PUCCH_AN_CS_ListP1_r11_constraint_4,
		&asn_PER_memb_n1PUCCH_AN_CS_ListP1_r11_constr_5,
		0,
		"n1PUCCH-AN-CS-ListP1-r11"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* n1PUCCH-AN-CS-ListP1-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130__setup),
	offsetof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
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
	asn_DEF_setup_tags_4,
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_4,
	1,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_n1PUCCH_AN_CS_v1130_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_n1PUCCH_AN_CS_v1130_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_n1PUCCH_AN_CS_v1130_specs_2 = {
	sizeof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130),
	offsetof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130, _asn_ctx),
	offsetof(struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130, present),
	sizeof(((struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130 *)0)->present),
	asn_MAP_n1PUCCH_AN_CS_v1130_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n1PUCCH_AN_CS_v1130_2 = {
	"n1PUCCH-AN-CS-v1130",
	"n1PUCCH-AN-CS-v1130",
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
	&asn_PER_type_n1PUCCH_AN_CS_v1130_constr_2,
	asn_MBR_n1PUCCH_AN_CS_v1130_2,
	2,	/* Elements count */
	&asn_SPC_n1PUCCH_AN_CS_v1130_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11__setup, nPUCCH_Identity_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_nPUCCH_Identity_r11_constraint_9,
		&asn_PER_memb_nPUCCH_Identity_r11_constr_10,
		0,
		"nPUCCH-Identity-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11__setup, n1PUCCH_AN_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_n1PUCCH_AN_r11_constraint_9,
		&asn_PER_memb_n1PUCCH_AN_r11_constr_11,
		0,
		"n1PUCCH-AN-r11"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nPUCCH-Identity-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* n1PUCCH-AN-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_9 = {
	sizeof(struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11__setup),
	offsetof(struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11__setup, _asn_ctx),
	asn_MAP_setup_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_9 = {
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
	asn_DEF_setup_tags_9,
	sizeof(asn_DEF_setup_tags_9)
		/sizeof(asn_DEF_setup_tags_9[0]) - 1, /* 1 */
	asn_DEF_setup_tags_9,	/* Same as above */
	sizeof(asn_DEF_setup_tags_9)
		/sizeof(asn_DEF_setup_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_9,
	2,	/* Elements count */
	&asn_SPC_setup_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nPUCCH_Param_r11_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_nPUCCH_Param_r11_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_nPUCCH_Param_r11_specs_7 = {
	sizeof(struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11),
	offsetof(struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11, _asn_ctx),
	offsetof(struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11, present),
	sizeof(((struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11 *)0)->present),
	asn_MAP_nPUCCH_Param_r11_tag2el_7,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nPUCCH_Param_r11_7 = {
	"nPUCCH-Param-r11",
	"nPUCCH-Param-r11",
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
	&asn_PER_type_nPUCCH_Param_r11_constr_7,
	asn_MBR_nPUCCH_Param_r11_7,
	2,	/* Elements count */
	&asn_SPC_nPUCCH_Param_r11_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_v1130_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PUCCH_ConfigDedicated_v1130, n1PUCCH_AN_CS_v1130),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_n1PUCCH_AN_CS_v1130_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"n1PUCCH-AN-CS-v1130"
		},
	{ ATF_POINTER, 1, offsetof(struct PUCCH_ConfigDedicated_v1130, nPUCCH_Param_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_nPUCCH_Param_r11_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nPUCCH-Param-r11"
		},
};
static int asn_MAP_PUCCH_ConfigDedicated_v1130_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_PUCCH_ConfigDedicated_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PUCCH_ConfigDedicated_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n1PUCCH-AN-CS-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nPUCCH-Param-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_v1130_specs_1 = {
	sizeof(struct PUCCH_ConfigDedicated_v1130),
	offsetof(struct PUCCH_ConfigDedicated_v1130, _asn_ctx),
	asn_MAP_PUCCH_ConfigDedicated_v1130_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PUCCH_ConfigDedicated_v1130_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v1130 = {
	"PUCCH-ConfigDedicated-v1130",
	"PUCCH-ConfigDedicated-v1130",
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
	asn_DEF_PUCCH_ConfigDedicated_v1130_tags_1,
	sizeof(asn_DEF_PUCCH_ConfigDedicated_v1130_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_v1130_tags_1[0]), /* 1 */
	asn_DEF_PUCCH_ConfigDedicated_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUCCH_ConfigDedicated_v1130_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_v1130_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PUCCH_ConfigDedicated_v1130_1,
	2,	/* Elements count */
	&asn_SPC_PUCCH_ConfigDedicated_v1130_specs_1	/* Additional specs */
};

