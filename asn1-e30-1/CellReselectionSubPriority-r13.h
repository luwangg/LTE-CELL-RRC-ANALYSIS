/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CellReselectionSubPriority_r13_H_
#define	_CellReselectionSubPriority_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellReselectionSubPriority_r13 {
	CellReselectionSubPriority_r13_oDot2	= 0,
	CellReselectionSubPriority_r13_oDot4	= 1,
	CellReselectionSubPriority_r13_oDot6	= 2,
	CellReselectionSubPriority_r13_oDot8	= 3
} e_CellReselectionSubPriority_r13;

/* CellReselectionSubPriority-r13 */
typedef long	 CellReselectionSubPriority_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionSubPriority_r13;
asn_struct_free_f CellReselectionSubPriority_r13_free;
asn_struct_print_f CellReselectionSubPriority_r13_print;
asn_constr_check_f CellReselectionSubPriority_r13_constraint;
ber_type_decoder_f CellReselectionSubPriority_r13_decode_ber;
der_type_encoder_f CellReselectionSubPriority_r13_encode_der;
xer_type_decoder_f CellReselectionSubPriority_r13_decode_xer;
xer_type_encoder_f CellReselectionSubPriority_r13_encode_xer;
per_type_decoder_f CellReselectionSubPriority_r13_decode_uper;
per_type_encoder_f CellReselectionSubPriority_r13_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionSubPriority_r13_H_ */
#include <asn_internal.h>
