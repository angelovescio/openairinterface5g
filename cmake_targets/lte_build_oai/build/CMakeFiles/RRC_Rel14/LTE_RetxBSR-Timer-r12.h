/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RetxBSR_Timer_r12_H_
#define	_LTE_RetxBSR_Timer_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RetxBSR_Timer_r12 {
	LTE_RetxBSR_Timer_r12_sf320	= 0,
	LTE_RetxBSR_Timer_r12_sf640	= 1,
	LTE_RetxBSR_Timer_r12_sf1280	= 2,
	LTE_RetxBSR_Timer_r12_sf2560	= 3,
	LTE_RetxBSR_Timer_r12_sf5120	= 4,
	LTE_RetxBSR_Timer_r12_sf10240	= 5,
	LTE_RetxBSR_Timer_r12_spare2	= 6,
	LTE_RetxBSR_Timer_r12_spare1	= 7
} e_LTE_RetxBSR_Timer_r12;

/* LTE_RetxBSR-Timer-r12 */
typedef long	 LTE_RetxBSR_Timer_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_RetxBSR_Timer_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_RetxBSR_Timer_r12;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_RetxBSR_Timer_r12_specs_1;
asn_struct_free_f LTE_RetxBSR_Timer_r12_free;
asn_struct_print_f LTE_RetxBSR_Timer_r12_print;
asn_constr_check_f LTE_RetxBSR_Timer_r12_constraint;
ber_type_decoder_f LTE_RetxBSR_Timer_r12_decode_ber;
der_type_encoder_f LTE_RetxBSR_Timer_r12_encode_der;
xer_type_decoder_f LTE_RetxBSR_Timer_r12_decode_xer;
xer_type_encoder_f LTE_RetxBSR_Timer_r12_encode_xer;
oer_type_decoder_f LTE_RetxBSR_Timer_r12_decode_oer;
oer_type_encoder_f LTE_RetxBSR_Timer_r12_encode_oer;
per_type_decoder_f LTE_RetxBSR_Timer_r12_decode_uper;
per_type_encoder_f LTE_RetxBSR_Timer_r12_encode_uper;
per_type_decoder_f LTE_RetxBSR_Timer_r12_decode_aper;
per_type_encoder_f LTE_RetxBSR_Timer_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RetxBSR_Timer_r12_H_ */
#include <asn_internal.h>
