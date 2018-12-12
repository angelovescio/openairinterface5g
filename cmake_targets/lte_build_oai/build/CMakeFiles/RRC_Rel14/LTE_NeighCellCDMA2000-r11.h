/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_NeighCellCDMA2000_r11_H_
#define	_LTE_NeighCellCDMA2000_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_BandclassCDMA2000.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_NeighCellsPerBandclassCDMA2000_r11;

/* LTE_NeighCellCDMA2000-r11 */
typedef struct LTE_NeighCellCDMA2000_r11 {
	LTE_BandclassCDMA2000_t	 bandClass;
	struct LTE_NeighCellCDMA2000_r11__neighFreqInfoList_r11 {
		A_SEQUENCE_OF(struct LTE_NeighCellsPerBandclassCDMA2000_r11) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} neighFreqInfoList_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NeighCellCDMA2000_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NeighCellCDMA2000_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NeighCellCDMA2000_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NeighCellCDMA2000_r11_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_NeighCellsPerBandclassCDMA2000-r11.h"

#endif	/* _LTE_NeighCellCDMA2000_r11_H_ */
#include <asn_internal.h>
