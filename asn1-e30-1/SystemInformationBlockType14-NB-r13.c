/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SystemInformationBlockType14-NB-r13.h"

static int
memb_ab_PerPLMN_List_r13_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 6)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ab_PerPLMN_List_r13_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ab_PerPLMN_List_r13_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ab_Param_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ab_PerPLMN_List_r13_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AB_ConfigPLMN_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_ab_PerPLMN_List_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ab_PerPLMN_List_r13_specs_4 = {
	sizeof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13__ab_PerPLMN_List_r13),
	offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13__ab_PerPLMN_List_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ab_PerPLMN_List_r13_4 = {
	"ab-PerPLMN-List-r13",
	"ab-PerPLMN-List-r13",
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
	asn_DEF_ab_PerPLMN_List_r13_tags_4,
	sizeof(asn_DEF_ab_PerPLMN_List_r13_tags_4)
		/sizeof(asn_DEF_ab_PerPLMN_List_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_ab_PerPLMN_List_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_ab_PerPLMN_List_r13_tags_4)
		/sizeof(asn_DEF_ab_PerPLMN_List_r13_tags_4[0]), /* 2 */
	&asn_PER_type_ab_PerPLMN_List_r13_constr_4,
	asn_MBR_ab_PerPLMN_List_r13_4,
	1,	/* Single element */
	&asn_SPC_ab_PerPLMN_List_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ab_Param_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13, choice.ab_Common_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AB_Config_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ab-Common-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13, choice.ab_PerPLMN_List_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ab_PerPLMN_List_r13_4,
		memb_ab_PerPLMN_List_r13_constraint_2,
		&asn_PER_memb_ab_PerPLMN_List_r13_constr_4,
		0,
		"ab-PerPLMN-List-r13"
		},
};
static asn_TYPE_tag2member_t asn_MAP_ab_Param_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ab-Common-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ab-PerPLMN-List-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_ab_Param_r13_specs_2 = {
	sizeof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13),
	offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13, _asn_ctx),
	offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13, present),
	sizeof(((struct SystemInformationBlockType14_NB_r13__ab_Param_r13 *)0)->present),
	asn_MAP_ab_Param_r13_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ab_Param_r13_2 = {
	"ab-Param-r13",
	"ab-Param-r13",
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
	&asn_PER_type_ab_Param_r13_constr_2,
	asn_MBR_ab_Param_r13_2,
	2,	/* Elements count */
	&asn_SPC_ab_Param_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType14_NB_r13_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType14_NB_r13, ab_Param_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ab_Param_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ab-Param-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType14_NB_r13, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
};
static int asn_MAP_SystemInformationBlockType14_NB_r13_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType14_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType14_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ab-Param-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lateNonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType14_NB_r13_specs_1 = {
	sizeof(struct SystemInformationBlockType14_NB_r13),
	offsetof(struct SystemInformationBlockType14_NB_r13, _asn_ctx),
	asn_MAP_SystemInformationBlockType14_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType14_NB_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType14_NB_r13 = {
	"SystemInformationBlockType14-NB-r13",
	"SystemInformationBlockType14-NB-r13",
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
	asn_DEF_SystemInformationBlockType14_NB_r13_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType14_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType14_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType14_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType14_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType14_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType14_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType14_NB_r13_specs_1	/* Additional specs */
};

