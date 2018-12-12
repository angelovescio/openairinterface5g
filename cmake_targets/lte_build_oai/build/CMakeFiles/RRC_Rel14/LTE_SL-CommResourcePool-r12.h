/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_CommResourcePool_r12_H_
#define	_LTE_SL_CommResourcePool_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-CP-Len-r12.h"
#include "LTE_SL-PeriodComm-r12.h"
#include "LTE_SL-TF-ResourceConfig-r12.h"
#include "LTE_SL-HoppingConfigComm-r12.h"
#include "LTE_SL-TRPT-Subset-r12.h"
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include "LTE_SL-TxParameters-r12.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_TDD_Config;
struct LTE_SL_PriorityList_r13;

/* LTE_SL-CommResourcePool-r12 */
typedef struct LTE_SL_CommResourcePool_r12 {
	LTE_SL_CP_Len_r12_t	 sc_CP_Len_r12;
	LTE_SL_PeriodComm_r12_t	 sc_Period_r12;
	LTE_SL_TF_ResourceConfig_r12_t	 sc_TF_ResourceConfig_r12;
	LTE_SL_CP_Len_r12_t	 data_CP_Len_r12;
	LTE_SL_HoppingConfigComm_r12_t	 dataHoppingConfig_r12;
	struct LTE_SL_CommResourcePool_r12__ue_SelectedResourceConfig_r12 {
		LTE_SL_TF_ResourceConfig_r12_t	 data_TF_ResourceConfig_r12;
		LTE_SL_TRPT_Subset_r12_t	*trpt_Subset_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ue_SelectedResourceConfig_r12;
	struct LTE_SL_CommResourcePool_r12__rxParametersNCell_r12 {
		struct LTE_TDD_Config	*tdd_Config_r12;	/* OPTIONAL */
		long	 syncConfigIndex_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParametersNCell_r12;
	struct LTE_SL_CommResourcePool_r12__txParameters_r12 {
		LTE_SL_TxParameters_r12_t	 sc_TxParameters_r12;
		LTE_SL_TxParameters_r12_t	 dataTxParameters_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SL_CommResourcePool_r12__ext1 {
		struct LTE_SL_PriorityList_r13	*priorityList_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_CommResourcePool_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_CommResourcePool_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_CommResourcePool_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_CommResourcePool_r12_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_TDD-Config.h"
#include "LTE_SL-PriorityList-r13.h"

#endif	/* _LTE_SL_CommResourcePool_r12_H_ */
#include <asn_internal.h>