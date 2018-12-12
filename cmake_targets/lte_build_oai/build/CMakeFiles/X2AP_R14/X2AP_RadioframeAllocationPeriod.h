/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_RadioframeAllocationPeriod_H_
#define	_X2AP_RadioframeAllocationPeriod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_RadioframeAllocationPeriod {
	X2AP_RadioframeAllocationPeriod_n1	= 0,
	X2AP_RadioframeAllocationPeriod_n2	= 1,
	X2AP_RadioframeAllocationPeriod_n4	= 2,
	X2AP_RadioframeAllocationPeriod_n8	= 3,
	X2AP_RadioframeAllocationPeriod_n16	= 4,
	X2AP_RadioframeAllocationPeriod_n32	= 5
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_RadioframeAllocationPeriod;

/* X2AP_RadioframeAllocationPeriod */
typedef long	 X2AP_RadioframeAllocationPeriod_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_RadioframeAllocationPeriod_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_RadioframeAllocationPeriod;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_RadioframeAllocationPeriod_specs_1;
asn_struct_free_f X2AP_RadioframeAllocationPeriod_free;
asn_struct_print_f X2AP_RadioframeAllocationPeriod_print;
asn_constr_check_f X2AP_RadioframeAllocationPeriod_constraint;
ber_type_decoder_f X2AP_RadioframeAllocationPeriod_decode_ber;
der_type_encoder_f X2AP_RadioframeAllocationPeriod_encode_der;
xer_type_decoder_f X2AP_RadioframeAllocationPeriod_decode_xer;
xer_type_encoder_f X2AP_RadioframeAllocationPeriod_encode_xer;
oer_type_decoder_f X2AP_RadioframeAllocationPeriod_decode_oer;
oer_type_encoder_f X2AP_RadioframeAllocationPeriod_encode_oer;
per_type_decoder_f X2AP_RadioframeAllocationPeriod_decode_uper;
per_type_encoder_f X2AP_RadioframeAllocationPeriod_encode_uper;
per_type_decoder_f X2AP_RadioframeAllocationPeriod_decode_aper;
per_type_encoder_f X2AP_RadioframeAllocationPeriod_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_RadioframeAllocationPeriod_H_ */
#include <asn_internal.h>
