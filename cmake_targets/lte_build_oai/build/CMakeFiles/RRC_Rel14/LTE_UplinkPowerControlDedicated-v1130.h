/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UplinkPowerControlDedicated_v1130_H_
#define	_LTE_UplinkPowerControlDedicated_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_DeltaTxD_OffsetListPUCCH_v1130;

/* LTE_UplinkPowerControlDedicated-v1130 */
typedef struct LTE_UplinkPowerControlDedicated_v1130 {
	long	*pSRS_Offset_v1130;	/* OPTIONAL */
	long	*pSRS_OffsetAp_v1130;	/* OPTIONAL */
	struct LTE_DeltaTxD_OffsetListPUCCH_v1130	*deltaTxD_OffsetListPUCCH_v1130;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UplinkPowerControlDedicated_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UplinkPowerControlDedicated_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UplinkPowerControlDedicated_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UplinkPowerControlDedicated_v1130_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_DeltaTxD-OffsetListPUCCH-v1130.h"

#endif	/* _LTE_UplinkPowerControlDedicated_v1130_H_ */
#include <asn_internal.h>
