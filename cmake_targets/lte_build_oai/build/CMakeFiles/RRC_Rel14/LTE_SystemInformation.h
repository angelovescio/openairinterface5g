/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformation_H_
#define	_LTE_SystemInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SystemInformation-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformation__criticalExtensions_PR {
	LTE_SystemInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_SystemInformation__criticalExtensions_PR_systemInformation_r8,
	LTE_SystemInformation__criticalExtensions_PR_criticalExtensionsFuture
} LTE_SystemInformation__criticalExtensions_PR;

/* LTE_SystemInformation */
typedef struct LTE_SystemInformation {
	struct LTE_SystemInformation__criticalExtensions {
		LTE_SystemInformation__criticalExtensions_PR present;
		union LTE_SystemInformation__LTE_criticalExtensions_u {
			LTE_SystemInformation_r8_IEs_t	 systemInformation_r8;
			struct LTE_SystemInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformation_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SystemInformation_H_ */
#include <asn_internal.h>
