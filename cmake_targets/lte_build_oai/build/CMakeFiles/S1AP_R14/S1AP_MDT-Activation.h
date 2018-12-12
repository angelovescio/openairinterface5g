/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_MDT_Activation_H_
#define	_S1AP_MDT_Activation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_MDT_Activation {
	S1AP_MDT_Activation_immediate_MDT_only	= 0,
	S1AP_MDT_Activation_immediate_MDT_and_Trace	= 1,
	S1AP_MDT_Activation_logged_MDT_only	= 2,
	/*
	 * Enumeration is extensible
	 */
	S1AP_MDT_Activation_logged_MBSFN_MDT	= 3
} e_S1AP_MDT_Activation;

/* S1AP_MDT-Activation */
typedef long	 S1AP_MDT_Activation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_MDT_Activation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_MDT_Activation;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_MDT_Activation_specs_1;
asn_struct_free_f S1AP_MDT_Activation_free;
asn_struct_print_f S1AP_MDT_Activation_print;
asn_constr_check_f S1AP_MDT_Activation_constraint;
ber_type_decoder_f S1AP_MDT_Activation_decode_ber;
der_type_encoder_f S1AP_MDT_Activation_encode_der;
xer_type_decoder_f S1AP_MDT_Activation_decode_xer;
xer_type_encoder_f S1AP_MDT_Activation_encode_xer;
oer_type_decoder_f S1AP_MDT_Activation_decode_oer;
oer_type_encoder_f S1AP_MDT_Activation_encode_oer;
per_type_decoder_f S1AP_MDT_Activation_decode_uper;
per_type_encoder_f S1AP_MDT_Activation_encode_uper;
per_type_decoder_f S1AP_MDT_Activation_decode_aper;
per_type_encoder_f S1AP_MDT_Activation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_MDT_Activation_H_ */
#include <asn_internal.h>
