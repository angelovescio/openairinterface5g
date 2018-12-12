/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CA_MIMO_ParametersDL_r13_H_
#define	_LTE_CA_MIMO_ParametersDL_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CA-BandwidthClass-r10.h"
#include "LTE_MIMO-CapabilityDL-r10.h"
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CA_MIMO_ParametersDL_r13__fourLayerTM3_TM4_r13 {
	LTE_CA_MIMO_ParametersDL_r13__fourLayerTM3_TM4_r13_supported	= 0
} e_LTE_CA_MIMO_ParametersDL_r13__fourLayerTM3_TM4_r13;

/* Forward declarations */
struct LTE_IntraBandContiguousCC_Info_r12;

/* LTE_CA-MIMO-ParametersDL-r13 */
typedef struct LTE_CA_MIMO_ParametersDL_r13 {
	LTE_CA_BandwidthClass_r10_t	 ca_BandwidthClassDL_r13;
	LTE_MIMO_CapabilityDL_r10_t	*supportedMIMO_CapabilityDL_r13;	/* OPTIONAL */
	long	*fourLayerTM3_TM4_r13;	/* OPTIONAL */
	struct LTE_CA_MIMO_ParametersDL_r13__intraBandContiguousCC_InfoList_r13 {
		A_SEQUENCE_OF(struct LTE_IntraBandContiguousCC_Info_r12) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} intraBandContiguousCC_InfoList_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CA_MIMO_ParametersDL_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_fourLayerTM3_TM4_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CA_MIMO_ParametersDL_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CA_MIMO_ParametersDL_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CA_MIMO_ParametersDL_r13_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_IntraBandContiguousCC-Info-r12.h"

#endif	/* _LTE_CA_MIMO_ParametersDL_r13_H_ */
#include <asn_internal.h>
