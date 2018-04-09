/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "RRCConnectionRelease-r8-IEs.h"

static asn_TYPE_member_t asn_MBR_RRCConnectionRelease_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRelease_r8_IEs, releaseCause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReleaseCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"releaseCause"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionRelease_r8_IEs, redirectedCarrierInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RedirectedCarrierInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"redirectedCarrierInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionRelease_r8_IEs, idleModeMobilityControlInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IdleModeMobilityControlInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"idleModeMobilityControlInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionRelease_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionRelease_v890_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_RRCConnectionRelease_r8_IEs_oms_1[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_RRCConnectionRelease_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionRelease_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* releaseCause */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* redirectedCarrierInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* idleModeMobilityControlInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_r8_IEs_specs_1 = {
	sizeof(struct RRCConnectionRelease_r8_IEs),
	offsetof(struct RRCConnectionRelease_r8_IEs, _asn_ctx),
	asn_MAP_RRCConnectionRelease_r8_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RRCConnectionRelease_r8_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_r8_IEs = {
	"RRCConnectionRelease-r8-IEs",
	"RRCConnectionRelease-r8-IEs",
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
	asn_DEF_RRCConnectionRelease_r8_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionRelease_r8_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRelease_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionRelease_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionRelease_r8_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRelease_r8_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionRelease_r8_IEs_1,
	4,	/* Elements count */
	&asn_SPC_RRCConnectionRelease_r8_IEs_specs_1	/* Additional specs */
};

