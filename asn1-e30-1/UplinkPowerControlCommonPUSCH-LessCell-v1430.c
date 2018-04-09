/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "UplinkPowerControlCommonPUSCH-LessCell-v1430.h"

static int
memb_p0_Nominal_PeriodicSRS_r14_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126 && value <= 24)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_p0_Nominal_AperiodicSRS_r14_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126 && value <= 24)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_p0_Nominal_PeriodicSRS_r14_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p0_Nominal_AperiodicSRS_r14_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UplinkPowerControlCommonPUSCH_LessCell_v1430_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430, p0_Nominal_PeriodicSRS_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p0_Nominal_PeriodicSRS_r14_constraint_1,
		&asn_PER_memb_p0_Nominal_PeriodicSRS_r14_constr_2,
		0,
		"p0-Nominal-PeriodicSRS-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430, p0_Nominal_AperiodicSRS_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p0_Nominal_AperiodicSRS_r14_constraint_1,
		&asn_PER_memb_p0_Nominal_AperiodicSRS_r14_constr_3,
		0,
		"p0-Nominal-AperiodicSRS-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430, alpha_SRS_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Alpha_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alpha-SRS-r14"
		},
};
static int asn_MAP_UplinkPowerControlCommonPUSCH_LessCell_v1430_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlCommonPUSCH_LessCell_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-Nominal-PeriodicSRS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* p0-Nominal-AperiodicSRS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* alpha-SRS-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommonPUSCH_LessCell_v1430_specs_1 = {
	sizeof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430),
	offsetof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430, _asn_ctx),
	asn_MAP_UplinkPowerControlCommonPUSCH_LessCell_v1430_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UplinkPowerControlCommonPUSCH_LessCell_v1430_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430 = {
	"UplinkPowerControlCommonPUSCH-LessCell-v1430",
	"UplinkPowerControlCommonPUSCH-LessCell-v1430",
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
	asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1,
	sizeof(asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UplinkPowerControlCommonPUSCH_LessCell_v1430_1,
	3,	/* Elements count */
	&asn_SPC_UplinkPowerControlCommonPUSCH_LessCell_v1430_specs_1	/* Additional specs */
};

