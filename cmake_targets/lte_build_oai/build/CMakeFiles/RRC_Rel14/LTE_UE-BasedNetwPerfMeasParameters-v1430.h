/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UE_BasedNetwPerfMeasParameters_v1430_H_
#define	_LTE_UE_BasedNetwPerfMeasParameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UE_BasedNetwPerfMeasParameters_v1430__locationReport_r14 {
	LTE_UE_BasedNetwPerfMeasParameters_v1430__locationReport_r14_supported	= 0
} e_LTE_UE_BasedNetwPerfMeasParameters_v1430__locationReport_r14;

/* LTE_UE-BasedNetwPerfMeasParameters-v1430 */
typedef struct LTE_UE_BasedNetwPerfMeasParameters_v1430 {
	long	*locationReport_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_BasedNetwPerfMeasParameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_locationReport_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_BasedNetwPerfMeasParameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_BasedNetwPerfMeasParameters_v1430_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UE_BasedNetwPerfMeasParameters_v1430_H_ */
#include <asn_internal.h>
