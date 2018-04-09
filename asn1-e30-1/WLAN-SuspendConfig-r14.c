/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "WLAN-SuspendConfig-r14.h"

static asn_TYPE_member_t asn_MBR_WLAN_SuspendConfig_r14_1[] = {
	{ ATF_POINTER, 2, offsetof(struct WLAN_SuspendConfig_r14, wlan_SuspendResumeAllowed_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"wlan-SuspendResumeAllowed-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct WLAN_SuspendConfig_r14, wlan_SuspendTriggersStatusReport_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"wlan-SuspendTriggersStatusReport-r14"
		},
};
static int asn_MAP_WLAN_SuspendConfig_r14_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_WLAN_SuspendConfig_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_WLAN_SuspendConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* wlan-SuspendResumeAllowed-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* wlan-SuspendTriggersStatusReport-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_WLAN_SuspendConfig_r14_specs_1 = {
	sizeof(struct WLAN_SuspendConfig_r14),
	offsetof(struct WLAN_SuspendConfig_r14, _asn_ctx),
	asn_MAP_WLAN_SuspendConfig_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_WLAN_SuspendConfig_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_WLAN_SuspendConfig_r14 = {
	"WLAN-SuspendConfig-r14",
	"WLAN-SuspendConfig-r14",
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
	asn_DEF_WLAN_SuspendConfig_r14_tags_1,
	sizeof(asn_DEF_WLAN_SuspendConfig_r14_tags_1)
		/sizeof(asn_DEF_WLAN_SuspendConfig_r14_tags_1[0]), /* 1 */
	asn_DEF_WLAN_SuspendConfig_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_WLAN_SuspendConfig_r14_tags_1)
		/sizeof(asn_DEF_WLAN_SuspendConfig_r14_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_WLAN_SuspendConfig_r14_1,
	2,	/* Elements count */
	&asn_SPC_WLAN_SuspendConfig_r14_specs_1	/* Additional specs */
};

