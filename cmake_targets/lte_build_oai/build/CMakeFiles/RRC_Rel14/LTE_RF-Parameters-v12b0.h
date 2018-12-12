/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RF_Parameters_v12b0_H_
#define	_LTE_RF_Parameters_v12b0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RF_Parameters_v12b0__maxLayersMIMO_Indication_r12 {
	LTE_RF_Parameters_v12b0__maxLayersMIMO_Indication_r12_supported	= 0
} e_LTE_RF_Parameters_v12b0__maxLayersMIMO_Indication_r12;

/* LTE_RF-Parameters-v12b0 */
typedef struct LTE_RF_Parameters_v12b0 {
	long	*maxLayersMIMO_Indication_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RF_Parameters_v12b0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_maxLayersMIMO_Indication_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RF_Parameters_v12b0;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RF_Parameters_v12b0_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RF_Parameters_v12b0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RF_Parameters_v12b0_H_ */
#include <asn_internal.h>
