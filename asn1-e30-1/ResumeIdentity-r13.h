/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_ResumeIdentity_r13_H_
#define	_ResumeIdentity_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ResumeIdentity-r13 */
typedef BIT_STRING_t	 ResumeIdentity_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResumeIdentity_r13;
asn_struct_free_f ResumeIdentity_r13_free;
asn_struct_print_f ResumeIdentity_r13_print;
asn_constr_check_f ResumeIdentity_r13_constraint;
ber_type_decoder_f ResumeIdentity_r13_decode_ber;
der_type_encoder_f ResumeIdentity_r13_encode_der;
xer_type_decoder_f ResumeIdentity_r13_decode_xer;
xer_type_encoder_f ResumeIdentity_r13_encode_xer;
per_type_decoder_f ResumeIdentity_r13_decode_uper;
per_type_encoder_f ResumeIdentity_r13_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ResumeIdentity_r13_H_ */
#include <asn_internal.h>
