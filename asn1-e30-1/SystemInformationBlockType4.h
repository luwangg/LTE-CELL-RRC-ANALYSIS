/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SystemInformationBlockType4_H_
#define	_SystemInformationBlockType4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqNeighCellList;
struct IntraFreqBlackCellList;
struct PhysCellIdRange;

/* SystemInformationBlockType4 */
typedef struct SystemInformationBlockType4 {
	struct IntraFreqNeighCellList	*intraFreqNeighCellList	/* OPTIONAL */;
	struct IntraFreqBlackCellList	*intraFreqBlackCellList	/* OPTIONAL */;
	struct PhysCellIdRange	*csg_PhysCellIdRange	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqNeighCellList.h"
#include "IntraFreqBlackCellList.h"
#include "PhysCellIdRange.h"

#endif	/* _SystemInformationBlockType4_H_ */
#include <asn_internal.h>
