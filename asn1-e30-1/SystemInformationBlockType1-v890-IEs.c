/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SystemInformationBlockType1-v890-IEs.h"

static int
memb_lateNonCriticalExtension_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_lateNonCriticalExtension_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v890_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v890_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_lateNonCriticalExtension_constraint_1,
		&asn_PER_memb_lateNonCriticalExtension_constr_2,
		0,
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v890_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1_v920_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_SystemInformationBlockType1_v890_IEs_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_v890_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_v890_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v890_IEs_specs_1 = {
	sizeof(struct SystemInformationBlockType1_v890_IEs),
	offsetof(struct SystemInformationBlockType1_v890_IEs, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_v890_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_v890_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v890_IEs = {
	"SystemInformationBlockType1-v890-IEs",
	"SystemInformationBlockType1-v890-IEs",
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
	asn_DEF_SystemInformationBlockType1_v890_IEs_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_v890_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v890_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_v890_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_v890_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v890_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType1_v890_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_v890_IEs_specs_1	/* Additional specs */
};

