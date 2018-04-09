/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SystemInformationBlockType22-NB-r14.h"

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType22_NB_r14_1[] = {
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType22_NB_r14, dl_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_ConfigCommonList_NB_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-ConfigList-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType22_NB_r14, ul_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_ConfigCommonList_NB_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-ConfigList-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType22_NB_r14, pagingWeightAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingWeight_NB_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingWeightAnchor-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType22_NB_r14, nprach_ProbabilityAnchorList_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ProbabilityAnchorList_NB_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nprach-ProbabilityAnchorList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType22_NB_r14, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
};
static int asn_MAP_SystemInformationBlockType22_NB_r14_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType22_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType22_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-ConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-ConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pagingWeightAnchor-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-ProbabilityAnchorList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* lateNonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType22_NB_r14_specs_1 = {
	sizeof(struct SystemInformationBlockType22_NB_r14),
	offsetof(struct SystemInformationBlockType22_NB_r14, _asn_ctx),
	asn_MAP_SystemInformationBlockType22_NB_r14_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType22_NB_r14_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType22_NB_r14 = {
	"SystemInformationBlockType22-NB-r14",
	"SystemInformationBlockType22-NB-r14",
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
	asn_DEF_SystemInformationBlockType22_NB_r14_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType22_NB_r14_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType22_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType22_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType22_NB_r14_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType22_NB_r14_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType22_NB_r14_1,
	5,	/* Elements count */
	&asn_SPC_SystemInformationBlockType22_NB_r14_specs_1	/* Additional specs */
};

