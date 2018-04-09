/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "CQI-ReportConfig-v1250.h"

static int
memb_csi_MeasSubframeSets_r12_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 10)) {
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
altCQI_Table_r12_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
altCQI_Table_r12_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
altCQI_Table_r12_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	altCQI_Table_r12_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
altCQI_Table_r12_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	altCQI_Table_r12_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
altCQI_Table_r12_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	altCQI_Table_r12_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
altCQI_Table_r12_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	altCQI_Table_r12_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
altCQI_Table_r12_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	altCQI_Table_r12_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
altCQI_Table_r12_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	altCQI_Table_r12_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
altCQI_Table_r12_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	altCQI_Table_r12_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
altCQI_Table_r12_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	altCQI_Table_r12_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_memb_csi_MeasSubframeSets_r12_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_csi_SubframePatternConfig_r12_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_altCQI_Table_r12_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12__setup, csi_MeasSubframeSets_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_csi_MeasSubframeSets_r12_constraint_4,
		&asn_PER_memb_csi_MeasSubframeSets_r12_constr_5,
		0,
		"csi-MeasSubframeSets-r12"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* csi-MeasSubframeSets-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12__setup),
	offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_4,
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_4,
	1,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_SubframePatternConfig_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_csi_SubframePatternConfig_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_SubframePatternConfig_r12_specs_2 = {
	sizeof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12),
	offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12, _asn_ctx),
	offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12, present),
	sizeof(((struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12 *)0)->present),
	asn_MAP_csi_SubframePatternConfig_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_SubframePatternConfig_r12_2 = {
	"csi-SubframePatternConfig-r12",
	"csi-SubframePatternConfig-r12",
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
	&asn_PER_type_csi_SubframePatternConfig_r12_constr_2,
	asn_MBR_csi_SubframePatternConfig_r12_2,
	2,	/* Elements count */
	&asn_SPC_csi_SubframePatternConfig_r12_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_altCQI_Table_r12_value2enum_8[] = {
	{ 0,	12,	"allSubframes" },
	{ 1,	16,	"csi-SubframeSet1" },
	{ 2,	16,	"csi-SubframeSet2" },
	{ 3,	6,	"spare1" }
};
static unsigned int asn_MAP_altCQI_Table_r12_enum2value_8[] = {
	0,	/* allSubframes(0) */
	1,	/* csi-SubframeSet1(1) */
	2,	/* csi-SubframeSet2(2) */
	3	/* spare1(3) */
};
static asn_INTEGER_specifics_t asn_SPC_altCQI_Table_r12_specs_8 = {
	asn_MAP_altCQI_Table_r12_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_altCQI_Table_r12_enum2value_8,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_altCQI_Table_r12_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_altCQI_Table_r12_8 = {
	"altCQI-Table-r12",
	"altCQI-Table-r12",
	altCQI_Table_r12_8_free,
	altCQI_Table_r12_8_print,
	altCQI_Table_r12_8_constraint,
	altCQI_Table_r12_8_decode_ber,
	altCQI_Table_r12_8_encode_der,
	altCQI_Table_r12_8_decode_xer,
	altCQI_Table_r12_8_encode_xer,
	altCQI_Table_r12_8_decode_uper,
	altCQI_Table_r12_8_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_altCQI_Table_r12_tags_8,
	sizeof(asn_DEF_altCQI_Table_r12_tags_8)
		/sizeof(asn_DEF_altCQI_Table_r12_tags_8[0]) - 1, /* 1 */
	asn_DEF_altCQI_Table_r12_tags_8,	/* Same as above */
	sizeof(asn_DEF_altCQI_Table_r12_tags_8)
		/sizeof(asn_DEF_altCQI_Table_r12_tags_8[0]), /* 2 */
	&asn_PER_type_altCQI_Table_r12_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_altCQI_Table_r12_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CQI_ReportConfig_v1250_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CQI_ReportConfig_v1250, csi_SubframePatternConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_SubframePatternConfig_r12_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-SubframePatternConfig-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct CQI_ReportConfig_v1250, cqi_ReportBoth_v1250),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportBoth_v1250,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-ReportBoth-v1250"
		},
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportConfig_v1250, cqi_ReportAperiodic_v1250),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CQI_ReportAperiodic_v1250,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-ReportAperiodic-v1250"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfig_v1250, altCQI_Table_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_altCQI_Table_r12_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altCQI-Table-r12"
		},
};
static int asn_MAP_CQI_ReportConfig_v1250_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_CQI_ReportConfig_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CQI_ReportConfig_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-SubframePatternConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cqi-ReportBoth-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-ReportAperiodic-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* altCQI-Table-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_v1250_specs_1 = {
	sizeof(struct CQI_ReportConfig_v1250),
	offsetof(struct CQI_ReportConfig_v1250, _asn_ctx),
	asn_MAP_CQI_ReportConfig_v1250_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CQI_ReportConfig_v1250_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_v1250 = {
	"CQI-ReportConfig-v1250",
	"CQI-ReportConfig-v1250",
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
	asn_DEF_CQI_ReportConfig_v1250_tags_1,
	sizeof(asn_DEF_CQI_ReportConfig_v1250_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_v1250_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportConfig_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportConfig_v1250_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_v1250_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CQI_ReportConfig_v1250_1,
	4,	/* Elements count */
	&asn_SPC_CQI_ReportConfig_v1250_specs_1	/* Additional specs */
};

