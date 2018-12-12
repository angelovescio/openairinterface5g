/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RLC_Config_NB_r13_H_
#define	_LTE_RLC_Config_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_UL-AM-RLC-NB-r13.h"
#include "LTE_DL-AM-RLC-NB-r13.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RLC_Config_NB_r13_PR {
	LTE_RLC_Config_NB_r13_PR_NOTHING,	/* No components present */
	LTE_RLC_Config_NB_r13_PR_am
	/* Extensions may appear below */
	
} LTE_RLC_Config_NB_r13_PR;

/* LTE_RLC-Config-NB-r13 */
typedef struct LTE_RLC_Config_NB_r13 {
	LTE_RLC_Config_NB_r13_PR present;
	union LTE_RLC_Config_NB_r13_u {
		struct LTE_RLC_Config_NB_r13__am {
			LTE_UL_AM_RLC_NB_r13_t	 ul_AM_RLC_r13;
			LTE_DL_AM_RLC_NB_r13_t	 dl_AM_RLC_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} am;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLC_Config_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLC_Config_NB_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_RLC_Config_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLC_Config_NB_r13_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_RLC_Config_NB_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RLC_Config_NB_r13_H_ */
#include <asn_internal.h>
