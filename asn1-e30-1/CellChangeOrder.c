/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "CellChangeOrder.h"

static int
t304_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
t304_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
t304_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t304_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t304_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t304_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t304_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t304_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t304_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t304_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t304_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t304_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t304_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t304_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t304_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t304_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t304_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t304_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_networkControlOrder_constraint_12(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_t304_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_networkControlOrder_constr_15 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_targetRAT_Type_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_t304_value2enum_2[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms500" },
	{ 3,	6,	"ms1000" },
	{ 4,	6,	"ms2000" },
	{ 5,	6,	"ms4000" },
	{ 6,	6,	"ms8000" },
	{ 7,	13,	"ms10000-v1310" }
};
static unsigned int asn_MAP_t304_enum2value_2[] = {
	0,	/* ms100(0) */
	3,	/* ms1000(3) */
	7,	/* ms10000-v1310(7) */
	1,	/* ms200(1) */
	4,	/* ms2000(4) */
	5,	/* ms4000(5) */
	2,	/* ms500(2) */
	6	/* ms8000(6) */
};
static asn_INTEGER_specifics_t asn_SPC_t304_specs_2 = {
	asn_MAP_t304_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_t304_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t304_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t304_2 = {
	"t304",
	"t304",
	t304_2_free,
	t304_2_print,
	t304_2_constraint,
	t304_2_decode_ber,
	t304_2_encode_der,
	t304_2_decode_xer,
	t304_2_encode_xer,
	t304_2_decode_uper,
	t304_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t304_tags_2,
	sizeof(asn_DEF_t304_tags_2)
		/sizeof(asn_DEF_t304_tags_2[0]) - 1, /* 1 */
	asn_DEF_t304_tags_2,	/* Same as above */
	sizeof(asn_DEF_t304_tags_2)
		/sizeof(asn_DEF_t304_tags_2[0]), /* 2 */
	&asn_PER_type_t304_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t304_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_geran_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellChangeOrder__targetRAT_Type__geran, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellChangeOrder__targetRAT_Type__geran, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq"
		},
	{ ATF_POINTER, 2, offsetof(struct CellChangeOrder__targetRAT_Type__geran, networkControlOrder),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_networkControlOrder_constraint_12,
		&asn_PER_memb_networkControlOrder_constr_15,
		0,
		"networkControlOrder"
		},
	{ ATF_POINTER, 1, offsetof(struct CellChangeOrder__targetRAT_Type__geran, systemInformation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SI_OrPSI_GERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"systemInformation"
		},
};
static int asn_MAP_geran_oms_12[] = { 2, 3 };
static ber_tlv_tag_t asn_DEF_geran_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_geran_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* networkControlOrder */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* systemInformation */
};
static asn_SEQUENCE_specifics_t asn_SPC_geran_specs_12 = {
	sizeof(struct CellChangeOrder__targetRAT_Type__geran),
	offsetof(struct CellChangeOrder__targetRAT_Type__geran, _asn_ctx),
	asn_MAP_geran_tag2el_12,
	4,	/* Count of tags in the map */
	asn_MAP_geran_oms_12,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_geran_12 = {
	"geran",
	"geran",
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
	asn_DEF_geran_tags_12,
	sizeof(asn_DEF_geran_tags_12)
		/sizeof(asn_DEF_geran_tags_12[0]) - 1, /* 1 */
	asn_DEF_geran_tags_12,	/* Same as above */
	sizeof(asn_DEF_geran_tags_12)
		/sizeof(asn_DEF_geran_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_geran_12,
	4,	/* Elements count */
	&asn_SPC_geran_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_targetRAT_Type_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellChangeOrder__targetRAT_Type, choice.geran),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_geran_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"geran"
		},
};
static asn_TYPE_tag2member_t asn_MAP_targetRAT_Type_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* geran */
};
static asn_CHOICE_specifics_t asn_SPC_targetRAT_Type_specs_11 = {
	sizeof(struct CellChangeOrder__targetRAT_Type),
	offsetof(struct CellChangeOrder__targetRAT_Type, _asn_ctx),
	offsetof(struct CellChangeOrder__targetRAT_Type, present),
	sizeof(((struct CellChangeOrder__targetRAT_Type *)0)->present),
	asn_MAP_targetRAT_Type_tag2el_11,
	1,	/* Count of tags in the map */
	0,
	1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_targetRAT_Type_11 = {
	"targetRAT-Type",
	"targetRAT-Type",
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
	&asn_PER_type_targetRAT_Type_constr_11,
	asn_MBR_targetRAT_Type_11,
	1,	/* Elements count */
	&asn_SPC_targetRAT_Type_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CellChangeOrder_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellChangeOrder, t304),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t304_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t304"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellChangeOrder, targetRAT_Type),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_targetRAT_Type_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"targetRAT-Type"
		},
};
static ber_tlv_tag_t asn_DEF_CellChangeOrder_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellChangeOrder_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t304 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* targetRAT-Type */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellChangeOrder_specs_1 = {
	sizeof(struct CellChangeOrder),
	offsetof(struct CellChangeOrder, _asn_ctx),
	asn_MAP_CellChangeOrder_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellChangeOrder = {
	"CellChangeOrder",
	"CellChangeOrder",
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
	asn_DEF_CellChangeOrder_tags_1,
	sizeof(asn_DEF_CellChangeOrder_tags_1)
		/sizeof(asn_DEF_CellChangeOrder_tags_1[0]), /* 1 */
	asn_DEF_CellChangeOrder_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellChangeOrder_tags_1)
		/sizeof(asn_DEF_CellChangeOrder_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellChangeOrder_1,
	2,	/* Elements count */
	&asn_SPC_CellChangeOrder_specs_1	/* Additional specs */
};

