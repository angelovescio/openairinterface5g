/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PreRegistrationInfoHRPD_H_
#define	_LTE_PreRegistrationInfoHRPD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "LTE_PreRegistrationZoneIdHRPD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SecondaryPreRegistrationZoneIdListHRPD;

/* LTE_PreRegistrationInfoHRPD */
typedef struct LTE_PreRegistrationInfoHRPD {
	BOOLEAN_t	 preRegistrationAllowed;
	LTE_PreRegistrationZoneIdHRPD_t	*preRegistrationZoneId;	/* OPTIONAL */
	struct LTE_SecondaryPreRegistrationZoneIdListHRPD	*secondaryPreRegistrationZoneIdList;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PreRegistrationInfoHRPD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PreRegistrationInfoHRPD;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PreRegistrationInfoHRPD_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PreRegistrationInfoHRPD_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SecondaryPreRegistrationZoneIdListHRPD.h"

#endif	/* _LTE_PreRegistrationInfoHRPD_H_ */
#include <asn_internal.h>
