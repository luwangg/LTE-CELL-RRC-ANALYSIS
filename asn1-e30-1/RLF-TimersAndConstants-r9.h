/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RLF_TimersAndConstants_r9_H_
#define	_RLF_TimersAndConstants_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLF_TimersAndConstants_r9_PR {
	RLF_TimersAndConstants_r9_PR_NOTHING,	/* No components present */
	RLF_TimersAndConstants_r9_PR_release,
	RLF_TimersAndConstants_r9_PR_setup
} RLF_TimersAndConstants_r9_PR;
typedef enum RLF_TimersAndConstants_r9__setup__t301_r9 {
	RLF_TimersAndConstants_r9__setup__t301_r9_ms100	= 0,
	RLF_TimersAndConstants_r9__setup__t301_r9_ms200	= 1,
	RLF_TimersAndConstants_r9__setup__t301_r9_ms300	= 2,
	RLF_TimersAndConstants_r9__setup__t301_r9_ms400	= 3,
	RLF_TimersAndConstants_r9__setup__t301_r9_ms600	= 4,
	RLF_TimersAndConstants_r9__setup__t301_r9_ms1000	= 5,
	RLF_TimersAndConstants_r9__setup__t301_r9_ms1500	= 6,
	RLF_TimersAndConstants_r9__setup__t301_r9_ms2000	= 7
} e_RLF_TimersAndConstants_r9__setup__t301_r9;
typedef enum RLF_TimersAndConstants_r9__setup__t310_r9 {
	RLF_TimersAndConstants_r9__setup__t310_r9_ms0	= 0,
	RLF_TimersAndConstants_r9__setup__t310_r9_ms50	= 1,
	RLF_TimersAndConstants_r9__setup__t310_r9_ms100	= 2,
	RLF_TimersAndConstants_r9__setup__t310_r9_ms200	= 3,
	RLF_TimersAndConstants_r9__setup__t310_r9_ms500	= 4,
	RLF_TimersAndConstants_r9__setup__t310_r9_ms1000	= 5,
	RLF_TimersAndConstants_r9__setup__t310_r9_ms2000	= 6
} e_RLF_TimersAndConstants_r9__setup__t310_r9;
typedef enum RLF_TimersAndConstants_r9__setup__n310_r9 {
	RLF_TimersAndConstants_r9__setup__n310_r9_n1	= 0,
	RLF_TimersAndConstants_r9__setup__n310_r9_n2	= 1,
	RLF_TimersAndConstants_r9__setup__n310_r9_n3	= 2,
	RLF_TimersAndConstants_r9__setup__n310_r9_n4	= 3,
	RLF_TimersAndConstants_r9__setup__n310_r9_n6	= 4,
	RLF_TimersAndConstants_r9__setup__n310_r9_n8	= 5,
	RLF_TimersAndConstants_r9__setup__n310_r9_n10	= 6,
	RLF_TimersAndConstants_r9__setup__n310_r9_n20	= 7
} e_RLF_TimersAndConstants_r9__setup__n310_r9;
typedef enum RLF_TimersAndConstants_r9__setup__t311_r9 {
	RLF_TimersAndConstants_r9__setup__t311_r9_ms1000	= 0,
	RLF_TimersAndConstants_r9__setup__t311_r9_ms3000	= 1,
	RLF_TimersAndConstants_r9__setup__t311_r9_ms5000	= 2,
	RLF_TimersAndConstants_r9__setup__t311_r9_ms10000	= 3,
	RLF_TimersAndConstants_r9__setup__t311_r9_ms15000	= 4,
	RLF_TimersAndConstants_r9__setup__t311_r9_ms20000	= 5,
	RLF_TimersAndConstants_r9__setup__t311_r9_ms30000	= 6
} e_RLF_TimersAndConstants_r9__setup__t311_r9;
typedef enum RLF_TimersAndConstants_r9__setup__n311_r9 {
	RLF_TimersAndConstants_r9__setup__n311_r9_n1	= 0,
	RLF_TimersAndConstants_r9__setup__n311_r9_n2	= 1,
	RLF_TimersAndConstants_r9__setup__n311_r9_n3	= 2,
	RLF_TimersAndConstants_r9__setup__n311_r9_n4	= 3,
	RLF_TimersAndConstants_r9__setup__n311_r9_n5	= 4,
	RLF_TimersAndConstants_r9__setup__n311_r9_n6	= 5,
	RLF_TimersAndConstants_r9__setup__n311_r9_n8	= 6,
	RLF_TimersAndConstants_r9__setup__n311_r9_n10	= 7
} e_RLF_TimersAndConstants_r9__setup__n311_r9;

/* RLF-TimersAndConstants-r9 */
typedef struct RLF_TimersAndConstants_r9 {
	RLF_TimersAndConstants_r9_PR present;
	union RLF_TimersAndConstants_r9_u {
		NULL_t	 release;
		struct RLF_TimersAndConstants_r9__setup {
			long	 t301_r9;
			long	 t310_r9;
			long	 n310_r9;
			long	 t311_r9;
			long	 n311_r9;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLF_TimersAndConstants_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t301_r9_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t310_r9_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_n310_r9_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t311_r9_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_n311_r9_38;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLF_TimersAndConstants_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _RLF_TimersAndConstants_r9_H_ */
#include <asn_internal.h>
