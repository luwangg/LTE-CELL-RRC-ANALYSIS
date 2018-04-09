/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "V2X-BandParameters-r14.h"

static asn_TYPE_member_t asn_MBR_V2X_BandParameters_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_BandParameters_r14, v2x_FreqBandEUTRA_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v2x-FreqBandEUTRA-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct V2X_BandParameters_r14, bandParametersTxSL_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandParametersTxSL_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandParametersTxSL-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct V2X_BandParameters_r14, bandParametersRxSL_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandParametersRxSL_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandParametersRxSL-r14"
		},
};
static int asn_MAP_V2X_BandParameters_r14_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_V2X_BandParameters_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_V2X_BandParameters_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-FreqBandEUTRA-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandParametersTxSL-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* bandParametersRxSL-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_V2X_BandParameters_r14_specs_1 = {
	sizeof(struct V2X_BandParameters_r14),
	offsetof(struct V2X_BandParameters_r14, _asn_ctx),
	asn_MAP_V2X_BandParameters_r14_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_V2X_BandParameters_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_V2X_BandParameters_r14 = {
	"V2X-BandParameters-r14",
	"V2X-BandParameters-r14",
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
	asn_DEF_V2X_BandParameters_r14_tags_1,
	sizeof(asn_DEF_V2X_BandParameters_r14_tags_1)
		/sizeof(asn_DEF_V2X_BandParameters_r14_tags_1[0]), /* 1 */
	asn_DEF_V2X_BandParameters_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_V2X_BandParameters_r14_tags_1)
		/sizeof(asn_DEF_V2X_BandParameters_r14_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_V2X_BandParameters_r14_1,
	3,	/* Elements count */
	&asn_SPC_V2X_BandParameters_r14_specs_1	/* Additional specs */
};

