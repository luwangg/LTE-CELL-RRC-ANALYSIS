/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "PDCP-Parameters-v1310.h"

static int
pdcp_SN_Extension_18bits_r13_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
pdcp_SN_Extension_18bits_r13_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
pdcp_SN_Extension_18bits_r13_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	pdcp_SN_Extension_18bits_r13_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
pdcp_SN_Extension_18bits_r13_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	pdcp_SN_Extension_18bits_r13_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
pdcp_SN_Extension_18bits_r13_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	pdcp_SN_Extension_18bits_r13_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
pdcp_SN_Extension_18bits_r13_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	pdcp_SN_Extension_18bits_r13_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
pdcp_SN_Extension_18bits_r13_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	pdcp_SN_Extension_18bits_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
pdcp_SN_Extension_18bits_r13_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	pdcp_SN_Extension_18bits_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
pdcp_SN_Extension_18bits_r13_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	pdcp_SN_Extension_18bits_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
pdcp_SN_Extension_18bits_r13_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	pdcp_SN_Extension_18bits_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_pdcp_SN_Extension_18bits_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_pdcp_SN_Extension_18bits_r13_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_pdcp_SN_Extension_18bits_r13_enum2value_2[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_pdcp_SN_Extension_18bits_r13_specs_2 = {
	asn_MAP_pdcp_SN_Extension_18bits_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_pdcp_SN_Extension_18bits_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_pdcp_SN_Extension_18bits_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdcp_SN_Extension_18bits_r13_2 = {
	"pdcp-SN-Extension-18bits-r13",
	"pdcp-SN-Extension-18bits-r13",
	pdcp_SN_Extension_18bits_r13_2_free,
	pdcp_SN_Extension_18bits_r13_2_print,
	pdcp_SN_Extension_18bits_r13_2_constraint,
	pdcp_SN_Extension_18bits_r13_2_decode_ber,
	pdcp_SN_Extension_18bits_r13_2_encode_der,
	pdcp_SN_Extension_18bits_r13_2_decode_xer,
	pdcp_SN_Extension_18bits_r13_2_encode_xer,
	pdcp_SN_Extension_18bits_r13_2_decode_uper,
	pdcp_SN_Extension_18bits_r13_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_pdcp_SN_Extension_18bits_r13_tags_2,
	sizeof(asn_DEF_pdcp_SN_Extension_18bits_r13_tags_2)
		/sizeof(asn_DEF_pdcp_SN_Extension_18bits_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_pdcp_SN_Extension_18bits_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_pdcp_SN_Extension_18bits_r13_tags_2)
		/sizeof(asn_DEF_pdcp_SN_Extension_18bits_r13_tags_2[0]), /* 2 */
	&asn_PER_type_pdcp_SN_Extension_18bits_r13_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdcp_SN_Extension_18bits_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PDCP_Parameters_v1310_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PDCP_Parameters_v1310, pdcp_SN_Extension_18bits_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdcp_SN_Extension_18bits_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-SN-Extension-18bits-r13"
		},
};
static int asn_MAP_PDCP_Parameters_v1310_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_PDCP_Parameters_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PDCP_Parameters_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pdcp-SN-Extension-18bits-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDCP_Parameters_v1310_specs_1 = {
	sizeof(struct PDCP_Parameters_v1310),
	offsetof(struct PDCP_Parameters_v1310, _asn_ctx),
	asn_MAP_PDCP_Parameters_v1310_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_PDCP_Parameters_v1310_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Parameters_v1310 = {
	"PDCP-Parameters-v1310",
	"PDCP-Parameters-v1310",
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
	asn_DEF_PDCP_Parameters_v1310_tags_1,
	sizeof(asn_DEF_PDCP_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_PDCP_Parameters_v1310_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Parameters_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_PDCP_Parameters_v1310_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDCP_Parameters_v1310_1,
	1,	/* Elements count */
	&asn_SPC_PDCP_Parameters_v1310_specs_1	/* Additional specs */
};

