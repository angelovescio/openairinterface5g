/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_IDC_SubframePattern_r11_H_
#define	_LTE_IDC_SubframePattern_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_IDC_SubframePattern_r11_PR {
	LTE_IDC_SubframePattern_r11_PR_NOTHING,	/* No components present */
	LTE_IDC_SubframePattern_r11_PR_subframePatternFDD_r11,
	LTE_IDC_SubframePattern_r11_PR_subframePatternTDD_r11
	/* Extensions may appear below */
	
} LTE_IDC_SubframePattern_r11_PR;
typedef enum LTE_IDC_SubframePattern_r11__subframePatternTDD_r11_PR {
	LTE_IDC_SubframePattern_r11__subframePatternTDD_r11_PR_NOTHING,	/* No components present */
	LTE_IDC_SubframePattern_r11__subframePatternTDD_r11_PR_subframeConfig0_r11,
	LTE_IDC_SubframePattern_r11__subframePatternTDD_r11_PR_subframeConfig1_5_r11,
	LTE_IDC_SubframePattern_r11__subframePatternTDD_r11_PR_subframeConfig6_r11
} LTE_IDC_SubframePattern_r11__subframePatternTDD_r11_PR;

/* LTE_IDC-SubframePattern-r11 */
typedef struct LTE_IDC_SubframePattern_r11 {
	LTE_IDC_SubframePattern_r11_PR present;
	union LTE_IDC_SubframePattern_r11_u {
		BIT_STRING_t	 subframePatternFDD_r11;
		struct LTE_IDC_SubframePattern_r11__subframePatternTDD_r11 {
			LTE_IDC_SubframePattern_r11__subframePatternTDD_r11_PR present;
			union LTE_IDC_SubframePattern_r11__LTE_subframePatternTDD_r11_u {
				BIT_STRING_t	 subframeConfig0_r11;
				BIT_STRING_t	 subframeConfig1_5_r11;
				BIT_STRING_t	 subframeConfig6_r11;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} subframePatternTDD_r11;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_IDC_SubframePattern_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_IDC_SubframePattern_r11;
extern asn_CHOICE_specifics_t asn_SPC_LTE_IDC_SubframePattern_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_IDC_SubframePattern_r11_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_IDC_SubframePattern_r11_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_IDC_SubframePattern_r11_H_ */
#include <asn_internal.h>
