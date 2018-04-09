/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SystemInformationBlockType5-v10j0-IEs.h"

static int
memb_interFreqCarrierFreqList_v10j0_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_interFreqCarrierFreqList_v10j0_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_interFreqCarrierFreqList_v10j0_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_interFreqCarrierFreqList_v10j0_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_InterFreqCarrierFreqInfo_v10j0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_interFreqCarrierFreqList_v10j0_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_interFreqCarrierFreqList_v10j0_specs_2 = {
	sizeof(struct SystemInformationBlockType5_v10j0_IEs__interFreqCarrierFreqList_v10j0),
	offsetof(struct SystemInformationBlockType5_v10j0_IEs__interFreqCarrierFreqList_v10j0, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interFreqCarrierFreqList_v10j0_2 = {
	"interFreqCarrierFreqList-v10j0",
	"interFreqCarrierFreqList-v10j0",
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
	asn_DEF_interFreqCarrierFreqList_v10j0_tags_2,
	sizeof(asn_DEF_interFreqCarrierFreqList_v10j0_tags_2)
		/sizeof(asn_DEF_interFreqCarrierFreqList_v10j0_tags_2[0]) - 1, /* 1 */
	asn_DEF_interFreqCarrierFreqList_v10j0_tags_2,	/* Same as above */
	sizeof(asn_DEF_interFreqCarrierFreqList_v10j0_tags_2)
		/sizeof(asn_DEF_interFreqCarrierFreqList_v10j0_tags_2[0]), /* 2 */
	&asn_PER_type_interFreqCarrierFreqList_v10j0_constr_2,
	asn_MBR_interFreqCarrierFreqList_v10j0_2,
	1,	/* Single element */
	&asn_SPC_interFreqCarrierFreqList_v10j0_specs_2	/* Additional specs */
};

static ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_4 = {
	sizeof(struct SystemInformationBlockType5_v10j0_IEs__nonCriticalExtension),
	offsetof(struct SystemInformationBlockType5_v10j0_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_4 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
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
	asn_DEF_nonCriticalExtension_tags_4,
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType5_v10j0_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType5_v10j0_IEs, interFreqCarrierFreqList_v10j0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_interFreqCarrierFreqList_v10j0_2,
		memb_interFreqCarrierFreqList_v10j0_constraint_1,
		&asn_PER_memb_interFreqCarrierFreqList_v10j0_constr_2,
		0,
		"interFreqCarrierFreqList-v10j0"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType5_v10j0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_SystemInformationBlockType5_v10j0_IEs_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType5_v10j0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType5_v10j0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList-v10j0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType5_v10j0_IEs_specs_1 = {
	sizeof(struct SystemInformationBlockType5_v10j0_IEs),
	offsetof(struct SystemInformationBlockType5_v10j0_IEs, _asn_ctx),
	asn_MAP_SystemInformationBlockType5_v10j0_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType5_v10j0_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5_v10j0_IEs = {
	"SystemInformationBlockType5-v10j0-IEs",
	"SystemInformationBlockType5-v10j0-IEs",
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
	asn_DEF_SystemInformationBlockType5_v10j0_IEs_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType5_v10j0_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType5_v10j0_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType5_v10j0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType5_v10j0_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType5_v10j0_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType5_v10j0_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType5_v10j0_IEs_specs_1	/* Additional specs */
};

