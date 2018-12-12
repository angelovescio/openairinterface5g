/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SRS_AntennaPort_H_
#define	_LTE_SRS_AntennaPort_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SRS_AntennaPort {
	LTE_SRS_AntennaPort_an1	= 0,
	LTE_SRS_AntennaPort_an2	= 1,
	LTE_SRS_AntennaPort_an4	= 2,
	LTE_SRS_AntennaPort_spare1	= 3
} e_LTE_SRS_AntennaPort;

/* LTE_SRS-AntennaPort */
typedef long	 LTE_SRS_AntennaPort_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_SRS_AntennaPort_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_SRS_AntennaPort;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_SRS_AntennaPort_specs_1;
asn_struct_free_f LTE_SRS_AntennaPort_free;
asn_struct_print_f LTE_SRS_AntennaPort_print;
asn_constr_check_f LTE_SRS_AntennaPort_constraint;
ber_type_decoder_f LTE_SRS_AntennaPort_decode_ber;
der_type_encoder_f LTE_SRS_AntennaPort_encode_der;
xer_type_decoder_f LTE_SRS_AntennaPort_decode_xer;
xer_type_encoder_f LTE_SRS_AntennaPort_encode_xer;
oer_type_decoder_f LTE_SRS_AntennaPort_decode_oer;
oer_type_encoder_f LTE_SRS_AntennaPort_encode_oer;
per_type_decoder_f LTE_SRS_AntennaPort_decode_uper;
per_type_encoder_f LTE_SRS_AntennaPort_encode_uper;
per_type_decoder_f LTE_SRS_AntennaPort_decode_aper;
per_type_encoder_f LTE_SRS_AntennaPort_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SRS_AntennaPort_H_ */
#include <asn_internal.h>