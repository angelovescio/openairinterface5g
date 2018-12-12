/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SCG_ConfigInfo_v1330_IEs_H_
#define	_LTE_SCG_ConfigInfo_v1330_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MeasResultListRSSI_SCG_r13;
struct LTE_SCG_ConfigInfo_v1430_IEs;

/* LTE_SCG-ConfigInfo-v1330-IEs */
typedef struct LTE_SCG_ConfigInfo_v1330_IEs {
	struct LTE_MeasResultListRSSI_SCG_r13	*measResultListRSSI_SCG_r13;	/* OPTIONAL */
	struct LTE_SCG_ConfigInfo_v1430_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SCG_ConfigInfo_v1330_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SCG_ConfigInfo_v1330_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SCG_ConfigInfo_v1330_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SCG_ConfigInfo_v1330_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasResultListRSSI-SCG-r13.h"
#include "LTE_SCG-ConfigInfo-v1430-IEs.h"

#endif	/* _LTE_SCG_ConfigInfo_v1330_IEs_H_ */
#include <asn_internal.h>
