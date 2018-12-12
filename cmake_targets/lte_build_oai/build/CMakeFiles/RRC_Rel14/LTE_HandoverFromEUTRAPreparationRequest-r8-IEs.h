/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_H_
#define	_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CDMA2000-Type.h"
#include "LTE_RAND-CDMA2000.h"
#include "LTE_MobilityParametersCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_HandoverFromEUTRAPreparationRequest_v890_IEs;

/* LTE_HandoverFromEUTRAPreparationRequest-r8-IEs */
typedef struct LTE_HandoverFromEUTRAPreparationRequest_r8_IEs {
	LTE_CDMA2000_Type_t	 cdma2000_Type;
	LTE_RAND_CDMA2000_t	*rand;	/* OPTIONAL */
	LTE_MobilityParametersCDMA2000_t	*mobilityParameters;	/* OPTIONAL */
	struct LTE_HandoverFromEUTRAPreparationRequest_v890_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_HandoverFromEUTRAPreparationRequest-v890-IEs.h"

#endif	/* _LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_H_ */
#include <asn_internal.h>