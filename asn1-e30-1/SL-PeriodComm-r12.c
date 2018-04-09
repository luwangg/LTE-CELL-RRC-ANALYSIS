/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SL-PeriodComm-r12.h"

int
SL_PeriodComm_r12_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
SL_PeriodComm_r12_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

void
SL_PeriodComm_r12_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SL_PeriodComm_r12_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SL_PeriodComm_r12_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SL_PeriodComm_r12_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SL_PeriodComm_r12_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SL_PeriodComm_r12_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SL_PeriodComm_r12_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SL_PeriodComm_r12_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SL_PeriodComm_r12_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SL_PeriodComm_r12_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SL_PeriodComm_r12_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SL_PeriodComm_r12_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
SL_PeriodComm_r12_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SL_PeriodComm_r12_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SL_PeriodComm_r12_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SL_PeriodComm_r12_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_SL_PeriodComm_r12_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_SL_PeriodComm_r12_value2enum_1[] = {
	{ 0,	4,	"sf40" },
	{ 1,	4,	"sf60" },
	{ 2,	4,	"sf70" },
	{ 3,	4,	"sf80" },
	{ 4,	5,	"sf120" },
	{ 5,	5,	"sf140" },
	{ 6,	5,	"sf160" },
	{ 7,	5,	"sf240" },
	{ 8,	5,	"sf280" },
	{ 9,	5,	"sf320" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	5,	"spare" }
};
static unsigned int asn_MAP_SL_PeriodComm_r12_enum2value_1[] = {
	4,	/* sf120(4) */
	5,	/* sf140(5) */
	6,	/* sf160(6) */
	7,	/* sf240(7) */
	8,	/* sf280(8) */
	9,	/* sf320(9) */
	0,	/* sf40(0) */
	1,	/* sf60(1) */
	2,	/* sf70(2) */
	3,	/* sf80(3) */
	15,	/* spare(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
static asn_INTEGER_specifics_t asn_SPC_SL_PeriodComm_r12_specs_1 = {
	asn_MAP_SL_PeriodComm_r12_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SL_PeriodComm_r12_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_SL_PeriodComm_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SL_PeriodComm_r12 = {
	"SL-PeriodComm-r12",
	"SL-PeriodComm-r12",
	SL_PeriodComm_r12_free,
	SL_PeriodComm_r12_print,
	SL_PeriodComm_r12_constraint,
	SL_PeriodComm_r12_decode_ber,
	SL_PeriodComm_r12_encode_der,
	SL_PeriodComm_r12_decode_xer,
	SL_PeriodComm_r12_encode_xer,
	SL_PeriodComm_r12_decode_uper,
	SL_PeriodComm_r12_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SL_PeriodComm_r12_tags_1,
	sizeof(asn_DEF_SL_PeriodComm_r12_tags_1)
		/sizeof(asn_DEF_SL_PeriodComm_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_PeriodComm_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PeriodComm_r12_tags_1)
		/sizeof(asn_DEF_SL_PeriodComm_r12_tags_1[0]), /* 1 */
	&asn_PER_type_SL_PeriodComm_r12_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SL_PeriodComm_r12_specs_1	/* Additional specs */
};

