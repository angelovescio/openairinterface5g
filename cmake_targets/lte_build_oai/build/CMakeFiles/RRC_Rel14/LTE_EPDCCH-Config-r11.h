/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_EPDCCH_Config_r11_H_
#define	_LTE_EPDCCH_Config_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include "LTE_MeasSubframePattern-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_EPDCCH_Config_r11__config_r11_PR {
	LTE_EPDCCH_Config_r11__config_r11_PR_NOTHING,	/* No components present */
	LTE_EPDCCH_Config_r11__config_r11_PR_release,
	LTE_EPDCCH_Config_r11__config_r11_PR_setup
} LTE_EPDCCH_Config_r11__config_r11_PR;
typedef enum LTE_EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR {
	LTE_EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR_NOTHING,	/* No components present */
	LTE_EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR_release,
	LTE_EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR_setup
} LTE_EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR;

/* Forward declarations */
struct LTE_EPDCCH_SetConfigToReleaseList_r11;
struct LTE_EPDCCH_SetConfigToAddModList_r11;

/* LTE_EPDCCH-Config-r11 */
typedef struct LTE_EPDCCH_Config_r11 {
	struct LTE_EPDCCH_Config_r11__config_r11 {
		LTE_EPDCCH_Config_r11__config_r11_PR present;
		union LTE_EPDCCH_Config_r11__LTE_config_r11_u {
			NULL_t	 release;
			struct LTE_EPDCCH_Config_r11__config_r11__setup {
				struct LTE_EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11 {
					LTE_EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR present;
					union LTE_EPDCCH_Config_r11__LTE_config_r11__LTE_setup__LTE_subframePatternConfig_r11_u {
						NULL_t	 release;
						struct LTE_EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11__setup {
							LTE_MeasSubframePattern_r10_t	 subframePattern_r11;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} setup;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *subframePatternConfig_r11;
				long	*startSymbol_r11;	/* OPTIONAL */
				struct LTE_EPDCCH_SetConfigToReleaseList_r11	*setConfigToReleaseList_r11;	/* OPTIONAL */
				struct LTE_EPDCCH_SetConfigToAddModList_r11	*setConfigToAddModList_r11;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} config_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_EPDCCH_Config_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_EPDCCH_Config_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_EPDCCH_Config_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_EPDCCH_Config_r11_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_EPDCCH-SetConfigToReleaseList-r11.h"
#include "LTE_EPDCCH-SetConfigToAddModList-r11.h"

#endif	/* _LTE_EPDCCH_Config_r11_H_ */
#include <asn_internal.h>
