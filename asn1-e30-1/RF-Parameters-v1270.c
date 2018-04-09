/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "RF-Parameters-v1270.h"

static asn_TYPE_member_t asn_MBR_RF_Parameters_v1270_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RF_Parameters_v1270, supportedBandCombination_v1270),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombination_v1270,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportedBandCombination-v1270"
		},
	{ ATF_POINTER, 1, offsetof(struct RF_Parameters_v1270, supportedBandCombinationAdd_v1270),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombinationAdd_v1270,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportedBandCombinationAdd-v1270"
		},
};
static int asn_MAP_RF_Parameters_v1270_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_RF_Parameters_v1270_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RF_Parameters_v1270_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombination-v1270 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supportedBandCombinationAdd-v1270 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1270_specs_1 = {
	sizeof(struct RF_Parameters_v1270),
	offsetof(struct RF_Parameters_v1270, _asn_ctx),
	asn_MAP_RF_Parameters_v1270_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RF_Parameters_v1270_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1270 = {
	"RF-Parameters-v1270",
	"RF-Parameters-v1270",
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
	asn_DEF_RF_Parameters_v1270_tags_1,
	sizeof(asn_DEF_RF_Parameters_v1270_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1270_tags_1[0]), /* 1 */
	asn_DEF_RF_Parameters_v1270_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Parameters_v1270_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1270_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RF_Parameters_v1270_1,
	2,	/* Elements count */
	&asn_SPC_RF_Parameters_v1270_specs_1	/* Additional specs */
};

