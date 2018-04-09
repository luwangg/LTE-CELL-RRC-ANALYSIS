/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SL_SyncAllowed_r14_H_
#define	_SL_SyncAllowed_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_SyncAllowed_r14__gnss_Sync_r14 {
	SL_SyncAllowed_r14__gnss_Sync_r14_true	= 0
} e_SL_SyncAllowed_r14__gnss_Sync_r14;
typedef enum SL_SyncAllowed_r14__enb_Sync_r14 {
	SL_SyncAllowed_r14__enb_Sync_r14_true	= 0
} e_SL_SyncAllowed_r14__enb_Sync_r14;
typedef enum SL_SyncAllowed_r14__ue_Sync_r14 {
	SL_SyncAllowed_r14__ue_Sync_r14_true	= 0
} e_SL_SyncAllowed_r14__ue_Sync_r14;

/* SL-SyncAllowed-r14 */
typedef struct SL_SyncAllowed_r14 {
	long	*gnss_Sync_r14	/* OPTIONAL */;
	long	*enb_Sync_r14	/* OPTIONAL */;
	long	*ue_Sync_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_SyncAllowed_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gnss_Sync_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_enb_Sync_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_Sync_r14_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_SyncAllowed_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_SyncAllowed_r14_H_ */
#include <asn_internal.h>
