/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Descriptions"
 * 	found in "/home/vesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_X2AP_PDU_H_
#define	_X2AP_X2AP_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_InitiatingMessage.h"
#include "X2AP_SuccessfulOutcome.h"
#include "X2AP_UnsuccessfulOutcome.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_X2AP_PDU_PR {
	X2AP_X2AP_PDU_PR_NOTHING,	/* No components present */
	X2AP_X2AP_PDU_PR_initiatingMessage,
	X2AP_X2AP_PDU_PR_successfulOutcome,
	X2AP_X2AP_PDU_PR_unsuccessfulOutcome
	/* Extensions may appear below */
	
} X2AP_X2AP_PDU_PR;

/* X2AP_X2AP-PDU */
typedef struct X2AP_X2AP_PDU {
	X2AP_X2AP_PDU_PR present;
	union X2AP_X2AP_PDU_u {
		X2AP_InitiatingMessage_t	 initiatingMessage;
		X2AP_SuccessfulOutcome_t	 successfulOutcome;
		X2AP_UnsuccessfulOutcome_t	 unsuccessfulOutcome;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_X2AP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_X2AP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_X2AP_PDU_H_ */
#include <asn_internal.h>
