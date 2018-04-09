/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "DL-CarrierConfigCommon-NB-r14.h"

static int
memb_indexToMidPRB_r14_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -55 && value <= 54)) {
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
eutra_NumCRS_Ports_r14_16_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
eutra_NumCRS_Ports_r14_16_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
eutra_NumCRS_Ports_r14_16_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	eutra_NumCRS_Ports_r14_16_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
eutra_NumCRS_Ports_r14_16_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	eutra_NumCRS_Ports_r14_16_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
eutra_NumCRS_Ports_r14_16_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	eutra_NumCRS_Ports_r14_16_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
eutra_NumCRS_Ports_r14_16_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	eutra_NumCRS_Ports_r14_16_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
eutra_NumCRS_Ports_r14_16_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	eutra_NumCRS_Ports_r14_16_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
eutra_NumCRS_Ports_r14_16_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	eutra_NumCRS_Ports_r14_16_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
eutra_NumCRS_Ports_r14_16_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	eutra_NumCRS_Ports_r14_16_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
eutra_NumCRS_Ports_r14_16_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	eutra_NumCRS_Ports_r14_16_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
eutraControlRegionSize_r14_19_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
eutraControlRegionSize_r14_19_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
eutraControlRegionSize_r14_19_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	eutraControlRegionSize_r14_19_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
eutraControlRegionSize_r14_19_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	eutraControlRegionSize_r14_19_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
eutraControlRegionSize_r14_19_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	eutraControlRegionSize_r14_19_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
eutraControlRegionSize_r14_19_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	eutraControlRegionSize_r14_19_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
eutraControlRegionSize_r14_19_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	eutraControlRegionSize_r14_19_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
eutraControlRegionSize_r14_19_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	eutraControlRegionSize_r14_19_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
eutraControlRegionSize_r14_19_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	eutraControlRegionSize_r14_19_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
eutraControlRegionSize_r14_19_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	eutraControlRegionSize_r14_19_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
nrs_PowerOffsetNonAnchor_r14_23_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
nrs_PowerOffsetNonAnchor_r14_23_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
nrs_PowerOffsetNonAnchor_r14_23_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	nrs_PowerOffsetNonAnchor_r14_23_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
nrs_PowerOffsetNonAnchor_r14_23_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	nrs_PowerOffsetNonAnchor_r14_23_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
nrs_PowerOffsetNonAnchor_r14_23_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	nrs_PowerOffsetNonAnchor_r14_23_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
nrs_PowerOffsetNonAnchor_r14_23_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	nrs_PowerOffsetNonAnchor_r14_23_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
nrs_PowerOffsetNonAnchor_r14_23_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	nrs_PowerOffsetNonAnchor_r14_23_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
nrs_PowerOffsetNonAnchor_r14_23_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	nrs_PowerOffsetNonAnchor_r14_23_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
nrs_PowerOffsetNonAnchor_r14_23_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	nrs_PowerOffsetNonAnchor_r14_23_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
nrs_PowerOffsetNonAnchor_r14_23_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	nrs_PowerOffsetNonAnchor_r14_23_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_downlinkBitmapNonAnchor_r14_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_GapNonAnchor_r14_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_indexToMidPRB_r14_constr_14 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -55,  54 }	/* (-55..54) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_eutra_NumCRS_Ports_r14_constr_16 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_samePCI_Indicator_r14_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_eutraControlRegionSize_r14_constr_19 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nrs_PowerOffsetNonAnchor_r14_constr_23 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_downlinkBitmapNonAnchor_r14_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, choice.useNoBitmap_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"useNoBitmap-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, choice.useAnchorBitmap_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"useAnchorBitmap-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, choice.explicitBitmapConfiguration_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DL_Bitmap_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicitBitmapConfiguration-r14"
		},
};
static asn_TYPE_tag2member_t asn_MAP_downlinkBitmapNonAnchor_r14_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* useNoBitmap-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* useAnchorBitmap-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* explicitBitmapConfiguration-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_downlinkBitmapNonAnchor_r14_specs_3 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, _asn_ctx),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, present),
	sizeof(((struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14 *)0)->present),
	asn_MAP_downlinkBitmapNonAnchor_r14_tag2el_3,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_downlinkBitmapNonAnchor_r14_3 = {
	"downlinkBitmapNonAnchor-r14",
	"downlinkBitmapNonAnchor-r14",
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
	&asn_PER_type_downlinkBitmapNonAnchor_r14_constr_3,
	asn_MBR_downlinkBitmapNonAnchor_r14_3,
	3,	/* Elements count */
	&asn_SPC_downlinkBitmapNonAnchor_r14_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dl_GapNonAnchor_r14_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, choice.useNoGap_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"useNoGap-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, choice.useAnchorGapConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"useAnchorGapConfig-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, choice.explicitGapConfiguration_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_GapConfig_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicitGapConfiguration-r14"
		},
};
static asn_TYPE_tag2member_t asn_MAP_dl_GapNonAnchor_r14_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* useNoGap-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* useAnchorGapConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* explicitGapConfiguration-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_dl_GapNonAnchor_r14_specs_7 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, _asn_ctx),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, present),
	sizeof(((struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14 *)0)->present),
	asn_MAP_dl_GapNonAnchor_r14_tag2el_7,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_GapNonAnchor_r14_7 = {
	"dl-GapNonAnchor-r14",
	"dl-GapNonAnchor-r14",
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
	&asn_PER_type_dl_GapNonAnchor_r14_constr_7,
	asn_MBR_dl_GapNonAnchor_r14_7,
	3,	/* Elements count */
	&asn_SPC_dl_GapNonAnchor_r14_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_samePCI_r14_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__samePCI_r14, indexToMidPRB_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_indexToMidPRB_r14_constraint_13,
		&asn_PER_memb_indexToMidPRB_r14_constr_14,
		0,
		"indexToMidPRB-r14"
		},
};
static ber_tlv_tag_t asn_DEF_samePCI_r14_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_samePCI_r14_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* indexToMidPRB-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_samePCI_r14_specs_13 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__samePCI_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__samePCI_r14, _asn_ctx),
	asn_MAP_samePCI_r14_tag2el_13,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_samePCI_r14_13 = {
	"samePCI-r14",
	"samePCI-r14",
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
	asn_DEF_samePCI_r14_tags_13,
	sizeof(asn_DEF_samePCI_r14_tags_13)
		/sizeof(asn_DEF_samePCI_r14_tags_13[0]) - 1, /* 1 */
	asn_DEF_samePCI_r14_tags_13,	/* Same as above */
	sizeof(asn_DEF_samePCI_r14_tags_13)
		/sizeof(asn_DEF_samePCI_r14_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_samePCI_r14_13,
	1,	/* Elements count */
	&asn_SPC_samePCI_r14_specs_13	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_eutra_NumCRS_Ports_r14_value2enum_16[] = {
	{ 0,	4,	"same" },
	{ 1,	4,	"four" }
};
static unsigned int asn_MAP_eutra_NumCRS_Ports_r14_enum2value_16[] = {
	1,	/* four(1) */
	0	/* same(0) */
};
static asn_INTEGER_specifics_t asn_SPC_eutra_NumCRS_Ports_r14_specs_16 = {
	asn_MAP_eutra_NumCRS_Ports_r14_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_eutra_NumCRS_Ports_r14_enum2value_16,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_eutra_NumCRS_Ports_r14_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_NumCRS_Ports_r14_16 = {
	"eutra-NumCRS-Ports-r14",
	"eutra-NumCRS-Ports-r14",
	eutra_NumCRS_Ports_r14_16_free,
	eutra_NumCRS_Ports_r14_16_print,
	eutra_NumCRS_Ports_r14_16_constraint,
	eutra_NumCRS_Ports_r14_16_decode_ber,
	eutra_NumCRS_Ports_r14_16_encode_der,
	eutra_NumCRS_Ports_r14_16_decode_xer,
	eutra_NumCRS_Ports_r14_16_encode_xer,
	eutra_NumCRS_Ports_r14_16_decode_uper,
	eutra_NumCRS_Ports_r14_16_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_eutra_NumCRS_Ports_r14_tags_16,
	sizeof(asn_DEF_eutra_NumCRS_Ports_r14_tags_16)
		/sizeof(asn_DEF_eutra_NumCRS_Ports_r14_tags_16[0]) - 1, /* 1 */
	asn_DEF_eutra_NumCRS_Ports_r14_tags_16,	/* Same as above */
	sizeof(asn_DEF_eutra_NumCRS_Ports_r14_tags_16)
		/sizeof(asn_DEF_eutra_NumCRS_Ports_r14_tags_16[0]), /* 2 */
	&asn_PER_type_eutra_NumCRS_Ports_r14_constr_16,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eutra_NumCRS_Ports_r14_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_differentPCI_r14_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__differentPCI_r14, eutra_NumCRS_Ports_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eutra_NumCRS_Ports_r14_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eutra-NumCRS-Ports-r14"
		},
};
static ber_tlv_tag_t asn_DEF_differentPCI_r14_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_differentPCI_r14_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* eutra-NumCRS-Ports-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_differentPCI_r14_specs_15 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__differentPCI_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__differentPCI_r14, _asn_ctx),
	asn_MAP_differentPCI_r14_tag2el_15,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_differentPCI_r14_15 = {
	"differentPCI-r14",
	"differentPCI-r14",
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
	asn_DEF_differentPCI_r14_tags_15,
	sizeof(asn_DEF_differentPCI_r14_tags_15)
		/sizeof(asn_DEF_differentPCI_r14_tags_15[0]) - 1, /* 1 */
	asn_DEF_differentPCI_r14_tags_15,	/* Same as above */
	sizeof(asn_DEF_differentPCI_r14_tags_15)
		/sizeof(asn_DEF_differentPCI_r14_tags_15[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_differentPCI_r14_15,
	1,	/* Elements count */
	&asn_SPC_differentPCI_r14_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_samePCI_Indicator_r14_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14, choice.samePCI_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_samePCI_r14_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"samePCI-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14, choice.differentPCI_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_differentPCI_r14_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"differentPCI-r14"
		},
};
static asn_TYPE_tag2member_t asn_MAP_samePCI_Indicator_r14_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* samePCI-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* differentPCI-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_samePCI_Indicator_r14_specs_12 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14, _asn_ctx),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14, present),
	sizeof(((struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14 *)0)->present),
	asn_MAP_samePCI_Indicator_r14_tag2el_12,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_samePCI_Indicator_r14_12 = {
	"samePCI-Indicator-r14",
	"samePCI-Indicator-r14",
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
	&asn_PER_type_samePCI_Indicator_r14_constr_12,
	asn_MBR_samePCI_Indicator_r14_12,
	2,	/* Elements count */
	&asn_SPC_samePCI_Indicator_r14_specs_12	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_eutraControlRegionSize_r14_value2enum_19[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" }
};
static unsigned int asn_MAP_eutraControlRegionSize_r14_enum2value_19[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2	/* n3(2) */
};
static asn_INTEGER_specifics_t asn_SPC_eutraControlRegionSize_r14_specs_19 = {
	asn_MAP_eutraControlRegionSize_r14_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_eutraControlRegionSize_r14_enum2value_19,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_eutraControlRegionSize_r14_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutraControlRegionSize_r14_19 = {
	"eutraControlRegionSize-r14",
	"eutraControlRegionSize-r14",
	eutraControlRegionSize_r14_19_free,
	eutraControlRegionSize_r14_19_print,
	eutraControlRegionSize_r14_19_constraint,
	eutraControlRegionSize_r14_19_decode_ber,
	eutraControlRegionSize_r14_19_encode_der,
	eutraControlRegionSize_r14_19_decode_xer,
	eutraControlRegionSize_r14_19_encode_xer,
	eutraControlRegionSize_r14_19_decode_uper,
	eutraControlRegionSize_r14_19_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_eutraControlRegionSize_r14_tags_19,
	sizeof(asn_DEF_eutraControlRegionSize_r14_tags_19)
		/sizeof(asn_DEF_eutraControlRegionSize_r14_tags_19[0]) - 1, /* 1 */
	asn_DEF_eutraControlRegionSize_r14_tags_19,	/* Same as above */
	sizeof(asn_DEF_eutraControlRegionSize_r14_tags_19)
		/sizeof(asn_DEF_eutraControlRegionSize_r14_tags_19[0]), /* 2 */
	&asn_PER_type_eutraControlRegionSize_r14_constr_19,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eutraControlRegionSize_r14_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_inbandCarrierInfo_r14_11[] = {
	{ ATF_POINTER, 1, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14, samePCI_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_samePCI_Indicator_r14_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"samePCI-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14, eutraControlRegionSize_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eutraControlRegionSize_r14_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eutraControlRegionSize-r14"
		},
};
static int asn_MAP_inbandCarrierInfo_r14_oms_11[] = { 0 };
static ber_tlv_tag_t asn_DEF_inbandCarrierInfo_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_inbandCarrierInfo_r14_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* samePCI-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutraControlRegionSize-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_inbandCarrierInfo_r14_specs_11 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14, _asn_ctx),
	asn_MAP_inbandCarrierInfo_r14_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_inbandCarrierInfo_r14_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_inbandCarrierInfo_r14_11 = {
	"inbandCarrierInfo-r14",
	"inbandCarrierInfo-r14",
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
	asn_DEF_inbandCarrierInfo_r14_tags_11,
	sizeof(asn_DEF_inbandCarrierInfo_r14_tags_11)
		/sizeof(asn_DEF_inbandCarrierInfo_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_inbandCarrierInfo_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_inbandCarrierInfo_r14_tags_11)
		/sizeof(asn_DEF_inbandCarrierInfo_r14_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_inbandCarrierInfo_r14_11,
	2,	/* Elements count */
	&asn_SPC_inbandCarrierInfo_r14_specs_11	/* Additional specs */
};

static int asn_DFL_23_set_6(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 6 */
		*st = 6;
		return 0;
	} else {
		/* Test default value 6 */
		return (*st == 6);
	}
}
static asn_INTEGER_enum_map_t asn_MAP_nrs_PowerOffsetNonAnchor_r14_value2enum_23[] = {
	{ 0,	5,	"dB-12" },
	{ 1,	5,	"dB-10" },
	{ 2,	4,	"dB-8" },
	{ 3,	4,	"dB-6" },
	{ 4,	4,	"dB-4" },
	{ 5,	4,	"dB-2" },
	{ 6,	3,	"dB0" },
	{ 7,	3,	"dB3" }
};
static unsigned int asn_MAP_nrs_PowerOffsetNonAnchor_r14_enum2value_23[] = {
	1,	/* dB-10(1) */
	0,	/* dB-12(0) */
	5,	/* dB-2(5) */
	4,	/* dB-4(4) */
	3,	/* dB-6(3) */
	2,	/* dB-8(2) */
	6,	/* dB0(6) */
	7	/* dB3(7) */
};
static asn_INTEGER_specifics_t asn_SPC_nrs_PowerOffsetNonAnchor_r14_specs_23 = {
	asn_MAP_nrs_PowerOffsetNonAnchor_r14_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_nrs_PowerOffsetNonAnchor_r14_enum2value_23,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nrs_PowerOffsetNonAnchor_r14_23 = {
	"nrs-PowerOffsetNonAnchor-r14",
	"nrs-PowerOffsetNonAnchor-r14",
	nrs_PowerOffsetNonAnchor_r14_23_free,
	nrs_PowerOffsetNonAnchor_r14_23_print,
	nrs_PowerOffsetNonAnchor_r14_23_constraint,
	nrs_PowerOffsetNonAnchor_r14_23_decode_ber,
	nrs_PowerOffsetNonAnchor_r14_23_encode_der,
	nrs_PowerOffsetNonAnchor_r14_23_decode_xer,
	nrs_PowerOffsetNonAnchor_r14_23_encode_xer,
	nrs_PowerOffsetNonAnchor_r14_23_decode_uper,
	nrs_PowerOffsetNonAnchor_r14_23_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23,
	sizeof(asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23)
		/sizeof(asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23[0]) - 1, /* 1 */
	asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23,	/* Same as above */
	sizeof(asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23)
		/sizeof(asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23[0]), /* 2 */
	&asn_PER_type_nrs_PowerOffsetNonAnchor_r14_constr_23,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nrs_PowerOffsetNonAnchor_r14_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DL_CarrierConfigCommon_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14, dl_CarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CarrierFreq-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14, downlinkBitmapNonAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_downlinkBitmapNonAnchor_r14_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"downlinkBitmapNonAnchor-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14, dl_GapNonAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dl_GapNonAnchor_r14_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-GapNonAnchor-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct DL_CarrierConfigCommon_NB_r14, inbandCarrierInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_inbandCarrierInfo_r14_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"inbandCarrierInfo-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_CarrierConfigCommon_NB_r14, nrs_PowerOffsetNonAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nrs_PowerOffsetNonAnchor_r14_23,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_23_set_6,	/* DEFAULT 6 */
		"nrs-PowerOffsetNonAnchor-r14"
		},
};
static int asn_MAP_DL_CarrierConfigCommon_NB_r14_oms_1[] = { 3, 4 };
static ber_tlv_tag_t asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_CarrierConfigCommon_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* downlinkBitmapNonAnchor-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-GapNonAnchor-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* inbandCarrierInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nrs-PowerOffsetNonAnchor-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_CarrierConfigCommon_NB_r14_specs_1 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14, _asn_ctx),
	asn_MAP_DL_CarrierConfigCommon_NB_r14_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_DL_CarrierConfigCommon_NB_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_CarrierConfigCommon_NB_r14 = {
	"DL-CarrierConfigCommon-NB-r14",
	"DL-CarrierConfigCommon-NB-r14",
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
	asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1,
	sizeof(asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1)
		/sizeof(asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1)
		/sizeof(asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_CarrierConfigCommon_NB_r14_1,
	5,	/* Elements count */
	&asn_SPC_DL_CarrierConfigCommon_NB_r14_specs_1	/* Additional specs */
};

