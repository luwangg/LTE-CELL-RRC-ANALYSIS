/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SCG-ConfigPartSCG-r12.h"

static asn_TYPE_member_t asn_MBR_SCG_ConfigPartSCG_r12_1[] = {
	{ ATF_POINTER, 7, offsetof(struct SCG_ConfigPartSCG_r12, radioResourceConfigDedicatedSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicatedSCG_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioResourceConfigDedicatedSCG-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct SCG_ConfigPartSCG_r12, sCellToReleaseListSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToReleaseList_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sCellToReleaseListSCG-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct SCG_ConfigPartSCG_r12, pSCellToAddMod_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PSCellToAddMod_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pSCellToAddMod-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct SCG_ConfigPartSCG_r12, sCellToAddModListSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModList_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sCellToAddModListSCG-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct SCG_ConfigPartSCG_r12, mobilityControlInfoSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityControlInfoSCG_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mobilityControlInfoSCG-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct SCG_ConfigPartSCG_r12, sCellToReleaseListSCG_Ext_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToReleaseListExt_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sCellToReleaseListSCG-Ext-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigPartSCG_r12, sCellToAddModListSCG_Ext_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModListExt_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sCellToAddModListSCG-Ext-r13"
		},
};
static int asn_MAP_SCG_ConfigPartSCG_r12_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_SCG_ConfigPartSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SCG_ConfigPartSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigDedicatedSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sCellToReleaseListSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pSCellToAddMod-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sCellToAddModListSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mobilityControlInfoSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sCellToReleaseListSCG-Ext-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* sCellToAddModListSCG-Ext-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SCG_ConfigPartSCG_r12_specs_1 = {
	sizeof(struct SCG_ConfigPartSCG_r12),
	offsetof(struct SCG_ConfigPartSCG_r12, _asn_ctx),
	asn_MAP_SCG_ConfigPartSCG_r12_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SCG_ConfigPartSCG_r12_oms_1,	/* Optional members */
	5, 2,	/* Root/Additions */
	4,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SCG_ConfigPartSCG_r12 = {
	"SCG-ConfigPartSCG-r12",
	"SCG-ConfigPartSCG-r12",
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
	asn_DEF_SCG_ConfigPartSCG_r12_tags_1,
	sizeof(asn_DEF_SCG_ConfigPartSCG_r12_tags_1)
		/sizeof(asn_DEF_SCG_ConfigPartSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_SCG_ConfigPartSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCG_ConfigPartSCG_r12_tags_1)
		/sizeof(asn_DEF_SCG_ConfigPartSCG_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SCG_ConfigPartSCG_r12_1,
	7,	/* Elements count */
	&asn_SPC_SCG_ConfigPartSCG_r12_specs_1	/* Additional specs */
};

