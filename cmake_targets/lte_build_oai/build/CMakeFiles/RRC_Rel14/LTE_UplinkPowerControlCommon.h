/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UplinkPowerControlCommon_H_
#define	_LTE_UplinkPowerControlCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_Alpha-r12.h"
#include "LTE_DeltaFList-PUCCH.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_UplinkPowerControlCommon */
typedef struct LTE_UplinkPowerControlCommon {
	long	 p0_NominalPUSCH;
	LTE_Alpha_r12_t	 alpha;
	long	 p0_NominalPUCCH;
	LTE_DeltaFList_PUCCH_t	 deltaFList_PUCCH;
	long	 deltaPreambleMsg3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UplinkPowerControlCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UplinkPowerControlCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UplinkPowerControlCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UplinkPowerControlCommon_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UplinkPowerControlCommon_H_ */
#include <asn_internal.h>
