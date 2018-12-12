/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionResume_NB_H_
#define	_LTE_RRCConnectionResume_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRC-TransactionIdentifier.h"
#include "LTE_RRCConnectionResume-NB-r13-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionResume_NB__criticalExtensions_PR {
	LTE_RRCConnectionResume_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_RRCConnectionResume_NB__criticalExtensions_PR_c1,
	LTE_RRCConnectionResume_NB__criticalExtensions_PR_criticalExtensionsFuture
} LTE_RRCConnectionResume_NB__criticalExtensions_PR;
typedef enum LTE_RRCConnectionResume_NB__criticalExtensions__c1_PR {
	LTE_RRCConnectionResume_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_RRCConnectionResume_NB__criticalExtensions__c1_PR_rrcConnectionResume_r13,
	LTE_RRCConnectionResume_NB__criticalExtensions__c1_PR_spare1
} LTE_RRCConnectionResume_NB__criticalExtensions__c1_PR;

/* LTE_RRCConnectionResume-NB */
typedef struct LTE_RRCConnectionResume_NB {
	LTE_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LTE_RRCConnectionResume_NB__criticalExtensions {
		LTE_RRCConnectionResume_NB__criticalExtensions_PR present;
		union LTE_RRCConnectionResume_NB__LTE_criticalExtensions_u {
			struct LTE_RRCConnectionResume_NB__criticalExtensions__c1 {
				LTE_RRCConnectionResume_NB__criticalExtensions__c1_PR present;
				union LTE_RRCConnectionResume_NB__LTE_criticalExtensions__LTE_c1_u {
					LTE_RRCConnectionResume_NB_r13_IEs_t	 rrcConnectionResume_r13;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_RRCConnectionResume_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionResume_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionResume_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionResume_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionResume_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionResume_NB_H_ */
#include <asn_internal.h>
