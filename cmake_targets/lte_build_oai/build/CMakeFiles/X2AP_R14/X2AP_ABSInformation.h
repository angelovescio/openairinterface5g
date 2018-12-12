/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ABSInformation_H_
#define	_X2AP_ABSInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_ABSInformationFDD.h"
#include "X2AP_ABSInformationTDD.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_ABSInformation_PR {
	X2AP_ABSInformation_PR_NOTHING,	/* No components present */
	X2AP_ABSInformation_PR_fdd,
	X2AP_ABSInformation_PR_tdd,
	X2AP_ABSInformation_PR_abs_inactive
	/* Extensions may appear below */
	
} X2AP_ABSInformation_PR;

/* X2AP_ABSInformation */
typedef struct X2AP_ABSInformation {
	X2AP_ABSInformation_PR present;
	union X2AP_ABSInformation_u {
		X2AP_ABSInformationFDD_t	 fdd;
		X2AP_ABSInformationTDD_t	 tdd;
		NULL_t	 abs_inactive;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ABSInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ABSInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ABSInformation_H_ */
#include <asn_internal.h>
