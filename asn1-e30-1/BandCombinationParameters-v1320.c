/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "BandCombinationParameters-v1320.h"

static int
additionalRx_Tx_PerformanceReq_r13_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
additionalRx_Tx_PerformanceReq_r13_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
additionalRx_Tx_PerformanceReq_r13_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	additionalRx_Tx_PerformanceReq_r13_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
additionalRx_Tx_PerformanceReq_r13_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	additionalRx_Tx_PerformanceReq_r13_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
additionalRx_Tx_PerformanceReq_r13_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	additionalRx_Tx_PerformanceReq_r13_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
additionalRx_Tx_PerformanceReq_r13_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	additionalRx_Tx_PerformanceReq_r13_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
additionalRx_Tx_PerformanceReq_r13_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	additionalRx_Tx_PerformanceReq_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
additionalRx_Tx_PerformanceReq_r13_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	additionalRx_Tx_PerformanceReq_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
additionalRx_Tx_PerformanceReq_r13_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	additionalRx_Tx_PerformanceReq_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
additionalRx_Tx_PerformanceReq_r13_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	additionalRx_Tx_PerformanceReq_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_bandParameterList_v1320_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_bandParameterList_v1320_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_additionalRx_Tx_PerformanceReq_r13_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bandParameterList_v1320_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_bandParameterList_v1320_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandParameters_v1320,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_bandParameterList_v1320_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bandParameterList_v1320_specs_2 = {
	sizeof(struct BandCombinationParameters_v1320__bandParameterList_v1320),
	offsetof(struct BandCombinationParameters_v1320__bandParameterList_v1320, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandParameterList_v1320_2 = {
	"bandParameterList-v1320",
	"bandParameterList-v1320",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_bandParameterList_v1320_tags_2,
	sizeof(asn_DEF_bandParameterList_v1320_tags_2)
		/sizeof(asn_DEF_bandParameterList_v1320_tags_2[0]) - 1, /* 1 */
	asn_DEF_bandParameterList_v1320_tags_2,	/* Same as above */
	sizeof(asn_DEF_bandParameterList_v1320_tags_2)
		/sizeof(asn_DEF_bandParameterList_v1320_tags_2[0]), /* 2 */
	&asn_PER_type_bandParameterList_v1320_constr_2,
	asn_MBR_bandParameterList_v1320_2,
	1,	/* Single element */
	&asn_SPC_bandParameterList_v1320_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_additionalRx_Tx_PerformanceReq_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_additionalRx_Tx_PerformanceReq_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_additionalRx_Tx_PerformanceReq_r13_specs_4 = {
	asn_MAP_additionalRx_Tx_PerformanceReq_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_additionalRx_Tx_PerformanceReq_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_additionalRx_Tx_PerformanceReq_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalRx_Tx_PerformanceReq_r13_4 = {
	"additionalRx-Tx-PerformanceReq-r13",
	"additionalRx-Tx-PerformanceReq-r13",
	additionalRx_Tx_PerformanceReq_r13_4_free,
	additionalRx_Tx_PerformanceReq_r13_4_print,
	additionalRx_Tx_PerformanceReq_r13_4_constraint,
	additionalRx_Tx_PerformanceReq_r13_4_decode_ber,
	additionalRx_Tx_PerformanceReq_r13_4_encode_der,
	additionalRx_Tx_PerformanceReq_r13_4_decode_xer,
	additionalRx_Tx_PerformanceReq_r13_4_encode_xer,
	additionalRx_Tx_PerformanceReq_r13_4_decode_uper,
	additionalRx_Tx_PerformanceReq_r13_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_additionalRx_Tx_PerformanceReq_r13_tags_4,
	sizeof(asn_DEF_additionalRx_Tx_PerformanceReq_r13_tags_4)
		/sizeof(asn_DEF_additionalRx_Tx_PerformanceReq_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_additionalRx_Tx_PerformanceReq_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_additionalRx_Tx_PerformanceReq_r13_tags_4)
		/sizeof(asn_DEF_additionalRx_Tx_PerformanceReq_r13_tags_4[0]), /* 2 */
	&asn_PER_type_additionalRx_Tx_PerformanceReq_r13_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_additionalRx_Tx_PerformanceReq_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1320_1[] = {
	{ ATF_POINTER, 2, offsetof(struct BandCombinationParameters_v1320, bandParameterList_v1320),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_bandParameterList_v1320_2,
		memb_bandParameterList_v1320_constraint_1,
		&asn_PER_memb_bandParameterList_v1320_constr_2,
		0,
		"bandParameterList-v1320"
		},
	{ ATF_POINTER, 1, offsetof(struct BandCombinationParameters_v1320, additionalRx_Tx_PerformanceReq_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_additionalRx_Tx_PerformanceReq_r13_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalRx-Tx-PerformanceReq-r13"
		},
};
static int asn_MAP_BandCombinationParameters_v1320_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_BandCombinationParameters_v1320_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_BandCombinationParameters_v1320_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandParameterList-v1320 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* additionalRx-Tx-PerformanceReq-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1320_specs_1 = {
	sizeof(struct BandCombinationParameters_v1320),
	offsetof(struct BandCombinationParameters_v1320, _asn_ctx),
	asn_MAP_BandCombinationParameters_v1320_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_BandCombinationParameters_v1320_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1320 = {
	"BandCombinationParameters-v1320",
	"BandCombinationParameters-v1320",
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
	asn_DEF_BandCombinationParameters_v1320_tags_1,
	sizeof(asn_DEF_BandCombinationParameters_v1320_tags_1)
		/sizeof(asn_DEF_BandCombinationParameters_v1320_tags_1[0]), /* 1 */
	asn_DEF_BandCombinationParameters_v1320_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombinationParameters_v1320_tags_1)
		/sizeof(asn_DEF_BandCombinationParameters_v1320_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_BandCombinationParameters_v1320_1,
	2,	/* Elements count */
	&asn_SPC_BandCombinationParameters_v1320_specs_1	/* Additional specs */
};

