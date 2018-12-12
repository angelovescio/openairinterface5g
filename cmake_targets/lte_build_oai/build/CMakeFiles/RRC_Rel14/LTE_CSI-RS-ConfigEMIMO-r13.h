/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CSI_RS_ConfigEMIMO_r13_H_
#define	_LTE_CSI_RS_ConfigEMIMO_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_CSI-RS-ConfigNonPrecoded-r13.h"
#include "LTE_CSI-RS-ConfigBeamformed-r13.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CSI_RS_ConfigEMIMO_r13_PR {
	LTE_CSI_RS_ConfigEMIMO_r13_PR_NOTHING,	/* No components present */
	LTE_CSI_RS_ConfigEMIMO_r13_PR_release,
	LTE_CSI_RS_ConfigEMIMO_r13_PR_setup
} LTE_CSI_RS_ConfigEMIMO_r13_PR;
typedef enum LTE_CSI_RS_ConfigEMIMO_r13__setup_PR {
	LTE_CSI_RS_ConfigEMIMO_r13__setup_PR_NOTHING,	/* No components present */
	LTE_CSI_RS_ConfigEMIMO_r13__setup_PR_nonPrecoded_r13,
	LTE_CSI_RS_ConfigEMIMO_r13__setup_PR_beamformed_r13
} LTE_CSI_RS_ConfigEMIMO_r13__setup_PR;

/* LTE_CSI-RS-ConfigEMIMO-r13 */
typedef struct LTE_CSI_RS_ConfigEMIMO_r13 {
	LTE_CSI_RS_ConfigEMIMO_r13_PR present;
	union LTE_CSI_RS_ConfigEMIMO_r13_u {
		NULL_t	 release;
		struct LTE_CSI_RS_ConfigEMIMO_r13__setup {
			LTE_CSI_RS_ConfigEMIMO_r13__setup_PR present;
			union LTE_CSI_RS_ConfigEMIMO_r13__LTE_setup_u {
				LTE_CSI_RS_ConfigNonPrecoded_r13_t	 nonPrecoded_r13;
				LTE_CSI_RS_ConfigBeamformed_r13_t	 beamformed_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_ConfigEMIMO_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigEMIMO_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_CSI_RS_ConfigEMIMO_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigEMIMO_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_CSI_RS_ConfigEMIMO_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CSI_RS_ConfigEMIMO_r13_H_ */
#include <asn_internal.h>
