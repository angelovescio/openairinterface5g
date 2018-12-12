/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_EUTRANResponse_H_
#define	_S1AP_EUTRANResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "S1AP_EUTRANcellLoadReportingResponse.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_EUTRANResponse */
typedef struct S1AP_EUTRANResponse {
	OCTET_STRING_t	 cell_ID;
	S1AP_EUTRANcellLoadReportingResponse_t	 eUTRANcellLoadReportingResponse;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_EUTRANResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_EUTRANResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_EUTRANResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_EUTRANResponse_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_EUTRANResponse_H_ */
#include <asn_internal.h>
