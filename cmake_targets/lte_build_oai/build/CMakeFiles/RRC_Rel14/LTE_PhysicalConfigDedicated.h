/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PhysicalConfigDedicated_H_
#define	_LTE_PhysicalConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_AntennaInfoDedicated.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>
#include "LTE_AntennaInfoDedicated-r10.h"
#include "LTE_AdditionalSpectrumEmission.h"
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PhysicalConfigDedicated__antennaInfo_PR {
	LTE_PhysicalConfigDedicated__antennaInfo_PR_NOTHING,	/* No components present */
	LTE_PhysicalConfigDedicated__antennaInfo_PR_explicitValue,
	LTE_PhysicalConfigDedicated__antennaInfo_PR_defaultValue
} LTE_PhysicalConfigDedicated__antennaInfo_PR;
typedef enum LTE_PhysicalConfigDedicated__ext2__antennaInfo_r10_PR {
	LTE_PhysicalConfigDedicated__ext2__antennaInfo_r10_PR_NOTHING,	/* No components present */
	LTE_PhysicalConfigDedicated__ext2__antennaInfo_r10_PR_explicitValue_r10,
	LTE_PhysicalConfigDedicated__ext2__antennaInfo_r10_PR_defaultValue
} LTE_PhysicalConfigDedicated__ext2__antennaInfo_r10_PR;
typedef enum LTE_PhysicalConfigDedicated__ext3__additionalSpectrumEmissionCA_r10_PR {
	LTE_PhysicalConfigDedicated__ext3__additionalSpectrumEmissionCA_r10_PR_NOTHING,	/* No components present */
	LTE_PhysicalConfigDedicated__ext3__additionalSpectrumEmissionCA_r10_PR_release,
	LTE_PhysicalConfigDedicated__ext3__additionalSpectrumEmissionCA_r10_PR_setup
} LTE_PhysicalConfigDedicated__ext3__additionalSpectrumEmissionCA_r10_PR;
typedef enum LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13_PR {
	LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13_PR_NOTHING,	/* No components present */
	LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13_PR_release,
	LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13_PR_setup
} LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13_PR;
typedef enum LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13__setup {
	LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13__setup_ce_ModeA	= 0,
	LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13__setup_ce_ModeB	= 1
} e_LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13__setup;
typedef enum LTE_PhysicalConfigDedicated__ext9__typeA_SRS_TPC_PDCCH_Group_r14_PR {
	LTE_PhysicalConfigDedicated__ext9__typeA_SRS_TPC_PDCCH_Group_r14_PR_NOTHING,	/* No components present */
	LTE_PhysicalConfigDedicated__ext9__typeA_SRS_TPC_PDCCH_Group_r14_PR_release,
	LTE_PhysicalConfigDedicated__ext9__typeA_SRS_TPC_PDCCH_Group_r14_PR_setup
} LTE_PhysicalConfigDedicated__ext9__typeA_SRS_TPC_PDCCH_Group_r14_PR;
typedef enum LTE_PhysicalConfigDedicated__ext9__must_Config_r14_PR {
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14_PR_NOTHING,	/* No components present */
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14_PR_release,
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14_PR_setup
} LTE_PhysicalConfigDedicated__ext9__must_Config_r14_PR;
typedef enum LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__k_max_r14 {
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__k_max_r14_l1	= 0,
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__k_max_r14_l3	= 1
} e_LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__k_max_r14;
typedef enum LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14 {
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14_dB_6	= 0,
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14_dB_4dot77	= 1,
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14_dB_3	= 2,
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14_dB_1dot77	= 3,
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14_dB0	= 4,
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14_dB1	= 5,
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14_dB2	= 6,
	LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14_dB3	= 7
} e_LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup__p_a_must_r14;
typedef enum LTE_PhysicalConfigDedicated__ext9__ce_pdsch_pusch_EnhancementConfig_r14 {
	LTE_PhysicalConfigDedicated__ext9__ce_pdsch_pusch_EnhancementConfig_r14_on	= 0
} e_LTE_PhysicalConfigDedicated__ext9__ce_pdsch_pusch_EnhancementConfig_r14;

