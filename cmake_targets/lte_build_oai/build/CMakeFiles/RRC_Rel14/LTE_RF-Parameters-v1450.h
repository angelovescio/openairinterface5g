/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RF_Parameters_v1450_H_
#define	_LTE_RF_Parameters_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SupportedBandCombination_v1450;
struct LTE_SupportedBandCombinationAdd_v1450;
struct LTE_SupportedBandCombinationReduced_v1450;

/* LTE_RF-Parameters-v1450 */
typedef struct LTE_RF_Parameters_v1450 {
	struct LTE_SupportedBandCombination_v1450	*supportedBandCombination_v1450;	/* OPTIONAL */
	struct LTE_SupportedBandCombinationAdd_v1450	*supportedBandCombinationAdd_v1450;	/* OPTIONAL */
	struct LTE_SupportedBandCombinationReduced_v1450	*supportedBandCombinationReduced_v1450;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RF_Parameters_v1450_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RF_Parameters_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RF_Parameters_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RF_Parameters_v1450_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SupportedBandCombination-v1450.h"
#include "LTE_SupportedBandCombinationAdd-v1450.h"
#include "LTE_SupportedBandCombinationReduced-v1450.h"

#endif	/* _LTE_RF_Parameters_v1450_H_ */
#include <asn_internal.h>
