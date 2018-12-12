/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CellSelectionInfoCE1_r13_H_
#define	_LTE_CellSelectionInfoCE1_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_Q-RxLevMin.h"
#include "LTE_Q-QualMin-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CellSelectionInfoCE1-r13 */
typedef struct LTE_CellSelectionInfoCE1_r13 {
	LTE_Q_RxLevMin_t	 q_RxLevMinCE1_r13;
	LTE_Q_QualMin_r9_t	*q_QualMinRSRQ_CE1_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellSelectionInfoCE1_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellSelectionInfoCE1_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CellSelectionInfoCE1_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellSelectionInfoCE1_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellSelectionInfoCE1_r13_H_ */
#include <asn_internal.h>
