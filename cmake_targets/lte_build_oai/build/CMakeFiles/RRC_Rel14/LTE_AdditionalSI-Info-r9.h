/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AdditionalSI_Info_r9_H_
#define	_LTE_AdditionalSI_Info_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_CSG-Identity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AdditionalSI_Info_r9__csg_MemberStatus_r9 {
	LTE_AdditionalSI_Info_r9__csg_MemberStatus_r9_member	= 0
} e_LTE_AdditionalSI_Info_r9__csg_MemberStatus_r9;

/* LTE_AdditionalSI-Info-r9 */
typedef struct LTE_AdditionalSI_Info_r9 {
	long	*csg_MemberStatus_r9;	/* OPTIONAL */
	LTE_CSG_Identity_t	*csg_Identity_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AdditionalSI_Info_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_csg_MemberStatus_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AdditionalSI_Info_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AdditionalSI_Info_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AdditionalSI_Info_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AdditionalSI_Info_r9_H_ */
#include <asn_internal.h>
