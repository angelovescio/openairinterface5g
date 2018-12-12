/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SCG_ConfigPartSCG_r12_H_
#define	_LTE_SCG_ConfigPartSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RadioResourceConfigDedicatedSCG_r12;
struct LTE_SCellToReleaseList_r10;
struct LTE_PSCellToAddMod_r12;
struct LTE_SCellToAddModList_r10;
struct LTE_MobilityControlInfoSCG_r12;
struct LTE_SCellToReleaseListExt_r13;
struct LTE_SCellToAddModListExt_r13;
struct LTE_SCellToAddModListExt_v1370;
struct LTE_PSCellToAddMod_v1440;

/* LTE_SCG-ConfigPartSCG-r12 */
typedef struct LTE_SCG_ConfigPartSCG_r12 {
	struct LTE_RadioResourceConfigDedicatedSCG_r12	*radioResourceConfigDedicatedSCG_r12;	/* OPTIONAL */
	struct LTE_SCellToReleaseList_r10	*sCellToReleaseListSCG_r12;	/* OPTIONAL */
	struct LTE_PSCellToAddMod_r12	*pSCellToAddMod_r12;	/* OPTIONAL */
	struct LTE_SCellToAddModList_r10	*sCellToAddModListSCG_r12;	/* OPTIONAL */
	struct LTE_MobilityControlInfoSCG_r12	*mobilityControlInfoSCG_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SCG_ConfigPartSCG_r12__ext1 {
		struct LTE_SCellToReleaseListExt_r13	*sCellToReleaseListSCG_Ext_r13;	/* OPTIONAL */
		struct LTE_SCellToAddModListExt_r13	*sCellToAddModListSCG_Ext_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_SCG_ConfigPartSCG_r12__ext2 {
		struct LTE_SCellToAddModListExt_v1370	*sCellToAddModListSCG_Ext_v1370;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_SCG_ConfigPartSCG_r12__ext3 {
		struct LTE_PSCellToAddMod_v1440	*pSCellToAddMod_v1440;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SCG_ConfigPartSCG_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SCG_ConfigPartSCG_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SCG_ConfigPartSCG_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SCG_ConfigPartSCG_r12_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RadioResourceConfigDedicatedSCG-r12.h"
#include "LTE_SCellToReleaseList-r10.h"
#include "LTE_PSCellToAddMod-r12.h"
#include "LTE_SCellToAddModList-r10.h"
#include "LTE_MobilityControlInfoSCG-r12.h"
#include "LTE_SCellToReleaseListExt-r13.h"
#include "LTE_SCellToAddModListExt-r13.h"
#include "LTE_SCellToAddModListExt-v1370.h"
#include "LTE_PSCellToAddMod-v1440.h"

#endif	/* _LTE_SCG_ConfigPartSCG_r12_H_ */
#include <asn_internal.h>
