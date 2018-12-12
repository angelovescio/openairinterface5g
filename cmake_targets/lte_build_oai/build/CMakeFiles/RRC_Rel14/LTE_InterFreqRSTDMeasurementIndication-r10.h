/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_InterFreqRSTDMeasurementIndication_r10_H_
#define	_LTE_InterFreqRSTDMeasurementIndication_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_InterFreqRSTDMeasurementIndication-r10-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR {
	LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR_c1,
	LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR_criticalExtensionsFuture
} LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR;
typedef enum LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR {
	LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_interFreqRSTDMeasurementIndication_r10,
	LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_spare3,
	LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_spare2,
	LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_spare1
} LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR;

/* LTE_InterFreqRSTDMeasurementIndication-r10 */
typedef struct LTE_InterFreqRSTDMeasurementIndication_r10 {
	struct LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions {
		LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR present;
		union LTE_InterFreqRSTDMeasurementIndication_r10__LTE_criticalExtensions_u {
			struct LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1 {
				LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR present;
				union LTE_InterFreqRSTDMeasurementIndication_r10__LTE_criticalExtensions__LTE_c1_u {
					LTE_InterFreqRSTDMeasurementIndication_r10_IEs_t	 interFreqRSTDMeasurementIndication_r10;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_InterFreqRSTDMeasurementIndication_r10__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InterFreqRSTDMeasurementIndication_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InterFreqRSTDMeasurementIndication_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_InterFreqRSTDMeasurementIndication_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InterFreqRSTDMeasurementIndication_r10_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_InterFreqRSTDMeasurementIndication_r10_H_ */
#include <asn_internal.h>
