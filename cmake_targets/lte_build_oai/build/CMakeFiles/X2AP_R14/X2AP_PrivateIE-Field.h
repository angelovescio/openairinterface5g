/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-Containers"
 * 	found in "/home/vesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_PrivateIE_Field_H_
#define	_X2AP_PrivateIE_Field_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_PrivateIE-ID.h"
#include "X2AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_PrivateMessage_IEs__value_PR {
	X2AP_PrivateMessage_IEs__value_PR_NOTHING	/* No components present */
	
} X2AP_PrivateMessage_IEs__value_PR;

/* X2AP_PrivateIE-Field */
typedef struct X2AP_PrivateMessage_IEs {
	X2AP_PrivateIE_ID_t	 id;
	X2AP_Criticality_t	 criticality;
	struct X2AP_PrivateMessage_IEs__value {
		X2AP_PrivateMessage_IEs__value_PR present;
		union X2AP_PrivateMessage_IEs__X2AP_value_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_PrivateMessage_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_PrivateMessage_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_PrivateMessage_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_PrivateMessage_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_PrivateIE_Field_H_ */
#include <asn_internal.h>
