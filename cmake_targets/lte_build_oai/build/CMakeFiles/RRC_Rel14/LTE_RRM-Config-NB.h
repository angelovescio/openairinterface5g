/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRM_Config_NB_H_
#define	_LTE_RRM_Config_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRM_Config_NB__ue_InactiveTime {
	LTE_RRM_Config_NB__ue_InactiveTime_s1	= 0,
	LTE_RRM_Config_NB__ue_InactiveTime_s2	= 1,
	LTE_RRM_Config_NB__ue_InactiveTime_s3	= 2,
	LTE_RRM_Config_NB__ue_InactiveTime_s5	= 3,
	LTE_RRM_Config_NB__ue_InactiveTime_s7	= 4,
	LTE_RRM_Config_NB__ue_InactiveTime_s10	= 5,
	LTE_RRM_Config_NB__ue_InactiveTime_s15	= 6,
	LTE_RRM_Config_NB__ue_InactiveTime_s20	= 7,
	LTE_RRM_Config_NB__ue_InactiveTime_s25	= 8,
	LTE_RRM_Config_NB__ue_InactiveTime_s30	= 9,
	LTE_RRM_Config_NB__ue_InactiveTime_s40	= 10,
	LTE_RRM_Config_NB__ue_InactiveTime_s50	= 11,
	LTE_RRM_Config_NB__ue_InactiveTime_min1	= 12,
	LTE_RRM_Config_NB__ue_InactiveTime_min1s20	= 13,
	LTE_RRM_Config_NB__ue_InactiveTime_min1s40	= 14,
	LTE_RRM_Config_NB__ue_InactiveTime_min2	= 15,
	LTE_RRM_Config_NB__ue_InactiveTime_min2s30	= 16,
	LTE_RRM_Config_NB__ue_InactiveTime_min3	= 17,
	LTE_RRM_Config_NB__ue_InactiveTime_min3s30	= 18,
	LTE_RRM_Config_NB__ue_InactiveTime_min4	= 19,
	LTE_RRM_Config_NB__ue_InactiveTime_min5	= 20,
	LTE_RRM_Config_NB__ue_InactiveTime_min6	= 21,
	LTE_RRM_Config_NB__ue_InactiveTime_min7	= 22,
	LTE_RRM_Config_NB__ue_InactiveTime_min8	= 23,
	LTE_RRM_Config_NB__ue_InactiveTime_min9	= 24,
	LTE_RRM_Config_NB__ue_InactiveTime_min10	= 25,
	LTE_RRM_Config_NB__ue_InactiveTime_min12	= 26,
	LTE_RRM_Config_NB__ue_InactiveTime_min14	= 27,
	LTE_RRM_Config_NB__ue_InactiveTime_min17	= 28,
	LTE_RRM_Config_NB__ue_InactiveTime_min20	= 29,
	LTE_RRM_Config_NB__ue_InactiveTime_min24	= 30,
	LTE_RRM_Config_NB__ue_InactiveTime_min28	= 31,
	LTE_RRM_Config_NB__ue_InactiveTime_min33	= 32,
	LTE_RRM_Config_NB__ue_InactiveTime_min38	= 33,
	LTE_RRM_Config_NB__ue_InactiveTime_min44	= 34,
	LTE_RRM_Config_NB__ue_InactiveTime_min50	= 35,
	LTE_RRM_Config_NB__ue_InactiveTime_hr1	= 36,
	LTE_RRM_Config_NB__ue_InactiveTime_hr1min30	= 37,
	LTE_RRM_Config_NB__ue_InactiveTime_hr2	= 38,
	LTE_RRM_Config_NB__ue_InactiveTime_hr2min30	= 39,
	LTE_RRM_Config_NB__ue_InactiveTime_hr3	= 40,
	LTE_RRM_Config_NB__ue_InactiveTime_hr3min30	= 41,
	LTE_RRM_Config_NB__ue_InactiveTime_hr4	= 42,
	LTE_RRM_Config_NB__ue_InactiveTime_hr5	= 43,
	LTE_RRM_Config_NB__ue_InactiveTime_hr6	= 44,
	LTE_RRM_Config_NB__ue_InactiveTime_hr8	= 45,
	LTE_RRM_Config_NB__ue_InactiveTime_hr10	= 46,
	LTE_RRM_Config_NB__ue_InactiveTime_hr13	= 47,
	LTE_RRM_Config_NB__ue_InactiveTime_hr16	= 48,
	LTE_RRM_Config_NB__ue_InactiveTime_hr20	= 49,
	LTE_RRM_Config_NB__ue_InactiveTime_day1	= 50,
	LTE_RRM_Config_NB__ue_InactiveTime_day1hr12	= 51,
	LTE_RRM_Config_NB__ue_InactiveTime_day2	= 52,
	LTE_RRM_Config_NB__ue_InactiveTime_day2hr12	= 53,
	LTE_RRM_Config_NB__ue_InactiveTime_day3	= 54,
	LTE_RRM_Config_NB__ue_InactiveTime_day4	= 55,
	LTE_RRM_Config_NB__ue_InactiveTime_day5	= 56,
	LTE_RRM_Config_NB__ue_InactiveTime_day7	= 57,
	LTE_RRM_Config_NB__ue_InactiveTime_day10	= 58,
	LTE_RRM_Config_NB__ue_InactiveTime_day14	= 59,
	LTE_RRM_Config_NB__ue_InactiveTime_day19	= 60,
	LTE_RRM_Config_NB__ue_InactiveTime_day24	= 61,
	LTE_RRM_Config_NB__ue_InactiveTime_day30	= 62,
	LTE_RRM_Config_NB__ue_InactiveTime_dayMoreThan30	= 63
} e_LTE_RRM_Config_NB__ue_InactiveTime;

/* LTE_RRM-Config-NB */
typedef struct LTE_RRM_Config_NB {
	long	*ue_InactiveTime;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRM_Config_NB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_InactiveTime_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRM_Config_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRM_Config_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRM_Config_NB_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRM_Config_NB_H_ */
#include <asn_internal.h>
