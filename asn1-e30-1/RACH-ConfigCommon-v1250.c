/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "RACH-ConfigCommon-v1250.h"

static int
connEstFailCount_r12_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
connEstFailCount_r12_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
connEstFailCount_r12_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	connEstFailCount_r12_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
connEstFailCount_r12_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	connEstFailCount_r12_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
connEstFailCount_r12_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	connEstFailCount_r12_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
connEstFailCount_r12_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	connEstFailCount_r12_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
connEstFailCount_r12_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	connEstFailCount_r12_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
connEstFailCount_r12_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	connEstFailCount_r12_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
connEstFailCount_r12_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	connEstFailCount_r12_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
connEstFailCount_r12_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	connEstFailCount_r12_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
connEstFailOffsetValidity_r12_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
connEstFailOffsetValidity_r12_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
connEstFailOffsetValidity_r12_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	connEstFailOffsetValidity_r12_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
connEstFailOffsetValidity_r12_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	connEstFailOffsetValidity_r12_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
connEstFailOffsetValidity_r12_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	connEstFailOffsetValidity_r12_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
connEstFailOffsetValidity_r12_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	connEstFailOffsetValidity_r12_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
connEstFailOffsetValidity_r12_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	connEstFailOffsetValidity_r12_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
connEstFailOffsetValidity_r12_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	connEstFailOffsetValidity_r12_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
connEstFailOffsetValidity_r12_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	connEstFailOffsetValidity_r12_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
connEstFailOffsetValidity_r12_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	connEstFailOffsetValidity_r12_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_connEstFailOffset_r12_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_connEstFailCount_r12_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_connEstFailOffsetValidity_r12_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_connEstFailOffset_r12_constr_17 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_connEstFailCount_r12_value2enum_3[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" }
};
static unsigned int asn_MAP_connEstFailCount_r12_enum2value_3[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3	/* n4(3) */
};
static asn_INTEGER_specifics_t asn_SPC_connEstFailCount_r12_specs_3 = {
	asn_MAP_connEstFailCount_r12_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_connEstFailCount_r12_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_connEstFailCount_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connEstFailCount_r12_3 = {
	"connEstFailCount-r12",
	"connEstFailCount-r12",
	connEstFailCount_r12_3_free,
	connEstFailCount_r12_3_print,
	connEstFailCount_r12_3_constraint,
	connEstFailCount_r12_3_decode_ber,
	connEstFailCount_r12_3_encode_der,
	connEstFailCount_r12_3_decode_xer,
	connEstFailCount_r12_3_encode_xer,
	connEstFailCount_r12_3_decode_uper,
	connEstFailCount_r12_3_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_connEstFailCount_r12_tags_3,
	sizeof(asn_DEF_connEstFailCount_r12_tags_3)
		/sizeof(asn_DEF_connEstFailCount_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_connEstFailCount_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_connEstFailCount_r12_tags_3)
		/sizeof(asn_DEF_connEstFailCount_r12_tags_3[0]), /* 2 */
	&asn_PER_type_connEstFailCount_r12_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connEstFailCount_r12_specs_3	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_connEstFailOffsetValidity_r12_value2enum_8[] = {
	{ 0,	3,	"s30" },
	{ 1,	3,	"s60" },
	{ 2,	4,	"s120" },
	{ 3,	4,	"s240" },
	{ 4,	4,	"s300" },
	{ 5,	4,	"s420" },
	{ 6,	4,	"s600" },
	{ 7,	4,	"s900" }
};
static unsigned int asn_MAP_connEstFailOffsetValidity_r12_enum2value_8[] = {
	2,	/* s120(2) */
	3,	/* s240(3) */
	0,	/* s30(0) */
	4,	/* s300(4) */
	5,	/* s420(5) */
	1,	/* s60(1) */
	6,	/* s600(6) */
	7	/* s900(7) */
};
static asn_INTEGER_specifics_t asn_SPC_connEstFailOffsetValidity_r12_specs_8 = {
	asn_MAP_connEstFailOffsetValidity_r12_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_connEstFailOffsetValidity_r12_enum2value_8,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_connEstFailOffsetValidity_r12_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connEstFailOffsetValidity_r12_8 = {
	"connEstFailOffsetValidity-r12",
	"connEstFailOffsetValidity-r12",
	connEstFailOffsetValidity_r12_8_free,
	connEstFailOffsetValidity_r12_8_print,
	connEstFailOffsetValidity_r12_8_constraint,
	connEstFailOffsetValidity_r12_8_decode_ber,
	connEstFailOffsetValidity_r12_8_encode_der,
	connEstFailOffsetValidity_r12_8_decode_xer,
	connEstFailOffsetValidity_r12_8_encode_xer,
	connEstFailOffsetValidity_r12_8_decode_uper,
	connEstFailOffsetValidity_r12_8_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_connEstFailOffsetValidity_r12_tags_8,
	sizeof(asn_DEF_connEstFailOffsetValidity_r12_tags_8)
		/sizeof(asn_DEF_connEstFailOffsetValidity_r12_tags_8[0]) - 1, /* 1 */
	asn_DEF_connEstFailOffsetValidity_r12_tags_8,	/* Same as above */
	sizeof(asn_DEF_connEstFailOffsetValidity_r12_tags_8)
		/sizeof(asn_DEF_connEstFailOffsetValidity_r12_tags_8[0]), /* 2 */
	&asn_PER_type_connEstFailOffsetValidity_r12_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connEstFailOffsetValidity_r12_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_txFailParams_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon_v1250__txFailParams_r12, connEstFailCount_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connEstFailCount_r12_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"connEstFailCount-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon_v1250__txFailParams_r12, connEstFailOffsetValidity_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connEstFailOffsetValidity_r12_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"connEstFailOffsetValidity-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct RACH_ConfigCommon_v1250__txFailParams_r12, connEstFailOffset_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_connEstFailOffset_r12_constraint_2,
		&asn_PER_memb_connEstFailOffset_r12_constr_17,
		0,
		"connEstFailOffset-r12"
		},
};
static int asn_MAP_txFailParams_r12_oms_2[] = { 2 };
static ber_tlv_tag_t asn_DEF_txFailParams_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_txFailParams_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* connEstFailCount-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* connEstFailOffsetValidity-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* connEstFailOffset-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_txFailParams_r12_specs_2 = {
	sizeof(struct RACH_ConfigCommon_v1250__txFailParams_r12),
	offsetof(struct RACH_ConfigCommon_v1250__txFailParams_r12, _asn_ctx),
	asn_MAP_txFailParams_r12_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_txFailParams_r12_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_txFailParams_r12_2 = {
	"txFailParams-r12",
	"txFailParams-r12",
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
	asn_DEF_txFailParams_r12_tags_2,
	sizeof(asn_DEF_txFailParams_r12_tags_2)
		/sizeof(asn_DEF_txFailParams_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_txFailParams_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_txFailParams_r12_tags_2)
		/sizeof(asn_DEF_txFailParams_r12_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_txFailParams_r12_2,
	3,	/* Elements count */
	&asn_SPC_txFailParams_r12_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RACH_ConfigCommon_v1250_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon_v1250, txFailParams_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_txFailParams_r12_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"txFailParams-r12"
		},
};
static ber_tlv_tag_t asn_DEF_RACH_ConfigCommon_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RACH_ConfigCommon_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* txFailParams-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigCommon_v1250_specs_1 = {
	sizeof(struct RACH_ConfigCommon_v1250),
	offsetof(struct RACH_ConfigCommon_v1250, _asn_ctx),
	asn_MAP_RACH_ConfigCommon_v1250_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RACH_ConfigCommon_v1250 = {
	"RACH-ConfigCommon-v1250",
	"RACH-ConfigCommon-v1250",
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
	asn_DEF_RACH_ConfigCommon_v1250_tags_1,
	sizeof(asn_DEF_RACH_ConfigCommon_v1250_tags_1)
		/sizeof(asn_DEF_RACH_ConfigCommon_v1250_tags_1[0]), /* 1 */
	asn_DEF_RACH_ConfigCommon_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_RACH_ConfigCommon_v1250_tags_1)
		/sizeof(asn_DEF_RACH_ConfigCommon_v1250_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RACH_ConfigCommon_v1250_1,
	1,	/* Elements count */
	&asn_SPC_RACH_ConfigCommon_v1250_specs_1	/* Additional specs */
};

