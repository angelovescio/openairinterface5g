/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasObjectToAddModExt_r13_H_
#define	_LTE_MeasObjectToAddModExt_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MeasObjectId-v1310.h"
#include "LTE_MeasObjectEUTRA.h"
#include "LTE_MeasObjectUTRA.h"
#include "LTE_MeasObjectGERAN.h"
#include "LTE_MeasObjectCDMA2000.h"
#include "LTE_MeasObjectWLAN-r13.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasObjectToAddModExt_r13__measObject_r13_PR {
	LTE_MeasObjectToAddModExt_r13__measObject_r13_PR_NOTHING,	/* No components present */
	LTE_MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectEUTRA_r13,
	LTE_MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectUTRA_r13,
	LTE_MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectGERAN_r13,
	LTE_MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectCDMA2000_r13,
	/* Extensions may appear below */
	LTE_MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectWLAN_v1320
} LTE_MeasObjectToAddModExt_r13__measObject_r13_PR;

/* LTE_MeasObjectToAddModExt-r13 */
typedef struct LTE_MeasObjectToAddModExt_r13 {
	LTE_MeasObjectId_v1310_t	 measObjectId_r13;
	struct LTE_MeasObjectToAddModExt_r13__measObject_r13 {
		LTE_MeasObjectToAddModExt_r13__measObject_r13_PR present;
		union LTE_MeasObjectToAddModExt_r13__LTE_measObject_r13_u {
			LTE_MeasObjectEUTRA_t	 measObjectEUTRA_r13;
			LTE_MeasObjectUTRA_t	 measObjectUTRA_r13;
			LTE_MeasObjectGERAN_t	 measObjectGERAN_r13;
			LTE_MeasObjectCDMA2000_t	 measObjectCDMA2000_r13;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			LTE_MeasObjectWLAN_r13_t	 measObjectWLAN_v1320;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measObject_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasObjectToAddModExt_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasObjectToAddModExt_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasObjectToAddModExt_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasObjectToAddModExt_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasObjectToAddModExt_r13_H_ */
#include <asn_internal.h>
