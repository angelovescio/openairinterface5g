/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_CarrierFreqInfo_v1310_H_
#define	_LTE_SL_CarrierFreqInfo_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SL_ResourcesInterFreq_r13;
struct LTE_SL_DiscConfigOtherInterFreq_r13;

/* LTE_SL-CarrierFreqInfo-v1310 */
typedef struct LTE_SL_CarrierFreqInfo_v1310 {
	struct LTE_SL_ResourcesInterFreq_r13	*discResourcesNonPS_r13;	/* OPTIONAL */
	struct LTE_SL_ResourcesInterFreq_r13	*discResourcesPS_r13;	/* OPTIONAL */
	struct LTE_SL_DiscConfigOtherInterFreq_r13	*discConfigOther_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_CarrierFreqInfo_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_CarrierFreqInfo_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_CarrierFreqInfo_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_CarrierFreqInfo_v1310_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-ResourcesInterFreq-r13.h"
#include "LTE_SL-DiscConfigOtherInterFreq-r13.h"

#endif	/* _LTE_SL_CarrierFreqInfo_v1310_H_ */
#include <asn_internal.h>
