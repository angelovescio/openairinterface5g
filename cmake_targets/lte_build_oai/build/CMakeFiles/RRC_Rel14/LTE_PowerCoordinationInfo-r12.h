/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PowerCoordinationInfo_r12_H_
#define	_LTE_PowerCoordinationInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_PowerCoordinationInfo-r12 */
typedef struct LTE_PowerCoordinationInfo_r12 {
	long	 p_MeNB_r12;
	long	 p_SeNB_r12;
	long	 powerControlMode_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PowerCoordinationInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PowerCoordinationInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PowerCoordinationInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PowerCoordinationInfo_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PowerCoordinationInfo_r12_H_ */
#include <asn_internal.h>
