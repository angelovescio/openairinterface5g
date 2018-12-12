/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RetuningTimeInfo_r14_H_
#define	_LTE_RetuningTimeInfo_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14 {
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n0	= 0,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n0dot5	= 1,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n1	= 2,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n1dot5	= 3,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n2	= 4,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n2dot5	= 5,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n3	= 6,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n3dot5	= 7,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n4	= 8,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n4dot5	= 9,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n5	= 10,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n5dot5	= 11,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n6	= 12,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n6dot5	= 13,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n7	= 14,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_spare1	= 15
} e_LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14;
typedef enum LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14 {
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n0	= 0,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n0dot5	= 1,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n1	= 2,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n1dot5	= 3,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n2	= 4,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n2dot5	= 5,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n3	= 6,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n3dot5	= 7,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n4	= 8,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n4dot5	= 9,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n5	= 10,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n5dot5	= 11,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n6	= 12,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n6dot5	= 13,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n7	= 14,
	LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_spare1	= 15
} e_LTE_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14;

/* LTE_RetuningTimeInfo-r14 */
typedef struct LTE_RetuningTimeInfo_r14 {
	struct LTE_RetuningTimeInfo_r14__retuningInfo {
		long	*rf_RetuningTimeDL_r14;	/* OPTIONAL */
		long	*rf_RetuningTimeUL_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} retuningInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RetuningTimeInfo_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rf_RetuningTimeDL_r14_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rf_RetuningTimeUL_r14_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RetuningTimeInfo_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RetuningTimeInfo_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RetuningTimeInfo_r14_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RetuningTimeInfo_r14_H_ */
#include <asn_internal.h>
