/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CQI_ReportPeriodic_v1310_H_
#define	_LTE_CQI_ReportPeriodic_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CQI_ReportPeriodic_v1310__simultaneousAckNackAndCQI_Format4_Format5_r13 {
	LTE_CQI_ReportPeriodic_v1310__simultaneousAckNackAndCQI_Format4_Format5_r13_setup	= 0
} e_LTE_CQI_ReportPeriodic_v1310__simultaneousAckNackAndCQI_Format4_Format5_r13;

/* Forward declarations */
struct LTE_CRI_ReportConfig_r13;

/* LTE_CQI-ReportPeriodic-v1310 */
typedef struct LTE_CQI_ReportPeriodic_v1310 {
	struct LTE_CRI_ReportConfig_r13	*cri_ReportConfig_r13;	/* OPTIONAL */
	long	*simultaneousAckNackAndCQI_Format4_Format5_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportPeriodic_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_simultaneousAckNackAndCQI_Format4_Format5_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportPeriodic_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportPeriodic_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportPeriodic_v1310_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CRI-ReportConfig-r13.h"

#endif	/* _LTE_CQI_ReportPeriodic_v1310_H_ */
#include <asn_internal.h>