/* Forward declarations */
struct LTE_PDSCH_ConfigDedicated;
struct LTE_PUCCH_ConfigDedicated;
struct LTE_PUSCH_ConfigDedicated;
struct LTE_UplinkPowerControlDedicated;
struct LTE_TPC_PDCCH_Config;
struct LTE_CQI_ReportConfig;
struct LTE_SoundingRS_UL_ConfigDedicated;
struct LTE_SchedulingRequestConfig;
struct LTE_CQI_ReportConfig_v920;
struct LTE_AntennaInfoDedicated_v920;
struct LTE_AntennaInfoUL_r10;
struct LTE_CQI_ReportConfig_r10;
struct LTE_CSI_RS_Config_r10;
struct LTE_PUCCH_ConfigDedicated_v1020;
struct LTE_PUSCH_ConfigDedicated_v1020;
struct LTE_SchedulingRequestConfig_v1020;
struct LTE_SoundingRS_UL_ConfigDedicated_v1020;
struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10;
struct LTE_UplinkPowerControlDedicated_v1020;
struct LTE_CSI_RS_ConfigNZPToReleaseList_r11;
struct LTE_CSI_RS_ConfigNZPToAddModList_r11;
struct LTE_CSI_RS_ConfigZPToReleaseList_r11;
struct LTE_CSI_RS_ConfigZPToAddModList_r11;
struct LTE_EPDCCH_Config_r11;
struct LTE_PDSCH_ConfigDedicated_v1130;
struct LTE_CQI_ReportConfig_v1130;
struct LTE_PUCCH_ConfigDedicated_v1130;
struct LTE_PUSCH_ConfigDedicated_v1130;
struct LTE_UplinkPowerControlDedicated_v1130;
struct LTE_AntennaInfoDedicated_v1250;
struct LTE_EIMTA_MainConfig_r12;
struct LTE_EIMTA_MainConfigServCell_r12;
struct LTE_PUCCH_ConfigDedicated_v1250;
struct LTE_CQI_ReportConfig_v1250;
struct LTE_UplinkPowerControlDedicated_v1250;
struct LTE_PUSCH_ConfigDedicated_v1250;
struct LTE_CSI_RS_Config_v1250;
struct LTE_PDSCH_ConfigDedicated_v1280;
struct LTE_PDSCH_ConfigDedicated_v1310;
struct LTE_PUCCH_ConfigDedicated_r13;
struct LTE_PUSCH_ConfigDedicated_r13;
struct LTE_PDCCH_CandidateReductions_r13;
struct LTE_CQI_ReportConfig_v1310;
struct LTE_SoundingRS_UL_ConfigDedicated_v1310;
struct LTE_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13;
struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1310;
struct LTE_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13;
struct LTE_CSI_RS_Config_v1310;
struct LTE_CSI_RS_ConfigNZPToAddModListExt_r13;
struct LTE_CSI_RS_ConfigNZPToReleaseListExt_r13;
struct LTE_CQI_ReportConfig_v1320;
struct LTE_PUSCH_EnhancementsConfig_r14;
struct LTE_AntennaInfoDedicated_v1430;
struct LTE_PUCCH_ConfigDedicated_v1430;
struct LTE_PDSCH_ConfigDedicated_v1430;
struct LTE_PUSCH_ConfigDedicated_v1430;
struct LTE_CSI_RS_Config_v1430;
struct LTE_CSI_RS_ConfigZP_ApList_r14;
struct LTE_CQI_ReportConfig_v1430;
struct LTE_SRS_TPC_PDCCH_Config_r14;

