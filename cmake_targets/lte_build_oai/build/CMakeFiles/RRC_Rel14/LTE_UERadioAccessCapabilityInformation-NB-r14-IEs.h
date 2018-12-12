/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UERadioAccessCapabilityInformation_NB_r14_IEs_H_
#define	_LTE_UERadioAccessCapabilityInformation_NB_r14_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_UERadioAccessCapabilityInformation-NB-r14-IEs */
typedef struct LTE_UERadioAccessCapabilityInformation_NB_r14_IEs {
	OCTET_STRING_t	*ue_RadioAccessCapabilityInfo_r14;	/* OPTIONAL */
	struct LTE_UERadioAccessCapabilityInformation_NB_r14_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UERadioAccessCapabilityInformation_NB_r14_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UERadioAccessCapabilityInformation_NB_r14_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UERadioAccessCapabilityInformation_NB_r14_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UERadioAccessCapabilityInformation_NB_r14_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UERadioAccessCapabilityInformation_NB_r14_IEs_H_ */
#include <asn_internal.h>
