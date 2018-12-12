/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_DataInactivityTimer_r14_H_
#define	_LTE_DataInactivityTimer_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DataInactivityTimer_r14 {
	LTE_DataInactivityTimer_r14_s1	= 0,
	LTE_DataInactivityTimer_r14_s2	= 1,
	LTE_DataInactivityTimer_r14_s3	= 2,
	LTE_DataInactivityTimer_r14_s5	= 3,
	LTE_DataInactivityTimer_r14_s7	= 4,
	LTE_DataInactivityTimer_r14_s10	= 5,
	LTE_DataInactivityTimer_r14_s15	= 6,
	LTE_DataInactivityTimer_r14_s20	= 7,
	LTE_DataInactivityTimer_r14_s40	= 8,
	LTE_DataInactivityTimer_r14_s50	= 9,
	LTE_DataInactivityTimer_r14_s60	= 10,
	LTE_DataInactivityTimer_r14_s80	= 11,
	LTE_DataInactivityTimer_r14_s100	= 12,
	LTE_DataInactivityTimer_r14_s120	= 13,
	LTE_DataInactivityTimer_r14_s150	= 14,
	LTE_DataInactivityTimer_r14_s180	= 15
} e_LTE_DataInactivityTimer_r14;

/* LTE_DataInactivityTimer-r14 */
typedef long	 LTE_DataInactivityTimer_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_DataInactivityTimer_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_DataInactivityTimer_r14;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_DataInactivityTimer_r14_specs_1;
asn_struct_free_f LTE_DataInactivityTimer_r14_free;
asn_struct_print_f LTE_DataInactivityTimer_r14_print;
asn_constr_check_f LTE_DataInactivityTimer_r14_constraint;
ber_type_decoder_f LTE_DataInactivityTimer_r14_decode_ber;
der_type_encoder_f LTE_DataInactivityTimer_r14_encode_der;
xer_type_decoder_f LTE_DataInactivityTimer_r14_decode_xer;
xer_type_encoder_f LTE_DataInactivityTimer_r14_encode_xer;
oer_type_decoder_f LTE_DataInactivityTimer_r14_decode_oer;
oer_type_encoder_f LTE_DataInactivityTimer_r14_encode_oer;
per_type_decoder_f LTE_DataInactivityTimer_r14_decode_uper;
per_type_encoder_f LTE_DataInactivityTimer_r14_encode_uper;
per_type_decoder_f LTE_DataInactivityTimer_r14_decode_aper;
per_type_encoder_f LTE_DataInactivityTimer_r14_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DataInactivityTimer_r14_H_ */
#include <asn_internal.h>