/* LTE_PhysicalConfigDedicated */
typedef struct LTE_PhysicalConfigDedicated {
	struct LTE_PDSCH_ConfigDedicated	*pdsch_ConfigDedicated;	/* OPTIONAL */
	struct LTE_PUCCH_ConfigDedicated	*pucch_ConfigDedicated;	/* OPTIONAL */
	struct LTE_PUSCH_ConfigDedicated	*pusch_ConfigDedicated;	/* OPTIONAL */
	struct LTE_UplinkPowerControlDedicated	*uplinkPowerControlDedicated;	/* OPTIONAL */
	struct LTE_TPC_PDCCH_Config	*tpc_PDCCH_ConfigPUCCH;	/* OPTIONAL */
	struct LTE_TPC_PDCCH_Config	*tpc_PDCCH_ConfigPUSCH;	/* OPTIONAL */
	struct LTE_CQI_ReportConfig	*cqi_ReportConfig;	/* OPTIONAL */
	struct LTE_SoundingRS_UL_ConfigDedicated	*soundingRS_UL_ConfigDedicated;	/* OPTIONAL */
	struct LTE_PhysicalConfigDedicated__antennaInfo {
		LTE_PhysicalConfigDedicated__antennaInfo_PR present;
		union LTE_PhysicalConfigDedicated__LTE_antennaInfo_u {
			LTE_AntennaInfoDedicated_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *antennaInfo;
	struct LTE_SchedulingRequestConfig	*schedulingRequestConfig;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_PhysicalConfigDedicated__ext1 {
		struct LTE_CQI_ReportConfig_v920	*cqi_ReportConfig_v920;	/* OPTIONAL */
		struct LTE_AntennaInfoDedicated_v920	*antennaInfo_v920;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_PhysicalConfigDedicated__ext2 {
		struct LTE_PhysicalConfigDedicated__ext2__antennaInfo_r10 {
			LTE_PhysicalConfigDedicated__ext2__antennaInfo_r10_PR present;
			union LTE_PhysicalConfigDedicated__LTE_ext2__LTE_antennaInfo_r10_u {
				LTE_AntennaInfoDedicated_r10_t	 explicitValue_r10;
				NULL_t	 defaultValue;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *antennaInfo_r10;
		struct LTE_AntennaInfoUL_r10	*antennaInfoUL_r10;	/* OPTIONAL */
		BOOLEAN_t	*cif_Presence_r10;	/* OPTIONAL */
		struct LTE_CQI_ReportConfig_r10	*cqi_ReportConfig_r10;	/* OPTIONAL */
		struct LTE_CSI_RS_Config_r10	*csi_RS_Config_r10;	/* OPTIONAL */
		struct LTE_PUCCH_ConfigDedicated_v1020	*pucch_ConfigDedicated_v1020;	/* OPTIONAL */
		struct LTE_PUSCH_ConfigDedicated_v1020	*pusch_ConfigDedicated_v1020;	/* OPTIONAL */
		struct LTE_SchedulingRequestConfig_v1020	*schedulingRequestConfig_v1020;	/* OPTIONAL */
		struct LTE_SoundingRS_UL_ConfigDedicated_v1020	*soundingRS_UL_ConfigDedicated_v1020;	/* OPTIONAL */
		struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10	*soundingRS_UL_ConfigDedicatedAperiodic_r10;	/* OPTIONAL */
		struct LTE_UplinkPowerControlDedicated_v1020	*uplinkPowerControlDedicated_v1020;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_PhysicalConfigDedicated__ext3 {
		struct LTE_PhysicalConfigDedicated__ext3__additionalSpectrumEmissionCA_r10 {
			LTE_PhysicalConfigDedicated__ext3__additionalSpectrumEmissionCA_r10_PR present;
			union LTE_PhysicalConfigDedicated__LTE_ext3__LTE_additionalSpectrumEmissionCA_r10_u {
				NULL_t	 release;
				struct LTE_PhysicalConfigDedicated__ext3__additionalSpectrumEmissionCA_r10__setup {
					LTE_AdditionalSpectrumEmission_t	 additionalSpectrumEmissionPCell_r10;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *additionalSpectrumEmissionCA_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_PhysicalConfigDedicated__ext4 {
		struct LTE_CSI_RS_ConfigNZPToReleaseList_r11	*csi_RS_ConfigNZPToReleaseList_r11;	/* OPTIONAL */
		struct LTE_CSI_RS_ConfigNZPToAddModList_r11	*csi_RS_ConfigNZPToAddModList_r11;	/* OPTIONAL */
		struct LTE_CSI_RS_ConfigZPToReleaseList_r11	*csi_RS_ConfigZPToReleaseList_r11;	/* OPTIONAL */
		struct LTE_CSI_RS_ConfigZPToAddModList_r11	*csi_RS_ConfigZPToAddModList_r11;	/* OPTIONAL */
		struct LTE_EPDCCH_Config_r11	*epdcch_Config_r11;	/* OPTIONAL */
		struct LTE_PDSCH_ConfigDedicated_v1130	*pdsch_ConfigDedicated_v1130;	/* OPTIONAL */
		struct LTE_CQI_ReportConfig_v1130	*cqi_ReportConfig_v1130;	/* OPTIONAL */
		struct LTE_PUCCH_ConfigDedicated_v1130	*pucch_ConfigDedicated_v1130;	/* OPTIONAL */
		struct LTE_PUSCH_ConfigDedicated_v1130	*pusch_ConfigDedicated_v1130;	/* OPTIONAL */
		struct LTE_UplinkPowerControlDedicated_v1130	*uplinkPowerControlDedicated_v1130;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_PhysicalConfigDedicated__ext5 {
		struct LTE_AntennaInfoDedicated_v1250	*antennaInfo_v1250;	/* OPTIONAL */
		struct LTE_EIMTA_MainConfig_r12	*eimta_MainConfig_r12;	/* OPTIONAL */
		struct LTE_EIMTA_MainConfigServCell_r12	*eimta_MainConfigPCell_r12;	/* OPTIONAL */
		struct LTE_PUCCH_ConfigDedicated_v1250	*pucch_ConfigDedicated_v1250;	/* OPTIONAL */
		struct LTE_CQI_ReportConfig_v1250	*cqi_ReportConfigPCell_v1250;	/* OPTIONAL */
		struct LTE_UplinkPowerControlDedicated_v1250	*uplinkPowerControlDedicated_v1250;	/* OPTIONAL */
		struct LTE_PUSCH_ConfigDedicated_v1250	*pusch_ConfigDedicated_v1250;	/* OPTIONAL */
		struct LTE_CSI_RS_Config_v1250	*csi_RS_Config_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_PhysicalConfigDedicated__ext6 {
		struct LTE_PDSCH_ConfigDedicated_v1280	*pdsch_ConfigDedicated_v1280;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	struct LTE_PhysicalConfigDedicated__ext7 {
		struct LTE_PDSCH_ConfigDedicated_v1310	*pdsch_ConfigDedicated_v1310;	/* OPTIONAL */
		struct LTE_PUCCH_ConfigDedicated_r13	*pucch_ConfigDedicated_r13;	/* OPTIONAL */
		struct LTE_PUSCH_ConfigDedicated_r13	*pusch_ConfigDedicated_r13;	/* OPTIONAL */
		struct LTE_PDCCH_CandidateReductions_r13	*pdcch_CandidateReductions_r13;	/* OPTIONAL */
		struct LTE_CQI_ReportConfig_v1310	*cqi_ReportConfig_v1310;	/* OPTIONAL */
		struct LTE_SoundingRS_UL_ConfigDedicated_v1310	*soundingRS_UL_ConfigDedicated_v1310;	/* OPTIONAL */
		struct LTE_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13	*soundingRS_UL_ConfigDedicatedUpPTsExt_r13;	/* OPTIONAL */
		struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1310	*soundingRS_UL_ConfigDedicatedAperiodic_v1310;	/* OPTIONAL */
		struct LTE_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13	*soundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13;	/* OPTIONAL */
		struct LTE_CSI_RS_Config_v1310	*csi_RS_Config_v1310;	/* OPTIONAL */
		struct LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13 {
			LTE_PhysicalConfigDedicated__ext7__ce_Mode_r13_PR present;
			union LTE_PhysicalConfigDedicated__LTE_ext7__LTE_ce_Mode_r13_u {
				NULL_t	 release;
				long	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ce_Mode_r13;
		struct LTE_CSI_RS_ConfigNZPToAddModListExt_r13	*csi_RS_ConfigNZPToAddModListExt_r13;	/* OPTIONAL */
		struct LTE_CSI_RS_ConfigNZPToReleaseListExt_r13	*csi_RS_ConfigNZPToReleaseListExt_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext7;
	struct LTE_PhysicalConfigDedicated__ext8 {
		struct LTE_CQI_ReportConfig_v1320	*cqi_ReportConfig_v1320;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext8;
	struct LTE_PhysicalConfigDedicated__ext9 {
		struct LTE_PhysicalConfigDedicated__ext9__typeA_SRS_TPC_PDCCH_Group_r14 {
			LTE_PhysicalConfigDedicated__ext9__typeA_SRS_TPC_PDCCH_Group_r14_PR present;
			union LTE_PhysicalConfigDedicated__LTE_ext9__LTE_typeA_SRS_TPC_PDCCH_Group_r14_u {
				NULL_t	 release;
				struct LTE_PhysicalConfigDedicated__ext9__typeA_SRS_TPC_PDCCH_Group_r14__setup {
					A_SEQUENCE_OF(struct LTE_SRS_TPC_PDCCH_Config_r14) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *typeA_SRS_TPC_PDCCH_Group_r14;
		struct LTE_PhysicalConfigDedicated__ext9__must_Config_r14 {
			LTE_PhysicalConfigDedicated__ext9__must_Config_r14_PR present;
			union LTE_PhysicalConfigDedicated__LTE_ext9__LTE_must_Config_r14_u {
				NULL_t	 release;
				struct LTE_PhysicalConfigDedicated__ext9__must_Config_r14__setup {
					long	 k_max_r14;
					long	*p_a_must_r14;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *must_Config_r14;
		struct LTE_PUSCH_EnhancementsConfig_r14	*pusch_EnhancementsConfig_r14;	/* OPTIONAL */
		long	*ce_pdsch_pusch_EnhancementConfig_r14;	/* OPTIONAL */
		struct LTE_AntennaInfoDedicated_v1430	*antennaInfo_v1430;	/* OPTIONAL */
		struct LTE_PUCCH_ConfigDedicated_v1430	*pucch_ConfigDedicated_v1430;	/* OPTIONAL */
		struct LTE_PDSCH_ConfigDedicated_v1430	*pdsch_ConfigDedicated_v1430;	/* OPTIONAL */
		struct LTE_PUSCH_ConfigDedicated_v1430	*pusch_ConfigDedicated_v1430;	/* OPTIONAL */
		struct LTE_PhysicalConfigDedicated__ext9__soundingRS_UL_PeriodicConfigDedicatedList_r14 {
			A_SEQUENCE_OF(struct LTE_SoundingRS_UL_ConfigDedicated) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *soundingRS_UL_PeriodicConfigDedicatedList_r14;
		struct LTE_PhysicalConfigDedicated__ext9__soundingRS_UL_PeriodicConfigDedicatedUpPTsExtList_r14 {
			A_SEQUENCE_OF(struct LTE_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *soundingRS_UL_PeriodicConfigDedicatedUpPTsExtList_r14;
		struct LTE_PhysicalConfigDedicated__ext9__soundingRS_UL_AperiodicConfigDedicatedList_r14 {
			A_SEQUENCE_OF(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *soundingRS_UL_AperiodicConfigDedicatedList_r14;
		struct LTE_PhysicalConfigDedicated__ext9__soundingRS_UL_ConfigDedicatedApUpPTsExtList_r14 {
			A_SEQUENCE_OF(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *soundingRS_UL_ConfigDedicatedApUpPTsExtList_r14;
		struct LTE_CSI_RS_Config_v1430	*csi_RS_Config_v1430;	/* OPTIONAL */
		struct LTE_CSI_RS_ConfigZP_ApList_r14	*csi_RS_ConfigZP_ApList_r14;	/* OPTIONAL */
		struct LTE_CQI_ReportConfig_v1430	*cqi_ReportConfig_v1430;	/* OPTIONAL */
		BOOLEAN_t	*semiOpenLoop_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PhysicalConfigDedicated_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_setup_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_k_max_r14_87;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_p_a_must_r14_90;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ce_pdsch_pusch_EnhancementConfig_r14_100;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PhysicalConfigDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PhysicalConfigDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PhysicalConfigDedicated_1[19];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PDSCH-ConfigDedicated.h"
#include "LTE_PUCCH-ConfigDedicated.h"
#include "LTE_PUSCH-ConfigDedicated.h"
#include "LTE_UplinkPowerControlDedicated.h"
#include "LTE_TPC-PDCCH-Config.h"
#include "LTE_CQI-ReportConfig.h"
#include "LTE_SoundingRS-UL-ConfigDedicated.h"
#include "LTE_SchedulingRequestConfig.h"
#include "LTE_CQI-ReportConfig-v920.h"
#include "LTE_AntennaInfoDedicated-v920.h"
#include "LTE_AntennaInfoUL-r10.h"
#include "LTE_CQI-ReportConfig-r10.h"
#include "LTE_CSI-RS-Config-r10.h"
#include "LTE_PUCCH-ConfigDedicated-v1020.h"
#include "LTE_PUSCH-ConfigDedicated-v1020.h"
#include "LTE_SchedulingRequestConfig-v1020.h"
#include "LTE_SoundingRS-UL-ConfigDedicated-v1020.h"
#include "LTE_SoundingRS-UL-ConfigDedicatedAperiodic-r10.h"
#include "LTE_UplinkPowerControlDedicated-v1020.h"
#include "LTE_CSI-RS-ConfigNZPToReleaseList-r11.h"
#include "LTE_CSI-RS-ConfigNZPToAddModList-r11.h"
#include "LTE_CSI-RS-ConfigZPToReleaseList-r11.h"
#include "LTE_CSI-RS-ConfigZPToAddModList-r11.h"
#include "LTE_EPDCCH-Config-r11.h"
#include "LTE_PDSCH-ConfigDedicated-v1130.h"
#include "LTE_CQI-ReportConfig-v1130.h"
#include "LTE_PUCCH-ConfigDedicated-v1130.h"
#include "LTE_PUSCH-ConfigDedicated-v1130.h"
#include "LTE_UplinkPowerControlDedicated-v1130.h"
#include "LTE_AntennaInfoDedicated-v1250.h"
#include "LTE_EIMTA-MainConfig-r12.h"
#include "LTE_EIMTA-MainConfigServCell-r12.h"
#include "LTE_PUCCH-ConfigDedicated-v1250.h"
#include "LTE_CQI-ReportConfig-v1250.h"
#include "LTE_UplinkPowerControlDedicated-v1250.h"
#include "LTE_PUSCH-ConfigDedicated-v1250.h"
#include "LTE_CSI-RS-Config-v1250.h"
#include "LTE_PDSCH-ConfigDedicated-v1280.h"
#include "LTE_PDSCH-ConfigDedicated-v1310.h"
#include "LTE_PUCCH-ConfigDedicated-r13.h"
#include "LTE_PUSCH-ConfigDedicated-r13.h"
#include "LTE_PDCCH-CandidateReductions-r13.h"
#include "LTE_CQI-ReportConfig-v1310.h"
#include "LTE_SoundingRS-UL-ConfigDedicated-v1310.h"
#include "LTE_SoundingRS-UL-ConfigDedicatedUpPTsExt-r13.h"
#include "LTE_SoundingRS-UL-ConfigDedicatedAperiodic-v1310.h"
#include "LTE_SoundingRS-UL-ConfigDedicatedAperiodicUpPTsExt-r13.h"
#include "LTE_CSI-RS-Config-v1310.h"
#include "LTE_CSI-RS-ConfigNZPToAddModListExt-r13.h"
#include "LTE_CSI-RS-ConfigNZPToReleaseListExt-r13.h"
#include "LTE_CQI-ReportConfig-v1320.h"
#include "LTE_PUSCH-EnhancementsConfig-r14.h"
#include "LTE_AntennaInfoDedicated-v1430.h"
#include "LTE_PUCCH-ConfigDedicated-v1430.h"
#include "LTE_PDSCH-ConfigDedicated-v1430.h"
#include "LTE_PUSCH-ConfigDedicated-v1430.h"
#include "LTE_CSI-RS-Config-v1430.h"
#include "LTE_CSI-RS-ConfigZP-ApList-r14.h"
#include "LTE_CQI-ReportConfig-v1430.h"
#include "LTE_SRS-TPC-PDCCH-Config-r14.h"

#endif	/* _LTE_PhysicalConfigDedicated_H_ */
#include <asn_internal.h>
