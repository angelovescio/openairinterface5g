/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_TDD_ConfigSL_r12_H_
#define	_LTE_TDD_ConfigSL_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12 {
	LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12_none	= 0,
	LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa0	= 1,
	LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa1	= 2,
	LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa2	= 3,
	LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa3	= 4,
	LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa4	= 5,
	LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa5	= 6,
	LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa6	= 7
} e_LTE_TDD_ConfigSL_r12__subframeAssignmentSL_r12;

/* LTE_TDD-ConfigSL-r12 */
typedef struct LTE_TDD_ConfigSL_r12 {
	long	 subframeAssignmentSL_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_TDD_ConfigSL_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_subframeAssignmentSL_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_TDD_ConfigSL_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_TDD_ConfigSL_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_TDD_ConfigSL_r12_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_TDD_ConfigSL_r12_H_ */
#include <asn_internal.h>
