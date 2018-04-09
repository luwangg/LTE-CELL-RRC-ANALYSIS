/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "MIMO-NonPrecodedCapabilities-r13.h"

static int
config1_r13_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
config1_r13_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
config1_r13_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	config1_r13_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
config1_r13_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	config1_r13_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
config1_r13_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	config1_r13_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
config1_r13_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	config1_r13_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
config1_r13_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	config1_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
config1_r13_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	config1_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
config1_r13_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	config1_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
config1_r13_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	config1_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
config2_r13_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
config2_r13_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
config2_r13_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	config2_r13_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
config2_r13_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	config2_r13_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
config2_r13_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	config2_r13_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
config2_r13_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	config2_r13_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
config2_r13_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	config2_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
config2_r13_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	config2_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
config2_r13_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	config2_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
config2_r13_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	config2_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
config3_r13_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
config3_r13_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
config3_r13_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	config3_r13_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
config3_r13_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	config3_r13_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
config3_r13_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	config3_r13_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
config3_r13_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	config3_r13_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
config3_r13_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	config3_r13_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
config3_r13_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	config3_r13_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
config3_r13_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	config3_r13_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
config3_r13_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	config3_r13_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
config4_r13_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
config4_r13_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
config4_r13_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	config4_r13_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
config4_r13_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	config4_r13_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
config4_r13_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	config4_r13_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
config4_r13_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	config4_r13_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
config4_r13_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	config4_r13_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
config4_r13_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	config4_r13_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
config4_r13_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	config4_r13_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
config4_r13_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	config4_r13_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_config1_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_config2_r13_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_config3_r13_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_config4_r13_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_config1_r13_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_config1_r13_enum2value_2[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_config1_r13_specs_2 = {
	asn_MAP_config1_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_config1_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_config1_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_config1_r13_2 = {
	"config1-r13",
	"config1-r13",
	config1_r13_2_free,
	config1_r13_2_print,
	config1_r13_2_constraint,
	config1_r13_2_decode_ber,
	config1_r13_2_encode_der,
	config1_r13_2_decode_xer,
	config1_r13_2_encode_xer,
	config1_r13_2_decode_uper,
	config1_r13_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_config1_r13_tags_2,
	sizeof(asn_DEF_config1_r13_tags_2)
		/sizeof(asn_DEF_config1_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_config1_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_config1_r13_tags_2)
		/sizeof(asn_DEF_config1_r13_tags_2[0]), /* 2 */
	&asn_PER_type_config1_r13_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_config1_r13_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_config2_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_config2_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_config2_r13_specs_4 = {
	asn_MAP_config2_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_config2_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_config2_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_config2_r13_4 = {
	"config2-r13",
	"config2-r13",
	config2_r13_4_free,
	config2_r13_4_print,
	config2_r13_4_constraint,
	config2_r13_4_decode_ber,
	config2_r13_4_encode_der,
	config2_r13_4_decode_xer,
	config2_r13_4_encode_xer,
	config2_r13_4_decode_uper,
	config2_r13_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_config2_r13_tags_4,
	sizeof(asn_DEF_config2_r13_tags_4)
		/sizeof(asn_DEF_config2_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_config2_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_config2_r13_tags_4)
		/sizeof(asn_DEF_config2_r13_tags_4[0]), /* 2 */
	&asn_PER_type_config2_r13_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_config2_r13_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_config3_r13_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_config3_r13_enum2value_6[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_config3_r13_specs_6 = {
	asn_MAP_config3_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_config3_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_config3_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_config3_r13_6 = {
	"config3-r13",
	"config3-r13",
	config3_r13_6_free,
	config3_r13_6_print,
	config3_r13_6_constraint,
	config3_r13_6_decode_ber,
	config3_r13_6_encode_der,
	config3_r13_6_decode_xer,
	config3_r13_6_encode_xer,
	config3_r13_6_decode_uper,
	config3_r13_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_config3_r13_tags_6,
	sizeof(asn_DEF_config3_r13_tags_6)
		/sizeof(asn_DEF_config3_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_config3_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_config3_r13_tags_6)
		/sizeof(asn_DEF_config3_r13_tags_6[0]), /* 2 */
	&asn_PER_type_config3_r13_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_config3_r13_specs_6	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_config4_r13_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_config4_r13_enum2value_8[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_config4_r13_specs_8 = {
	asn_MAP_config4_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_config4_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_config4_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_config4_r13_8 = {
	"config4-r13",
	"config4-r13",
	config4_r13_8_free,
	config4_r13_8_print,
	config4_r13_8_constraint,
	config4_r13_8_decode_ber,
	config4_r13_8_encode_der,
	config4_r13_8_decode_xer,
	config4_r13_8_encode_xer,
	config4_r13_8_decode_uper,
	config4_r13_8_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_config4_r13_tags_8,
	sizeof(asn_DEF_config4_r13_tags_8)
		/sizeof(asn_DEF_config4_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_config4_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_config4_r13_tags_8)
		/sizeof(asn_DEF_config4_r13_tags_8[0]), /* 2 */
	&asn_PER_type_config4_r13_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_config4_r13_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MIMO_NonPrecodedCapabilities_r13_1[] = {
	{ ATF_POINTER, 4, offsetof(struct MIMO_NonPrecodedCapabilities_r13, config1_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_config1_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"config1-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct MIMO_NonPrecodedCapabilities_r13, config2_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_config2_r13_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"config2-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MIMO_NonPrecodedCapabilities_r13, config3_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_config3_r13_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"config3-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MIMO_NonPrecodedCapabilities_r13, config4_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_config4_r13_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"config4-r13"
		},
};
static int asn_MAP_MIMO_NonPrecodedCapabilities_r13_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_MIMO_NonPrecodedCapabilities_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MIMO_NonPrecodedCapabilities_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* config1-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* config2-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* config3-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* config4-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MIMO_NonPrecodedCapabilities_r13_specs_1 = {
	sizeof(struct MIMO_NonPrecodedCapabilities_r13),
	offsetof(struct MIMO_NonPrecodedCapabilities_r13, _asn_ctx),
	asn_MAP_MIMO_NonPrecodedCapabilities_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MIMO_NonPrecodedCapabilities_r13_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MIMO_NonPrecodedCapabilities_r13 = {
	"MIMO-NonPrecodedCapabilities-r13",
	"MIMO-NonPrecodedCapabilities-r13",
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
	asn_DEF_MIMO_NonPrecodedCapabilities_r13_tags_1,
	sizeof(asn_DEF_MIMO_NonPrecodedCapabilities_r13_tags_1)
		/sizeof(asn_DEF_MIMO_NonPrecodedCapabilities_r13_tags_1[0]), /* 1 */
	asn_DEF_MIMO_NonPrecodedCapabilities_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MIMO_NonPrecodedCapabilities_r13_tags_1)
		/sizeof(asn_DEF_MIMO_NonPrecodedCapabilities_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MIMO_NonPrecodedCapabilities_r13_1,
	4,	/* Elements count */
	&asn_SPC_MIMO_NonPrecodedCapabilities_r13_specs_1	/* Additional specs */
};

