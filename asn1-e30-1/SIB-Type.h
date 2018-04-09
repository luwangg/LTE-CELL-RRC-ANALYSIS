/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SIB_Type_H_
#define	_SIB_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB_Type {
	SIB_Type_sibType3	= 0,
	SIB_Type_sibType4	= 1,
	SIB_Type_sibType5	= 2,
	SIB_Type_sibType6	= 3,
	SIB_Type_sibType7	= 4,
	SIB_Type_sibType8	= 5,
	SIB_Type_sibType9	= 6,
	SIB_Type_sibType10	= 7,
	SIB_Type_sibType11	= 8,
	SIB_Type_sibType12_v920	= 9,
	SIB_Type_sibType13_v920	= 10,
	SIB_Type_sibType14_v1130	= 11,
	SIB_Type_sibType15_v1130	= 12,
	SIB_Type_sibType16_v1130	= 13,
	SIB_Type_sibType17_v1250	= 14,
	SIB_Type_sibType18_v1250	= 15,
	/*
	 * Enumeration is extensible
	 */
	SIB_Type_sibType19_v1250	= 16,
	SIB_Type_sibType20_v1310	= 17,
	SIB_Type_sibType21_v1430	= 18
} e_SIB_Type;

/* SIB-Type */
typedef long	 SIB_Type_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB_Type;
asn_struct_free_f SIB_Type_free;
asn_struct_print_f SIB_Type_print;
asn_constr_check_f SIB_Type_constraint;
ber_type_decoder_f SIB_Type_decode_ber;
der_type_encoder_f SIB_Type_encode_der;
xer_type_decoder_f SIB_Type_decode_xer;
xer_type_encoder_f SIB_Type_encode_xer;
per_type_decoder_f SIB_Type_decode_uper;
per_type_encoder_f SIB_Type_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_Type_H_ */
#include <asn_internal.h>
