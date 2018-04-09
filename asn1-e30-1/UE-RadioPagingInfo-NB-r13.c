/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "UE-RadioPagingInfo-NB-r13.h"

static int
ue_Category_NB_r13_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ue_Category_NB_r13_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ue_Category_NB_r13_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ue_Category_NB_r13_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ue_Category_NB_r13_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ue_Category_NB_r13_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ue_Category_NB_r13_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ue_Category_NB_r13_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ue_Category_NB_r13_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ue_Category_NB_r13_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ue_Category_NB_r13_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ue_Category_NB_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ue_Category_NB_r13_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ue_Category_NB_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ue_Category_NB_r13_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ue_Category_NB_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ue_Category_NB_r13_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ue_Category_NB_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
multiCarrierPaging_r14_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
multiCarrierPaging_r14_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
multiCarrierPaging_r14_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	multiCarrierPaging_r14_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
multiCarrierPaging_r14_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	multiCarrierPaging_r14_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
multiCarrierPaging_r14_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	multiCarrierPaging_r14_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
multiCarrierPaging_r14_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	multiCarrierPaging_r14_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
multiCarrierPaging_r14_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	multiCarrierPaging_r14_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
multiCarrierPaging_r14_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	multiCarrierPaging_r14_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
multiCarrierPaging_r14_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	multiCarrierPaging_r14_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
multiCarrierPaging_r14_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	multiCarrierPaging_r14_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_ue_Category_NB_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_multiCarrierPaging_r14_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_ue_Category_NB_r13_value2enum_2[] = {
	{ 0,	3,	"nb1" }
};
static unsigned int asn_MAP_ue_Category_NB_r13_enum2value_2[] = {
	0	/* nb1(0) */
};
static asn_INTEGER_specifics_t asn_SPC_ue_Category_NB_r13_specs_2 = {
	asn_MAP_ue_Category_NB_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_Category_NB_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ue_Category_NB_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_Category_NB_r13_2 = {
	"ue-Category-NB-r13",
	"ue-Category-NB-r13",
	ue_Category_NB_r13_2_free,
	ue_Category_NB_r13_2_print,
	ue_Category_NB_r13_2_constraint,
	ue_Category_NB_r13_2_decode_ber,
	ue_Category_NB_r13_2_encode_der,
	ue_Category_NB_r13_2_decode_xer,
	ue_Category_NB_r13_2_encode_xer,
	ue_Category_NB_r13_2_decode_uper,
	ue_Category_NB_r13_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ue_Category_NB_r13_tags_2,
	sizeof(asn_DEF_ue_Category_NB_r13_tags_2)
		/sizeof(asn_DEF_ue_Category_NB_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_ue_Category_NB_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_ue_Category_NB_r13_tags_2)
		/sizeof(asn_DEF_ue_Category_NB_r13_tags_2[0]), /* 2 */
	&asn_PER_type_ue_Category_NB_r13_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_Category_NB_r13_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_multiCarrierPaging_r14_value2enum_5[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_multiCarrierPaging_r14_enum2value_5[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_multiCarrierPaging_r14_specs_5 = {
	asn_MAP_multiCarrierPaging_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_multiCarrierPaging_r14_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_multiCarrierPaging_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiCarrierPaging_r14_5 = {
	"multiCarrierPaging-r14",
	"multiCarrierPaging-r14",
	multiCarrierPaging_r14_5_free,
	multiCarrierPaging_r14_5_print,
	multiCarrierPaging_r14_5_constraint,
	multiCarrierPaging_r14_5_decode_ber,
	multiCarrierPaging_r14_5_encode_der,
	multiCarrierPaging_r14_5_decode_xer,
	multiCarrierPaging_r14_5_encode_xer,
	multiCarrierPaging_r14_5_decode_uper,
	multiCarrierPaging_r14_5_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_multiCarrierPaging_r14_tags_5,
	sizeof(asn_DEF_multiCarrierPaging_r14_tags_5)
		/sizeof(asn_DEF_multiCarrierPaging_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_multiCarrierPaging_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_multiCarrierPaging_r14_tags_5)
		/sizeof(asn_DEF_multiCarrierPaging_r14_tags_5[0]), /* 2 */
	&asn_PER_type_multiCarrierPaging_r14_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiCarrierPaging_r14_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_RadioPagingInfo_NB_r13_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_RadioPagingInfo_NB_r13, ue_Category_NB_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_Category_NB_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-Category-NB-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioPagingInfo_NB_r13, multiCarrierPaging_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiCarrierPaging_r14_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multiCarrierPaging-r14"
		},
};
static int asn_MAP_UE_RadioPagingInfo_NB_r13_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_RadioPagingInfo_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Category-NB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* multiCarrierPaging-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_RadioPagingInfo_NB_r13_specs_1 = {
	sizeof(struct UE_RadioPagingInfo_NB_r13),
	offsetof(struct UE_RadioPagingInfo_NB_r13, _asn_ctx),
	asn_MAP_UE_RadioPagingInfo_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_RadioPagingInfo_NB_r13_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	0,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioPagingInfo_NB_r13 = {
	"UE-RadioPagingInfo-NB-r13",
	"UE-RadioPagingInfo-NB-r13",
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
	asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1,
	sizeof(asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1)
		/sizeof(asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1)
		/sizeof(asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_RadioPagingInfo_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_UE_RadioPagingInfo_NB_r13_specs_1	/* Additional specs */
};

