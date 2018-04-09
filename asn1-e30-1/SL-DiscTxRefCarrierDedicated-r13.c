/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SL-DiscTxRefCarrierDedicated-r13.h"

static asn_per_constraints_t asn_PER_type_SL_DiscTxRefCarrierDedicated_r13_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SL_DiscTxRefCarrierDedicated_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscTxRefCarrierDedicated_r13, choice.pCell),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscTxRefCarrierDedicated_r13, choice.sCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellIndex_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sCell"
		},
};
static asn_TYPE_tag2member_t asn_MAP_SL_DiscTxRefCarrierDedicated_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pCell */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sCell */
};
static asn_CHOICE_specifics_t asn_SPC_SL_DiscTxRefCarrierDedicated_r13_specs_1 = {
	sizeof(struct SL_DiscTxRefCarrierDedicated_r13),
	offsetof(struct SL_DiscTxRefCarrierDedicated_r13, _asn_ctx),
	offsetof(struct SL_DiscTxRefCarrierDedicated_r13, present),
	sizeof(((struct SL_DiscTxRefCarrierDedicated_r13 *)0)->present),
	asn_MAP_SL_DiscTxRefCarrierDedicated_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SL_DiscTxRefCarrierDedicated_r13 = {
	"SL-DiscTxRefCarrierDedicated-r13",
	"SL-DiscTxRefCarrierDedicated-r13",
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
	&asn_PER_type_SL_DiscTxRefCarrierDedicated_r13_constr_1,
	asn_MBR_SL_DiscTxRefCarrierDedicated_r13_1,
	2,	/* Elements count */
	&asn_SPC_SL_DiscTxRefCarrierDedicated_r13_specs_1	/* Additional specs */
};

