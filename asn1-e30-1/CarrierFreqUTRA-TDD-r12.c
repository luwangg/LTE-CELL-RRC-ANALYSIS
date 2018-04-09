/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "CarrierFreqUTRA-TDD-r12.h"

static int
reducedMeasPerformance_r12_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
reducedMeasPerformance_r12_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
reducedMeasPerformance_r12_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	reducedMeasPerformance_r12_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
reducedMeasPerformance_r12_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	reducedMeasPerformance_r12_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
reducedMeasPerformance_r12_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	reducedMeasPerformance_r12_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
reducedMeasPerformance_r12_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	reducedMeasPerformance_r12_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
reducedMeasPerformance_r12_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	reducedMeasPerformance_r12_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
reducedMeasPerformance_r12_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	reducedMeasPerformance_r12_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
reducedMeasPerformance_r12_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	reducedMeasPerformance_r12_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
reducedMeasPerformance_r12_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	reducedMeasPerformance_r12_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_q_RxLevMin_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= -13)) {
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
memb_p_MaxUTRA_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -50 && value <= 33)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_reducedMeasPerformance_r12_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_q_RxLevMin_r12_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -60, -13 }	/* (-60..-13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p_MaxUTRA_r12_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -50,  33 }	/* (-50..33) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_reducedMeasPerformance_r12_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_reducedMeasPerformance_r12_enum2value_8[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_reducedMeasPerformance_r12_specs_8 = {
	asn_MAP_reducedMeasPerformance_r12_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_reducedMeasPerformance_r12_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_reducedMeasPerformance_r12_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedMeasPerformance_r12_8 = {
	"reducedMeasPerformance-r12",
	"reducedMeasPerformance-r12",
	reducedMeasPerformance_r12_8_free,
	reducedMeasPerformance_r12_8_print,
	reducedMeasPerformance_r12_8_constraint,
	reducedMeasPerformance_r12_8_decode_ber,
	reducedMeasPerformance_r12_8_encode_der,
	reducedMeasPerformance_r12_8_decode_xer,
	reducedMeasPerformance_r12_8_encode_xer,
	reducedMeasPerformance_r12_8_decode_uper,
	reducedMeasPerformance_r12_8_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_reducedMeasPerformance_r12_tags_8,
	sizeof(asn_DEF_reducedMeasPerformance_r12_tags_8)
		/sizeof(asn_DEF_reducedMeasPerformance_r12_tags_8[0]) - 1, /* 1 */
	asn_DEF_reducedMeasPerformance_r12_tags_8,	/* Same as above */
	sizeof(asn_DEF_reducedMeasPerformance_r12_tags_8)
		/sizeof(asn_DEF_reducedMeasPerformance_r12_tags_8[0]), /* 2 */
	&asn_PER_type_reducedMeasPerformance_r12_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reducedMeasPerformance_r12_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CarrierFreqUTRA_TDD_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_TDD_r12, carrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqUTRA_TDD_r12, cellReselectionPriority_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionPriority,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellReselectionPriority-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_TDD_r12, threshX_High_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-High-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_TDD_r12, threshX_Low_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-Low-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_TDD_r12, q_RxLevMin_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_q_RxLevMin_r12_constraint_1,
		&asn_PER_memb_q_RxLevMin_r12_constr_6,
		0,
		"q-RxLevMin-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_TDD_r12, p_MaxUTRA_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p_MaxUTRA_r12_constraint_1,
		&asn_PER_memb_p_MaxUTRA_r12_constr_7,
		0,
		"p-MaxUTRA-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqUTRA_TDD_r12, reducedMeasPerformance_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reducedMeasPerformance_r12_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reducedMeasPerformance-r12"
		},
};
static int asn_MAP_CarrierFreqUTRA_TDD_r12_oms_1[] = { 1, 6 };
static ber_tlv_tag_t asn_DEF_CarrierFreqUTRA_TDD_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CarrierFreqUTRA_TDD_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionPriority-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* threshX-High-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* threshX-Low-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* q-RxLevMin-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* p-MaxUTRA-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* reducedMeasPerformance-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqUTRA_TDD_r12_specs_1 = {
	sizeof(struct CarrierFreqUTRA_TDD_r12),
	offsetof(struct CarrierFreqUTRA_TDD_r12, _asn_ctx),
	asn_MAP_CarrierFreqUTRA_TDD_r12_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_CarrierFreqUTRA_TDD_r12_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	6,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqUTRA_TDD_r12 = {
	"CarrierFreqUTRA-TDD-r12",
	"CarrierFreqUTRA-TDD-r12",
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
	asn_DEF_CarrierFreqUTRA_TDD_r12_tags_1,
	sizeof(asn_DEF_CarrierFreqUTRA_TDD_r12_tags_1)
		/sizeof(asn_DEF_CarrierFreqUTRA_TDD_r12_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqUTRA_TDD_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqUTRA_TDD_r12_tags_1)
		/sizeof(asn_DEF_CarrierFreqUTRA_TDD_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CarrierFreqUTRA_TDD_r12_1,
	7,	/* Elements count */
	&asn_SPC_CarrierFreqUTRA_TDD_r12_specs_1	/* Additional specs */
};

