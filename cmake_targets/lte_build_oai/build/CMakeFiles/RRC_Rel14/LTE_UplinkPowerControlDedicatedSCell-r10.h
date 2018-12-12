/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UplinkPowerControlDedicatedSCell_r10_H_
#define	_LTE_UplinkPowerControlDedicatedSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include "LTE_FilterCoefficient.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UplinkPowerControlDedicatedSCell_r10__deltaMCS_Enabled_r10 {
	LTE_UplinkPowerControlDedicatedSCell_r10__deltaMCS_Enabled_r10_en0	= 0,
	LTE_UplinkPowerControlDedicatedSCell_r10__deltaMCS_Enabled_r10_en1	= 1
} e_LTE_UplinkPowerControlDedicatedSCell_r10__deltaMCS_Enabled_r10;
typedef enum LTE_UplinkPowerControlDedicatedSCell_r10__pathlossReferenceLinking_r10 {
	LTE_UplinkPowerControlDedicatedSCell_r10__pathlossReferenceLinking_r10_pCell	= 0,
	LTE_UplinkPowerControlDedicatedSCell_r10__pathlossReferenceLinking_r10_sCell	= 1
} e_LTE_UplinkPowerControlDedicatedSCell_r10__pathlossReferenceLinking_r10;

/* LTE_UplinkPowerControlDedicatedSCell-r10 */
typedef struct LTE_UplinkPowerControlDedicatedSCell_r10 {
	long	 p0_UE_PUSCH_r10;
	long	 deltaMCS_Enabled_r10;
	BOOLEAN_t	 accumulationEnabled_r10;
	long	 pSRS_Offset_r10;
	long	*pSRS_OffsetAp_r10;	/* OPTIONAL */
	LTE_FilterCoefficient_t	*filterCoefficient_r10;	/* DEFAULT 4 */
	long	 pathlossReferenceLinking_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UplinkPowerControlDedicatedSCell_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaMCS_Enabled_r10_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pathlossReferenceLinking_r10_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UplinkPowerControlDedicatedSCell_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UplinkPowerControlDedicatedSCell_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UplinkPowerControlDedicatedSCell_r10_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UplinkPowerControlDedicatedSCell_r10_H_ */
#include <asn_internal.h>
