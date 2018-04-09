/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "T-PollRetransmit.h"

int
T_PollRetransmit_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
T_PollRetransmit_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
T_PollRetransmit_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	T_PollRetransmit_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
T_PollRetransmit_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	T_PollRetransmit_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
T_PollRetransmit_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	T_PollRetransmit_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
T_PollRetransmit_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	T_PollRetransmit_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
T_PollRetransmit_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	T_PollRetransmit_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
T_PollRetransmit_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	T_PollRetransmit_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
T_PollRetransmit_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	T_PollRetransmit_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
T_PollRetransmit_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	T_PollRetransmit_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_T_PollRetransmit_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_T_PollRetransmit_value2enum_1[] = {
	{ 0,	3,	"ms5" },
	{ 1,	4,	"ms10" },
	{ 2,	4,	"ms15" },
	{ 3,	4,	"ms20" },
	{ 4,	4,	"ms25" },
	{ 5,	4,	"ms30" },
	{ 6,	4,	"ms35" },
	{ 7,	4,	"ms40" },
	{ 8,	4,	"ms45" },
	{ 9,	4,	"ms50" },
	{ 10,	4,	"ms55" },
	{ 11,	4,	"ms60" },
	{ 12,	4,	"ms65" },
	{ 13,	4,	"ms70" },
	{ 14,	4,	"ms75" },
	{ 15,	4,	"ms80" },
	{ 16,	4,	"ms85" },
	{ 17,	4,	"ms90" },
	{ 18,	4,	"ms95" },
	{ 19,	5,	"ms100" },
	{ 20,	5,	"ms105" },
	{ 21,	5,	"ms110" },
	{ 22,	5,	"ms115" },
	{ 23,	5,	"ms120" },
	{ 24,	5,	"ms125" },
	{ 25,	5,	"ms130" },
	{ 26,	5,	"ms135" },
	{ 27,	5,	"ms140" },
	{ 28,	5,	"ms145" },
	{ 29,	5,	"ms150" },
	{ 30,	5,	"ms155" },
	{ 31,	5,	"ms160" },
	{ 32,	5,	"ms165" },
	{ 33,	5,	"ms170" },
	{ 34,	5,	"ms175" },
	{ 35,	5,	"ms180" },
	{ 36,	5,	"ms185" },
	{ 37,	5,	"ms190" },
	{ 38,	5,	"ms195" },
	{ 39,	5,	"ms200" },
	{ 40,	5,	"ms205" },
	{ 41,	5,	"ms210" },
	{ 42,	5,	"ms215" },
	{ 43,	5,	"ms220" },
	{ 44,	5,	"ms225" },
	{ 45,	5,	"ms230" },
	{ 46,	5,	"ms235" },
	{ 47,	5,	"ms240" },
	{ 48,	5,	"ms245" },
	{ 49,	5,	"ms250" },
	{ 50,	5,	"ms300" },
	{ 51,	5,	"ms350" },
	{ 52,	5,	"ms400" },
	{ 53,	5,	"ms450" },
	{ 54,	5,	"ms500" },
	{ 55,	11,	"ms800-v1310" },
	{ 56,	12,	"ms1000-v1310" },
	{ 57,	12,	"ms2000-v1310" },
	{ 58,	12,	"ms4000-v1310" },
	{ 59,	6,	"spare5" },
	{ 60,	6,	"spare4" },
	{ 61,	6,	"spare3" },
	{ 62,	6,	"spare2" },
	{ 63,	6,	"spare1" }
};
static unsigned int asn_MAP_T_PollRetransmit_enum2value_1[] = {
	1,	/* ms10(1) */
	19,	/* ms100(19) */
	56,	/* ms1000-v1310(56) */
	20,	/* ms105(20) */
	21,	/* ms110(21) */
	22,	/* ms115(22) */
	23,	/* ms120(23) */
	24,	/* ms125(24) */
	25,	/* ms130(25) */
	26,	/* ms135(26) */
	27,	/* ms140(27) */
	28,	/* ms145(28) */
	2,	/* ms15(2) */
	29,	/* ms150(29) */
	30,	/* ms155(30) */
	31,	/* ms160(31) */
	32,	/* ms165(32) */
	33,	/* ms170(33) */
	34,	/* ms175(34) */
	35,	/* ms180(35) */
	36,	/* ms185(36) */
	37,	/* ms190(37) */
	38,	/* ms195(38) */
	3,	/* ms20(3) */
	39,	/* ms200(39) */
	57,	/* ms2000-v1310(57) */
	40,	/* ms205(40) */
	41,	/* ms210(41) */
	42,	/* ms215(42) */
	43,	/* ms220(43) */
	44,	/* ms225(44) */
	45,	/* ms230(45) */
	46,	/* ms235(46) */
	47,	/* ms240(47) */
	48,	/* ms245(48) */
	4,	/* ms25(4) */
	49,	/* ms250(49) */
	5,	/* ms30(5) */
	50,	/* ms300(50) */
	6,	/* ms35(6) */
	51,	/* ms350(51) */
	7,	/* ms40(7) */
	52,	/* ms400(52) */
	58,	/* ms4000-v1310(58) */
	8,	/* ms45(8) */
	53,	/* ms450(53) */
	0,	/* ms5(0) */
	9,	/* ms50(9) */
	54,	/* ms500(54) */
	10,	/* ms55(10) */
	11,	/* ms60(11) */
	12,	/* ms65(12) */
	13,	/* ms70(13) */
	14,	/* ms75(14) */
	15,	/* ms80(15) */
	55,	/* ms800-v1310(55) */
	16,	/* ms85(16) */
	17,	/* ms90(17) */
	18,	/* ms95(18) */
	63,	/* spare1(63) */
	62,	/* spare2(62) */
	61,	/* spare3(61) */
	60,	/* spare4(60) */
	59	/* spare5(59) */
};
static asn_INTEGER_specifics_t asn_SPC_T_PollRetransmit_specs_1 = {
	asn_MAP_T_PollRetransmit_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_PollRetransmit_enum2value_1,	/* N => "tag"; sorted by N */
	64,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_T_PollRetransmit_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_PollRetransmit = {
	"T-PollRetransmit",
	"T-PollRetransmit",
	T_PollRetransmit_free,
	T_PollRetransmit_print,
	T_PollRetransmit_constraint,
	T_PollRetransmit_decode_ber,
	T_PollRetransmit_encode_der,
	T_PollRetransmit_decode_xer,
	T_PollRetransmit_encode_xer,
	T_PollRetransmit_decode_uper,
	T_PollRetransmit_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_T_PollRetransmit_tags_1,
	sizeof(asn_DEF_T_PollRetransmit_tags_1)
		/sizeof(asn_DEF_T_PollRetransmit_tags_1[0]), /* 1 */
	asn_DEF_T_PollRetransmit_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_PollRetransmit_tags_1)
		/sizeof(asn_DEF_T_PollRetransmit_tags_1[0]), /* 1 */
	&asn_PER_type_T_PollRetransmit_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_PollRetransmit_specs_1	/* Additional specs */
};

