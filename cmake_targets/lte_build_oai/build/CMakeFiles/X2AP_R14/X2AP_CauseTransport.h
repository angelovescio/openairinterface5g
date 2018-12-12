/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_CauseTransport_H_
#define	_X2AP_CauseTransport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_CauseTransport {
	X2AP_CauseTransport_transport_resource_unavailable	= 0,
	X2AP_CauseTransport_unspecified	= 1
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_CauseTransport;

/* X2AP_CauseTransport */
typedef long	 X2AP_CauseTransport_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_CauseTransport_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_CauseTransport;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_CauseTransport_specs_1;
asn_struct_free_f X2AP_CauseTransport_free;
asn_struct_print_f X2AP_CauseTransport_print;
asn_constr_check_f X2AP_CauseTransport_constraint;
ber_type_decoder_f X2AP_CauseTransport_decode_ber;
der_type_encoder_f X2AP_CauseTransport_encode_der;
xer_type_decoder_f X2AP_CauseTransport_decode_xer;
xer_type_encoder_f X2AP_CauseTransport_encode_xer;
oer_type_decoder_f X2AP_CauseTransport_decode_oer;
oer_type_encoder_f X2AP_CauseTransport_encode_oer;
per_type_decoder_f X2AP_CauseTransport_decode_uper;
per_type_encoder_f X2AP_CauseTransport_encode_uper;
per_type_decoder_f X2AP_CauseTransport_decode_aper;
per_type_encoder_f X2AP_CauseTransport_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_CauseTransport_H_ */
#include <asn_internal.h>
