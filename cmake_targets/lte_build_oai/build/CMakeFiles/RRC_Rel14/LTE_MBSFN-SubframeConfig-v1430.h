/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MBSFN_SubframeConfig_v1430_H_
#define	_LTE_MBSFN_SubframeConfig_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR {
	LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR_NOTHING,	/* No components present */
	LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR_oneFrame_v1430,
	LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR_fourFrames_v1430
} LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR;

/* LTE_MBSFN-SubframeConfig-v1430 */
typedef struct LTE_MBSFN_SubframeConfig_v1430 {
	struct LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430 {
		LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR present;
		union LTE_MBSFN_SubframeConfig_v1430__LTE_subframeAllocation_v1430_u {
			BIT_STRING_t	 oneFrame_v1430;
			BIT_STRING_t	 fourFrames_v1430;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subframeAllocation_v1430;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBSFN_SubframeConfig_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBSFN_SubframeConfig_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MBSFN_SubframeConfig_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBSFN_SubframeConfig_v1430_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MBSFN_SubframeConfig_v1430_H_ */
#include <asn_internal.h>
