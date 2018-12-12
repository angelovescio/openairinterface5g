/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_NAICS_AssistanceInfo_r12_H_
#define	_LTE_NAICS_AssistanceInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_P-a.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NAICS_AssistanceInfo_r12_PR {
	LTE_NAICS_AssistanceInfo_r12_PR_NOTHING,	/* No components present */
	LTE_NAICS_AssistanceInfo_r12_PR_release,
	LTE_NAICS_AssistanceInfo_r12_PR_setup
} LTE_NAICS_AssistanceInfo_r12_PR;

/* Forward declarations */
struct LTE_NeighCellsToReleaseList_r12;
struct LTE_NeighCellsToAddModList_r12;

/* LTE_NAICS-AssistanceInfo-r12 */
typedef struct LTE_NAICS_AssistanceInfo_r12 {
	LTE_NAICS_AssistanceInfo_r12_PR present;
	union LTE_NAICS_AssistanceInfo_r12_u {
		NULL_t	 release;
		struct LTE_NAICS_AssistanceInfo_r12__setup {
			struct LTE_NeighCellsToReleaseList_r12	*neighCellsToReleaseList_r12;	/* OPTIONAL */
			struct LTE_NeighCellsToAddModList_r12	*neighCellsToAddModList_r12;	/* OPTIONAL */
			LTE_P_a_t	*servCellp_a_r12;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NAICS_AssistanceInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NAICS_AssistanceInfo_r12;
extern asn_CHOICE_specifics_t asn_SPC_LTE_NAICS_AssistanceInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NAICS_AssistanceInfo_r12_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_NAICS_AssistanceInfo_r12_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_NeighCellsToReleaseList-r12.h"
#include "LTE_NeighCellsToAddModList-r12.h"

#endif	/* _LTE_NAICS_AssistanceInfo_r12_H_ */
#include <asn_internal.h>
