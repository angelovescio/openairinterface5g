/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MBMSInterestIndication_r11_IEs_H_
#define	_LTE_MBMSInterestIndication_r11_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MBMSInterestIndication_r11_IEs__mbms_Priority_r11 {
	LTE_MBMSInterestIndication_r11_IEs__mbms_Priority_r11_true	= 0
} e_LTE_MBMSInterestIndication_r11_IEs__mbms_Priority_r11;

/* Forward declarations */
struct LTE_CarrierFreqListMBMS_r11;
struct LTE_MBMSInterestIndication_v1310_IEs;

/* LTE_MBMSInterestIndication-r11-IEs */
typedef struct LTE_MBMSInterestIndication_r11_IEs {
	struct LTE_CarrierFreqListMBMS_r11	*mbms_FreqList_r11;	/* OPTIONAL */
	long	*mbms_Priority_r11;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_MBMSInterestIndication_v1310_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBMSInterestIndication_r11_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mbms_Priority_r11_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBMSInterestIndication_r11_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMSInterestIndication_r11_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBMSInterestIndication_r11_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CarrierFreqListMBMS-r11.h"
#include "LTE_MBMSInterestIndication-v1310-IEs.h"

#endif	/* _LTE_MBMSInterestIndication_r11_IEs_H_ */
#include <asn_internal.h>