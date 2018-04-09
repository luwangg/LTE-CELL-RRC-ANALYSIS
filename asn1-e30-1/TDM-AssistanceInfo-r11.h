/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_TDM_AssistanceInfo_r11_H_
#define	_TDM_AssistanceInfo_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IDC-SubframePatternList-r11.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDM_AssistanceInfo_r11_PR {
	TDM_AssistanceInfo_r11_PR_NOTHING,	/* No components present */
	TDM_AssistanceInfo_r11_PR_drx_AssistanceInfo_r11,
	TDM_AssistanceInfo_r11_PR_idc_SubframePatternList_r11,
	/* Extensions may appear below */
	
} TDM_AssistanceInfo_r11_PR;
typedef enum TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11 {
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf40	= 0,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf64	= 1,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf80	= 2,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf128	= 3,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf160	= 4,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf256	= 5,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_spare2	= 6,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_spare1	= 7
} e_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11;
typedef enum TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11 {
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf20	= 0,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf30	= 1,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf40	= 2,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf60	= 3,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf80	= 4,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf100	= 5,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_spare2	= 6,
	TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_spare1	= 7
} e_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11;

/* TDM-AssistanceInfo-r11 */
typedef struct TDM_AssistanceInfo_r11 {
	TDM_AssistanceInfo_r11_PR present;
	union TDM_AssistanceInfo_r11_u {
		struct TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11 {
			long	 drx_CycleLength_r11;
			long	*drx_Offset_r11	/* OPTIONAL */;
			long	 drx_ActiveTime_r11;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} drx_AssistanceInfo_r11;
		IDC_SubframePatternList_r11_t	 idc_SubframePatternList_r11;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDM_AssistanceInfo_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_CycleLength_r11_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_ActiveTime_r11_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TDM_AssistanceInfo_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _TDM_AssistanceInfo_r11_H_ */
#include <asn_internal.h>
