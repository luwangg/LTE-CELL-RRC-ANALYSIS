/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_BandParameters_r13_H_
#define	_BandParameters_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-r11.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandParameters_r13__supportedCSI_Proc_r13 {
	BandParameters_r13__supportedCSI_Proc_r13_n1	= 0,
	BandParameters_r13__supportedCSI_Proc_r13_n3	= 1,
	BandParameters_r13__supportedCSI_Proc_r13_n4	= 2
} e_BandParameters_r13__supportedCSI_Proc_r13;

/* Forward declarations */
struct CA_MIMO_ParametersUL_r10;
struct CA_MIMO_ParametersDL_r13;

/* BandParameters-r13 */
typedef struct BandParameters_r13 {
	FreqBandIndicator_r11_t	 bandEUTRA_r13;
	struct CA_MIMO_ParametersUL_r10	*bandParametersUL_r13	/* OPTIONAL */;
	struct CA_MIMO_ParametersDL_r13	*bandParametersDL_r13	/* OPTIONAL */;
	long	*supportedCSI_Proc_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedCSI_Proc_r13_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandParametersUL-r13.h"
#include "BandParametersDL-r13.h"

#endif	/* _BandParameters_r13_H_ */
#include <asn_internal.h>
