/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SecurityModeFailure_H_
#define	_LTE_SecurityModeFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRC-TransactionIdentifier.h"
#include "LTE_SecurityModeFailure-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SecurityModeFailure__criticalExtensions_PR {
	LTE_SecurityModeFailure__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_SecurityModeFailure__criticalExtensions_PR_securityModeFailure_r8,
	LTE_SecurityModeFailure__criticalExtensions_PR_criticalExtensionsFuture
} LTE_SecurityModeFailure__criticalExtensions_PR;

/* LTE_SecurityModeFailure */
typedef struct LTE_SecurityModeFailure {
	LTE_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LTE_SecurityModeFailure__criticalExtensions {
		LTE_SecurityModeFailure__criticalExtensions_PR present;
		union LTE_SecurityModeFailure__LTE_criticalExtensions_u {
			LTE_SecurityModeFailure_r8_IEs_t	 securityModeFailure_r8;
			struct LTE_SecurityModeFailure__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SecurityModeFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SecurityModeFailure;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SecurityModeFailure_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SecurityModeFailure_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SecurityModeFailure_H_ */
#include <asn_internal.h>
