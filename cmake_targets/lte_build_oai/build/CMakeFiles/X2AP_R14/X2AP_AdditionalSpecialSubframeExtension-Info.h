/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_AdditionalSpecialSubframeExtension_Info_H_
#define	_X2AP_AdditionalSpecialSubframeExtension_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_AdditionalSpecialSubframePatternsExtension.h"
#include "X2AP_CyclicPrefixDL.h"
#include "X2AP_CyclicPrefixUL.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_AdditionalSpecialSubframeExtension-Info */
typedef struct X2AP_AdditionalSpecialSubframeExtension_Info {
	X2AP_AdditionalSpecialSubframePatternsExtension_t	 additionalspecialSubframePatternsExtension;
	X2AP_CyclicPrefixDL_t	 cyclicPrefixDL;
	X2AP_CyclicPrefixUL_t	 cyclicPrefixUL;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_AdditionalSpecialSubframeExtension_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_AdditionalSpecialSubframeExtension_Info;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_AdditionalSpecialSubframeExtension_Info_H_ */
#include <asn_internal.h>
