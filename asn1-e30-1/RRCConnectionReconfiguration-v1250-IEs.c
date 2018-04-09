/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "RRCConnectionReconfiguration-v1250-IEs.h"

static int
t350_r12_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
t350_r12_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
t350_r12_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t350_r12_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t350_r12_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t350_r12_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t350_r12_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t350_r12_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t350_r12_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t350_r12_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t350_r12_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t350_r12_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t350_r12_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t350_r12_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t350_r12_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t350_r12_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t350_r12_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t350_r12_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_t350_r12_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_wlan_OffloadInfo_r12_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_t350_r12_value2enum_6[] = {
	{ 0,	4,	"min5" },
	{ 1,	5,	"min10" },
	{ 2,	5,	"min20" },
	{ 3,	5,	"min30" },
	{ 4,	5,	"min60" },
	{ 5,	6,	"min120" },
	{ 6,	6,	"min180" },
	{ 7,	6,	"spare1" }
};
static unsigned int asn_MAP_t350_r12_enum2value_6[] = {
	1,	/* min10(1) */
	5,	/* min120(5) */
	6,	/* min180(6) */
	2,	/* min20(2) */
	3,	/* min30(3) */
	0,	/* min5(0) */
	4,	/* min60(4) */
	7	/* spare1(7) */
};
static asn_INTEGER_specifics_t asn_SPC_t350_r12_specs_6 = {
	asn_MAP_t350_r12_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_t350_r12_enum2value_6,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t350_r12_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t350_r12_6 = {
	"t350-r12",
	"t350-r12",
	t350_r12_6_free,
	t350_r12_6_print,
	t350_r12_6_constraint,
	t350_r12_6_decode_ber,
	t350_r12_6_encode_der,
	t350_r12_6_decode_xer,
	t350_r12_6_encode_xer,
	t350_r12_6_decode_uper,
	t350_r12_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t350_r12_tags_6,
	sizeof(asn_DEF_t350_r12_tags_6)
		/sizeof(asn_DEF_t350_r12_tags_6[0]) - 1, /* 1 */
	asn_DEF_t350_r12_tags_6,	/* Same as above */
	sizeof(asn_DEF_t350_r12_tags_6)
		/sizeof(asn_DEF_t350_r12_tags_6[0]), /* 2 */
	&asn_PER_type_t350_r12_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t350_r12_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12__setup, wlan_OffloadConfigDedicated_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_OffloadConfig_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"wlan-OffloadConfigDedicated-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12__setup, t350_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t350_r12_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t350-r12"
		},
};
static int asn_MAP_setup_oms_4[] = { 1 };
static ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* wlan-OffloadConfigDedicated-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* t350-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12__setup),
	offsetof(struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
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
	2,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_wlan_OffloadInfo_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_wlan_OffloadInfo_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_wlan_OffloadInfo_r12_specs_2 = {
	sizeof(struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12),
	offsetof(struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12, _asn_ctx),
	offsetof(struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12, present),
	sizeof(((struct RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12 *)0)->present),
	asn_MAP_wlan_OffloadInfo_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wlan_OffloadInfo_r12_2 = {
	"wlan-OffloadInfo-r12",
	"wlan-OffloadInfo-r12",
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
	&asn_PER_type_wlan_OffloadInfo_r12_constr_2,
	asn_MBR_wlan_OffloadInfo_r12_2,
	2,	/* Elements count */
	&asn_SPC_wlan_OffloadInfo_r12_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v1250_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct RRCConnectionReconfiguration_v1250_IEs, wlan_OffloadInfo_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_wlan_OffloadInfo_r12_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"wlan-OffloadInfo-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionReconfiguration_v1250_IEs, scg_Configuration_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SCG_Configuration_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scg-Configuration-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionReconfiguration_v1250_IEs, sl_SyncTxControl_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_SyncTxControl_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sl-SyncTxControl-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionReconfiguration_v1250_IEs, sl_DiscConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscConfig_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sl-DiscConfig-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReconfiguration_v1250_IEs, sl_CommConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommConfig_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sl-CommConfig-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReconfiguration_v1250_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReconfiguration_v1310_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_RRCConnectionReconfiguration_v1250_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_RRCConnectionReconfiguration_v1250_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionReconfiguration_v1250_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* wlan-OffloadInfo-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scg-Configuration-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-SyncTxControl-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-DiscConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-CommConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v1250_IEs_specs_1 = {
	sizeof(struct RRCConnectionReconfiguration_v1250_IEs),
	offsetof(struct RRCConnectionReconfiguration_v1250_IEs, _asn_ctx),
	asn_MAP_RRCConnectionReconfiguration_v1250_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReconfiguration_v1250_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1250_IEs = {
	"RRCConnectionReconfiguration-v1250-IEs",
	"RRCConnectionReconfiguration-v1250-IEs",
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
	asn_DEF_RRCConnectionReconfiguration_v1250_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionReconfiguration_v1250_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_v1250_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReconfiguration_v1250_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReconfiguration_v1250_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_v1250_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionReconfiguration_v1250_IEs_1,
	6,	/* Elements count */
	&asn_SPC_RRCConnectionReconfiguration_v1250_IEs_specs_1	/* Additional specs */
};

