/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_ULInformationTransfer_r8_IEs_H_
#define	_LTE_ULInformationTransfer_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_DedicatedInfoNAS.h"
#include "LTE_DedicatedInfoCDMA2000.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ULInformationTransfer_r8_IEs__dedicatedInfoType_PR {
	LTE_ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_NOTHING,	/* No components present */
	LTE_ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_dedicatedInfoNAS,
	LTE_ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_dedicatedInfoCDMA2000_1XRTT,
	LTE_ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_dedicatedInfoCDMA2000_HRPD
} LTE_ULInformationTransfer_r8_IEs__dedicatedInfoType_PR;

/* Forward declarations */
struct LTE_ULInformationTransfer_v8a0_IEs;

/* LTE_ULInformationTransfer-r8-IEs */
typedef struct LTE_ULInformationTransfer_r8_IEs {
	struct LTE_ULInformationTransfer_r8_IEs__dedicatedInfoType {
		LTE_ULInformationTransfer_r8_IEs__dedicatedInfoType_PR present;
		union LTE_ULInformationTransfer_r8_IEs__LTE_dedicatedInfoType_u {
			LTE_DedicatedInfoNAS_t	 dedicatedInfoNAS;
			LTE_DedicatedInfoCDMA2000_t	 dedicatedInfoCDMA2000_1XRTT;
			LTE_DedicatedInfoCDMA2000_t	 dedicatedInfoCDMA2000_HRPD;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} dedicatedInfoType;
	struct LTE_ULInformationTransfer_v8a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ULInformationTransfer_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ULInformationTransfer_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ULInformationTransfer_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ULInformationTransfer_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_ULInformationTransfer-v8a0-IEs.h"

#endif	/* _LTE_ULInformationTransfer_r8_IEs_H_ */
#include <asn_internal.h>
