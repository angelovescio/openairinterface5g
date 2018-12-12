/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasResults_H_
#define	_LTE_MeasResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MeasId.h"
#include "LTE_RSRP-Range.h"
#include "LTE_RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "LTE_MeasResultListEUTRA.h"
#include "LTE_MeasResultListUTRA.h"
#include "LTE_MeasResultListGERAN.h"
#include "LTE_MeasResultsCDMA2000.h"
#include <constr_CHOICE.h>
#include "LTE_MeasId-v1250.h"
#include "LTE_RSRQ-Range-v1250.h"
#include "LTE_RS-SINR-Range-r13.h"
#include "LTE_RSRP-Range-v1360.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasResults__measResultNeighCells_PR {
	LTE_MeasResults__measResultNeighCells_PR_NOTHING,	/* No components present */
	LTE_MeasResults__measResultNeighCells_PR_measResultListEUTRA,
	LTE_MeasResults__measResultNeighCells_PR_measResultListUTRA,
	LTE_MeasResults__measResultNeighCells_PR_measResultListGERAN,
	LTE_MeasResults__measResultNeighCells_PR_measResultsCDMA2000
	/* Extensions may appear below */
	
} LTE_MeasResults__measResultNeighCells_PR;

/* Forward declarations */
struct LTE_MeasResultForECID_r9;
struct LTE_LocationInfo_r10;
struct LTE_MeasResultServFreqList_r10;
struct LTE_MeasResultCSI_RS_List_r12;
struct LTE_MeasResultForRSSI_r13;
struct LTE_MeasResultServFreqListExt_r13;
struct LTE_MeasResultSSTD_r13;
struct LTE_UL_PDCP_DelayResultList_r13;
struct LTE_MeasResultListWLAN_r13;
struct LTE_MeasResultListCBR_r14;
struct LTE_MeasResultListWLAN_r14;

/* LTE_MeasResults */
typedef struct LTE_MeasResults {
	LTE_MeasId_t	 measId;
	struct LTE_MeasResults__measResultPCell {
		LTE_RSRP_Range_t	 rsrpResult;
		LTE_RSRQ_Range_t	 rsrqResult;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultPCell;
	struct LTE_MeasResults__measResultNeighCells {
		LTE_MeasResults__measResultNeighCells_PR present;
		union LTE_MeasResults__LTE_measResultNeighCells_u {
			LTE_MeasResultListEUTRA_t	 measResultListEUTRA;
			LTE_MeasResultListUTRA_t	 measResultListUTRA;
			LTE_MeasResultListGERAN_t	 measResultListGERAN;
			LTE_MeasResultsCDMA2000_t	 measResultsCDMA2000;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_MeasResults__ext1 {
		struct LTE_MeasResultForECID_r9	*measResultForECID_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_MeasResults__ext2 {
		struct LTE_LocationInfo_r10	*locationInfo_r10;	/* OPTIONAL */
		struct LTE_MeasResultServFreqList_r10	*measResultServFreqList_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_MeasResults__ext3 {
		LTE_MeasId_v1250_t	*measId_v1250;	/* OPTIONAL */
		LTE_RSRQ_Range_v1250_t	*measResultPCell_v1250;	/* OPTIONAL */
		struct LTE_MeasResultCSI_RS_List_r12	*measResultCSI_RS_List_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_MeasResults__ext4 {
		struct LTE_MeasResultForRSSI_r13	*measResultForRSSI_r13;	/* OPTIONAL */
		struct LTE_MeasResultServFreqListExt_r13	*measResultServFreqListExt_r13;	/* OPTIONAL */
		struct LTE_MeasResultSSTD_r13	*measResultSSTD_r13;	/* OPTIONAL */
		struct LTE_MeasResults__ext4__measResultPCell_v1310 {
			LTE_RS_SINR_Range_r13_t	 rs_sinr_Result_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measResultPCell_v1310;
		struct LTE_UL_PDCP_DelayResultList_r13	*ul_PDCP_DelayResultList_r13;	/* OPTIONAL */
		struct LTE_MeasResultListWLAN_r13	*measResultListWLAN_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_MeasResults__ext5 {
		LTE_RSRP_Range_v1360_t	*measResultPCell_v1360;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_MeasResults__ext6 {
		struct LTE_MeasResultListCBR_r14	*measResultListCBR_r14;	/* OPTIONAL */
		struct LTE_MeasResultListWLAN_r14	*measResultListWLAN_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResults;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResults_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResults_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasResultForECID-r9.h"
#include "LTE_LocationInfo-r10.h"
#include "LTE_MeasResultServFreqList-r10.h"
#include "LTE_MeasResultCSI-RS-List-r12.h"
#include "LTE_MeasResultForRSSI-r13.h"
#include "LTE_MeasResultServFreqListExt-r13.h"
#include "LTE_MeasResultSSTD-r13.h"
#include "LTE_UL-PDCP-DelayResultList-r13.h"
#include "LTE_MeasResultListWLAN-r13.h"
#include "LTE_MeasResultListCBR-r14.h"
#include "LTE_MeasResultListWLAN-r14.h"

#endif	/* _LTE_MeasResults_H_ */
#include <asn_internal.h>
