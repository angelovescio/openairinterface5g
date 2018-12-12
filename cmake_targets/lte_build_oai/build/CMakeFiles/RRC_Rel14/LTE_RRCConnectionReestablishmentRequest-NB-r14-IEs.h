/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionReestablishmentRequest_NB_r14_IEs_H_
#define	_LTE_RRCConnectionReestablishmentRequest_NB_r14_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ReestabUE-Identity-CP-NB-r14.h"
#include "LTE_ReestablishmentCause-NB-r13.h"
#include "LTE_CQI-NPDCCH-Short-NB-r14.h"
#include <BOOLEAN.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_RRCConnectionReestablishmentRequest-NB-r14-IEs */
typedef struct LTE_RRCConnectionReestablishmentRequest_NB_r14_IEs {
	LTE_ReestabUE_Identity_CP_NB_r14_t	 ue_Identity_r14;
	LTE_ReestablishmentCause_NB_r13_t	 reestablishmentCause_r14;
	LTE_CQI_NPDCCH_Short_NB_r14_t	 cqi_NPDCCH_r14;
	BOOLEAN_t	 earlyContentionResolution_r14;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReestablishmentRequest_NB_r14_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReestablishmentRequest_NB_r14_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReestablishmentRequest_NB_r14_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReestablishmentRequest_NB_r14_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionReestablishmentRequest_NB_r14_IEs_H_ */
#include <asn_internal.h>
