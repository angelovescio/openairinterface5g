/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CellSelectionInfo_NB_v1430_H_
#define	_LTE_CellSelectionInfo_NB_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14 {
	LTE_CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB_6	= 0,
	LTE_CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB_3	= 1,
	LTE_CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB3	= 2,
	LTE_CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB6	= 3,
	LTE_CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB9	= 4,
	LTE_CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14_dB12	= 5
} e_LTE_CellSelectionInfo_NB_v1430__powerClass14dBm_Offset_r14;
typedef enum LTE_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14 {
	LTE_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB5	= 0,
	LTE_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB10	= 1,
	LTE_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB15	= 2,
	LTE_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB20	= 3,
	LTE_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB25	= 4,
	LTE_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB30	= 5,
	LTE_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14_dB35	= 6
} e_LTE_CellSelectionInfo_NB_v1430__ce_authorisationOffset_r14;

/* LTE_CellSelectionInfo-NB-v1430 */
typedef struct LTE_CellSelectionInfo_NB_v1430 {
	long	*powerClass14dBm_Offset_r14;	/* OPTIONAL */
	long	*ce_authorisationOffset_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellSelectionInfo_NB_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_powerClass14dBm_Offset_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ce_authorisationOffset_r14_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellSelectionInfo_NB_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CellSelectionInfo_NB_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellSelectionInfo_NB_v1430_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellSelectionInfo_NB_v1430_H_ */
#include <asn_internal.h>
