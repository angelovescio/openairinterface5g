/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PUCCH_ConfigDedicated_v1370_H_
#define	_LTE_PUCCH_ConfigDedicated_v1370_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_PUCCH-Format3-Conf-r13.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR {
	LTE_PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR_NOTHING,	/* No components present */
	LTE_PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR_release,
	LTE_PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR_setup
} LTE_PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR;

/* LTE_PUCCH-ConfigDedicated-v1370 */
typedef struct LTE_PUCCH_ConfigDedicated_v1370 {
	struct LTE_PUCCH_ConfigDedicated_v1370__pucch_Format_v1370 {
		LTE_PUCCH_ConfigDedicated_v1370__pucch_Format_v1370_PR present;
		union LTE_PUCCH_ConfigDedicated_v1370__LTE_pucch_Format_v1370_u {
			NULL_t	 release;
			LTE_PUCCH_Format3_Conf_r13_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pucch_Format_v1370;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUCCH_ConfigDedicated_v1370_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigDedicated_v1370;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigDedicated_v1370_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigDedicated_v1370_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUCCH_ConfigDedicated_v1370_H_ */
#include <asn_internal.h>
