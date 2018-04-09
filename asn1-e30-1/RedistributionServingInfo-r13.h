/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RedistributionServingInfo_r13_H_
#define	_RedistributionServingInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RedistributionServingInfo_r13__redistributionFactorCell_r13 {
	RedistributionServingInfo_r13__redistributionFactorCell_r13_true	= 0
} e_RedistributionServingInfo_r13__redistributionFactorCell_r13;
typedef enum RedistributionServingInfo_r13__t360_r13 {
	RedistributionServingInfo_r13__t360_r13_min4	= 0,
	RedistributionServingInfo_r13__t360_r13_min8	= 1,
	RedistributionServingInfo_r13__t360_r13_min16	= 2,
	RedistributionServingInfo_r13__t360_r13_min32	= 3,
	RedistributionServingInfo_r13__t360_r13_infinity	= 4,
	RedistributionServingInfo_r13__t360_r13_spare3	= 5,
	RedistributionServingInfo_r13__t360_r13_spare2	= 6,
	RedistributionServingInfo_r13__t360_r13_spare1	= 7
} e_RedistributionServingInfo_r13__t360_r13;
typedef enum RedistributionServingInfo_r13__redistrOnPagingOnly_r13 {
	RedistributionServingInfo_r13__redistrOnPagingOnly_r13_true	= 0
} e_RedistributionServingInfo_r13__redistrOnPagingOnly_r13;

/* RedistributionServingInfo-r13 */
typedef struct RedistributionServingInfo_r13 {
	long	 redistributionFactorServing_r13;
	long	*redistributionFactorCell_r13	/* OPTIONAL */;
	long	 t360_r13;
	long	*redistrOnPagingOnly_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RedistributionServingInfo_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_redistributionFactorCell_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t360_r13_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_redistrOnPagingOnly_r13_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RedistributionServingInfo_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _RedistributionServingInfo_r13_H_ */
#include <asn_internal.h>
