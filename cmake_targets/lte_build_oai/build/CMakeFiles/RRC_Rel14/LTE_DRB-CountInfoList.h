/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_DRB_CountInfoList_H_
#define	_LTE_DRB_CountInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_DRB_CountInfo;

/* LTE_DRB-CountInfoList */
typedef struct LTE_DRB_CountInfoList {
	A_SEQUENCE_OF(struct LTE_DRB_CountInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DRB_CountInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DRB_CountInfoList;
extern asn_SET_OF_specifics_t asn_SPC_LTE_DRB_CountInfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DRB_CountInfoList_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_DRB_CountInfoList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_DRB-CountInfo.h"

#endif	/* _LTE_DRB_CountInfoList_H_ */
#include <asn_internal.h>
