/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CQI_ReportConfig_v1250_H_
#define	_LTE_CQI_ReportConfig_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NULL.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12_PR {
	LTE_CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12_PR_NOTHING,	/* No components present */
	LTE_CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12_PR_release,
	LTE_CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12_PR_setup
} LTE_CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12_PR;
typedef enum LTE_CQI_ReportConfig_v1250__altCQI_Table_r12 {
	LTE_CQI_ReportConfig_v1250__altCQI_Table_r12_allSubframes	= 0,
	LTE_CQI_ReportConfig_v1250__altCQI_Table_r12_csi_SubframeSet1	= 1,
	LTE_CQI_ReportConfig_v1250__altCQI_Table_r12_csi_SubframeSet2	= 2,
	LTE_CQI_ReportConfig_v1250__altCQI_Table_r12_spare1	= 3
} e_LTE_CQI_ReportConfig_v1250__altCQI_Table_r12;

/* Forward declarations */
struct LTE_CQI_ReportBoth_v1250;
struct LTE_CQI_ReportAperiodic_v1250;

/* LTE_CQI-ReportConfig-v1250 */
typedef struct LTE_CQI_ReportConfig_v1250 {
	struct LTE_CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12 {
		LTE_CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12_PR present;
		union LTE_CQI_ReportConfig_v1250__LTE_csi_SubframePatternConfig_r12_u {
			NULL_t	 release;
			struct LTE_CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12__setup {
				BIT_STRING_t	 csi_MeasSubframeSets_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_SubframePatternConfig_r12;
	struct LTE_CQI_ReportBoth_v1250	*cqi_ReportBoth_v1250;	/* OPTIONAL */
	struct LTE_CQI_ReportAperiodic_v1250	*cqi_ReportAperiodic_v1250;	/* OPTIONAL */
	long	*altCQI_Table_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportConfig_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_altCQI_Table_r12_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportConfig_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportConfig_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportConfig_v1250_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CQI-ReportBoth-v1250.h"
#include "LTE_CQI-ReportAperiodic-v1250.h"

#endif	/* _LTE_CQI_ReportConfig_v1250_H_ */
#include <asn_internal.h>
