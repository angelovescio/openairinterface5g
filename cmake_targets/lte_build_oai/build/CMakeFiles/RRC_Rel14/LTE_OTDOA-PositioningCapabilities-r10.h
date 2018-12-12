/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_OTDOA_PositioningCapabilities_r10_H_
#define	_LTE_OTDOA_PositioningCapabilities_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_OTDOA_PositioningCapabilities_r10__otdoa_UE_Assisted_r10 {
	LTE_OTDOA_PositioningCapabilities_r10__otdoa_UE_Assisted_r10_supported	= 0
} e_LTE_OTDOA_PositioningCapabilities_r10__otdoa_UE_Assisted_r10;
typedef enum LTE_OTDOA_PositioningCapabilities_r10__interFreqRSTD_Measurement_r10 {
	LTE_OTDOA_PositioningCapabilities_r10__interFreqRSTD_Measurement_r10_supported	= 0
} e_LTE_OTDOA_PositioningCapabilities_r10__interFreqRSTD_Measurement_r10;

/* LTE_OTDOA-PositioningCapabilities-r10 */
typedef struct LTE_OTDOA_PositioningCapabilities_r10 {
	long	 otdoa_UE_Assisted_r10;
	long	*interFreqRSTD_Measurement_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_OTDOA_PositioningCapabilities_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_otdoa_UE_Assisted_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_interFreqRSTD_Measurement_r10_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_OTDOA_PositioningCapabilities_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_OTDOA_PositioningCapabilities_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_OTDOA_PositioningCapabilities_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_OTDOA_PositioningCapabilities_r10_H_ */
#include <asn_internal.h>
