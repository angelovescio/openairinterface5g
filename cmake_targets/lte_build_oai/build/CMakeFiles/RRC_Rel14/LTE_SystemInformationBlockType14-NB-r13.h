/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType14_NB_r13_H_
#define	_LTE_SystemInformationBlockType14_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "LTE_AB-Config-NB-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType14_NB_r13__ab_Param_r13_PR {
	LTE_SystemInformationBlockType14_NB_r13__ab_Param_r13_PR_NOTHING,	/* No components present */
	LTE_SystemInformationBlockType14_NB_r13__ab_Param_r13_PR_ab_Common_r13,
	LTE_SystemInformationBlockType14_NB_r13__ab_Param_r13_PR_ab_PerPLMN_List_r13
} LTE_SystemInformationBlockType14_NB_r13__ab_Param_r13_PR;

/* Forward declarations */
struct LTE_AB_ConfigPLMN_NB_r13;

/* LTE_SystemInformationBlockType14-NB-r13 */
typedef struct LTE_SystemInformationBlockType14_NB_r13 {
	struct LTE_SystemInformationBlockType14_NB_r13__ab_Param_r13 {
		LTE_SystemInformationBlockType14_NB_r13__ab_Param_r13_PR present;
		union LTE_SystemInformationBlockType14_NB_r13__LTE_ab_Param_r13_u {
			LTE_AB_Config_NB_r13_t	 ab_Common_r13;
			struct LTE_SystemInformationBlockType14_NB_r13__ab_Param_r13__ab_PerPLMN_List_r13 {
				A_SEQUENCE_OF(struct LTE_AB_ConfigPLMN_NB_r13) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ab_PerPLMN_List_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ab_Param_r13;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType14_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType14_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType14_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType14_NB_r13_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_AB-ConfigPLMN-NB-r13.h"

#endif	/* _LTE_SystemInformationBlockType14_NB_r13_H_ */
#include <asn_internal.h>
