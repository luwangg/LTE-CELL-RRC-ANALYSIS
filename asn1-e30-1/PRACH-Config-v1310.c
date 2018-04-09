/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "PRACH-Config-v1310.h"

static int
fdd_r13_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
fdd_r13_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
fdd_r13_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	fdd_r13_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
fdd_r13_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	fdd_r13_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
fdd_r13_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	fdd_r13_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
fdd_r13_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	fdd_r13_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
fdd_r13_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	fdd_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
fdd_r13_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	fdd_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
fdd_r13_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	fdd_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
fdd_r13_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	fdd_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
tdd_r13_13_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
tdd_r13_13_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
tdd_r13_13_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	tdd_r13_13_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
tdd_r13_13_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	tdd_r13_13_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
tdd_r13_13_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	tdd_r13_13_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
tdd_r13_13_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tdd_r13_13_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
tdd_r13_13_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	tdd_r13_13_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
tdd_r13_13_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tdd_r13_13_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
tdd_r13_13_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	tdd_r13_13_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
tdd_r13_13_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	tdd_r13_13_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_prach_HoppingOffset_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 94)) {
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
memb_initial_CE_level_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_fdd_r13_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tdd_r13_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mpdcch_startSF_CSS_RA_r13_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_prach_HoppingOffset_r13_constr_22 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  94 }	/* (0..94) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_initial_CE_level_r13_constr_24 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_fdd_r13_value2enum_4[] = {
	{ 0,	2,	"v1" },
	{ 1,	6,	"v1dot5" },
	{ 2,	2,	"v2" },
	{ 3,	6,	"v2dot5" },
	{ 4,	2,	"v4" },
	{ 5,	2,	"v5" },
	{ 6,	2,	"v8" },
	{ 7,	3,	"v10" }
};
static unsigned int asn_MAP_fdd_r13_enum2value_4[] = {
	0,	/* v1(0) */
	7,	/* v10(7) */
	1,	/* v1dot5(1) */
	2,	/* v2(2) */
	3,	/* v2dot5(3) */
	4,	/* v4(4) */
	5,	/* v5(5) */
	6	/* v8(6) */
};
static asn_INTEGER_specifics_t asn_SPC_fdd_r13_specs_4 = {
	asn_MAP_fdd_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_fdd_r13_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_fdd_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_r13_4 = {
	"fdd-r13",
	"fdd-r13",
	fdd_r13_4_free,
	fdd_r13_4_print,
	fdd_r13_4_constraint,
	fdd_r13_4_decode_ber,
	fdd_r13_4_encode_der,
	fdd_r13_4_decode_xer,
	fdd_r13_4_encode_xer,
	fdd_r13_4_decode_uper,
	fdd_r13_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_fdd_r13_tags_4,
	sizeof(asn_DEF_fdd_r13_tags_4)
		/sizeof(asn_DEF_fdd_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_fdd_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_fdd_r13_tags_4)
		/sizeof(asn_DEF_fdd_r13_tags_4[0]), /* 2 */
	&asn_PER_type_fdd_r13_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fdd_r13_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_tdd_r13_value2enum_13[] = {
	{ 0,	2,	"v1" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v5" },
	{ 4,	2,	"v8" },
	{ 5,	3,	"v10" },
	{ 6,	3,	"v20" },
	{ 7,	5,	"spare" }
};
static unsigned int asn_MAP_tdd_r13_enum2value_13[] = {
	7,	/* spare(7) */
	0,	/* v1(0) */
	5,	/* v10(5) */
	1,	/* v2(1) */
	6,	/* v20(6) */
	2,	/* v4(2) */
	3,	/* v5(3) */
	4	/* v8(4) */
};
static asn_INTEGER_specifics_t asn_SPC_tdd_r13_specs_13 = {
	asn_MAP_tdd_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_tdd_r13_enum2value_13,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_tdd_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_r13_13 = {
	"tdd-r13",
	"tdd-r13",
	tdd_r13_13_free,
	tdd_r13_13_print,
	tdd_r13_13_constraint,
	tdd_r13_13_decode_ber,
	tdd_r13_13_encode_der,
	tdd_r13_13_decode_xer,
	tdd_r13_13_encode_xer,
	tdd_r13_13_decode_uper,
	tdd_r13_13_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_tdd_r13_tags_13,
	sizeof(asn_DEF_tdd_r13_tags_13)
		/sizeof(asn_DEF_tdd_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_tdd_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_tdd_r13_tags_13)
		/sizeof(asn_DEF_tdd_r13_tags_13[0]), /* 2 */
	&asn_PER_type_tdd_r13_constr_13,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tdd_r13_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mpdcch_startSF_CSS_RA_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13, choice.fdd_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fdd_r13_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13, choice.tdd_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tdd_r13_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd-r13"
		},
};
static asn_TYPE_tag2member_t asn_MAP_mpdcch_startSF_CSS_RA_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_mpdcch_startSF_CSS_RA_r13_specs_3 = {
	sizeof(struct PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13),
	offsetof(struct PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13, _asn_ctx),
	offsetof(struct PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13, present),
	sizeof(((struct PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13 *)0)->present),
	asn_MAP_mpdcch_startSF_CSS_RA_r13_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_startSF_CSS_RA_r13_3 = {
	"mpdcch-startSF-CSS-RA-r13",
	"mpdcch-startSF-CSS-RA-r13",
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
	&asn_PER_type_mpdcch_startSF_CSS_RA_r13_constr_3,
	asn_MBR_mpdcch_startSF_CSS_RA_r13_3,
	2,	/* Elements count */
	&asn_SPC_mpdcch_startSF_CSS_RA_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PRACH_Config_v1310_1[] = {
	{ ATF_POINTER, 5, offsetof(struct PRACH_Config_v1310, rsrp_ThresholdsPrachInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_ThresholdsPrachInfoList_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrp-ThresholdsPrachInfoList-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct PRACH_Config_v1310, mpdcch_startSF_CSS_RA_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mpdcch_startSF_CSS_RA_r13_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mpdcch-startSF-CSS-RA-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct PRACH_Config_v1310, prach_HoppingOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_prach_HoppingOffset_r13_constraint_1,
		&asn_PER_memb_prach_HoppingOffset_r13_constr_22,
		0,
		"prach-HoppingOffset-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct PRACH_Config_v1310, prach_ParametersListCE_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_ParametersListCE_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prach-ParametersListCE-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PRACH_Config_v1310, initial_CE_level_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_initial_CE_level_r13_constraint_1,
		&asn_PER_memb_initial_CE_level_r13_constr_24,
		0,
		"initial-CE-level-r13"
		},
};
static int asn_MAP_PRACH_Config_v1310_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_PRACH_Config_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PRACH_Config_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrp-ThresholdsPrachInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mpdcch-startSF-CSS-RA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* prach-HoppingOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* prach-ParametersListCE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* initial-CE-level-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PRACH_Config_v1310_specs_1 = {
	sizeof(struct PRACH_Config_v1310),
	offsetof(struct PRACH_Config_v1310, _asn_ctx),
	asn_MAP_PRACH_Config_v1310_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_PRACH_Config_v1310_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PRACH_Config_v1310 = {
	"PRACH-Config-v1310",
	"PRACH-Config-v1310",
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
	asn_DEF_PRACH_Config_v1310_tags_1,
	sizeof(asn_DEF_PRACH_Config_v1310_tags_1)
		/sizeof(asn_DEF_PRACH_Config_v1310_tags_1[0]), /* 1 */
	asn_DEF_PRACH_Config_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_PRACH_Config_v1310_tags_1)
		/sizeof(asn_DEF_PRACH_Config_v1310_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PRACH_Config_v1310_1,
	5,	/* Elements count */
	&asn_SPC_PRACH_Config_v1310_specs_1	/* Additional specs */
};

