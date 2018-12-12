/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_InterFreqCarrierFreqInfo-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LTE_reducedMeasPerformance_r12_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_reducedMeasPerformance_r12_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_13_cmp_15(const void *sptr) {
	const LTE_Q_OffsetRange_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 15 */
	return (*st != 15);
}
static int asn_DFL_13_set_15(void **sptr) {
	LTE_Q_OffsetRange_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 15 */
	*st = 15;
	return 0;
}
static asn_TYPE_member_t asn_MBR_LTE_threshX_Q_r12_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12__threshX_Q_r12, threshX_HighQ_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThresholdQ_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-HighQ-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12__threshX_Q_r12, threshX_LowQ_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThresholdQ_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-LowQ-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_threshX_Q_r12_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_threshX_Q_r12_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshX-HighQ-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* threshX-LowQ-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_threshX_Q_r12_specs_17 = {
	sizeof(struct LTE_InterFreqCarrierFreqInfo_r12__threshX_Q_r12),
	offsetof(struct LTE_InterFreqCarrierFreqInfo_r12__threshX_Q_r12, _asn_ctx),
	asn_MAP_LTE_threshX_Q_r12_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_threshX_Q_r12_17 = {
	"threshX-Q-r12",
	"threshX-Q-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_threshX_Q_r12_tags_17,
	sizeof(asn_DEF_LTE_threshX_Q_r12_tags_17)
		/sizeof(asn_DEF_LTE_threshX_Q_r12_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_threshX_Q_r12_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_threshX_Q_r12_tags_17)
		/sizeof(asn_DEF_LTE_threshX_Q_r12_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_threshX_Q_r12_17,
	2,	/* Elements count */
	&asn_SPC_LTE_threshX_Q_r12_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_reducedMeasPerformance_r12_value2enum_22[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_reducedMeasPerformance_r12_enum2value_22[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_reducedMeasPerformance_r12_specs_22 = {
	asn_MAP_LTE_reducedMeasPerformance_r12_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_reducedMeasPerformance_r12_enum2value_22,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_reducedMeasPerformance_r12_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_reducedMeasPerformance_r12_22 = {
	"reducedMeasPerformance-r12",
	"reducedMeasPerformance-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_reducedMeasPerformance_r12_tags_22,
	sizeof(asn_DEF_LTE_reducedMeasPerformance_r12_tags_22)
		/sizeof(asn_DEF_LTE_reducedMeasPerformance_r12_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_reducedMeasPerformance_r12_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_reducedMeasPerformance_r12_tags_22)
		/sizeof(asn_DEF_LTE_reducedMeasPerformance_r12_tags_22[0]), /* 2 */
	{ &asn_OER_type_LTE_reducedMeasPerformance_r12_constr_22, &asn_PER_type_LTE_reducedMeasPerformance_r12_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_reducedMeasPerformance_r12_specs_22	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_InterFreqCarrierFreqInfo_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, dl_CarrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, q_RxLevMin_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, p_Max_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, t_ReselectionEUTRA_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionEUTRA-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, t_ReselectionEUTRA_SF_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SpeedStateScaleFactors,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionEUTRA-SF-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, threshX_High_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-High-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, threshX_Low_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-Low-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, allowedMeasBandwidth_r12),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AllowedMeasBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowedMeasBandwidth-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, presenceAntennaPort1_r12),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PresenceAntennaPort1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"presenceAntennaPort1-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, cellReselectionPriority_r12),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellReselectionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionPriority-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, neighCellConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NeighCellConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellConfig-r12"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, q_OffsetFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_OffsetRange,
		0,
		{ 0, 0, 0 },
		&asn_DFL_13_cmp_15,	/* Compare DEFAULT 15 */
		&asn_DFL_13_set_15,	/* Set DEFAULT 15 */
		"q-OffsetFreq-r12"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, interFreqNeighCellList_r12),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqNeighCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqNeighCellList-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, interFreqBlackCellList_r12),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqBlackCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqBlackCellList-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, q_QualMin_r12),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_QualMin_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMin-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, threshX_Q_r12),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		0,
		&asn_DEF_LTE_threshX_Q_r12_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-Q-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, q_QualMinWB_r12),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_QualMin_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMinWB-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, multiBandInfoList_r12),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MultiBandInfoList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiBandInfoList-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, reducedMeasPerformance_r12),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_reducedMeasPerformance_r12_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMeasPerformance-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, q_QualMinRSRQ_OnAllSymbols_r12),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_QualMin_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMinRSRQ-OnAllSymbols-r12"
		},
};
static const int asn_MAP_LTE_InterFreqCarrierFreqInfo_r12_oms_1[] = { 2, 4, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
static const ber_tlv_tag_t asn_DEF_LTE_InterFreqCarrierFreqInfo_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_InterFreqCarrierFreqInfo_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierFreq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-RxLevMin-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p-Max-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* t-ReselectionEUTRA-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* t-ReselectionEUTRA-SF-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* threshX-High-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* threshX-Low-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* allowedMeasBandwidth-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* presenceAntennaPort1-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellReselectionPriority-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* neighCellConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* q-OffsetFreq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* interFreqNeighCellList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* interFreqBlackCellList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* q-QualMin-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* threshX-Q-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* q-QualMinWB-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* multiBandInfoList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* reducedMeasPerformance-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 } /* q-QualMinRSRQ-OnAllSymbols-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_InterFreqCarrierFreqInfo_r12_specs_1 = {
	sizeof(struct LTE_InterFreqCarrierFreqInfo_r12),
	offsetof(struct LTE_InterFreqCarrierFreqInfo_r12, _asn_ctx),
	asn_MAP_LTE_InterFreqCarrierFreqInfo_r12_tag2el_1,
	20,	/* Count of tags in the map */
	asn_MAP_LTE_InterFreqCarrierFreqInfo_r12_oms_1,	/* Optional members */
	12, 0,	/* Root/Additions */
	20,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_InterFreqCarrierFreqInfo_r12 = {
	"InterFreqCarrierFreqInfo-r12",
	"InterFreqCarrierFreqInfo-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_InterFreqCarrierFreqInfo_r12_tags_1,
	sizeof(asn_DEF_LTE_InterFreqCarrierFreqInfo_r12_tags_1)
		/sizeof(asn_DEF_LTE_InterFreqCarrierFreqInfo_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_InterFreqCarrierFreqInfo_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_InterFreqCarrierFreqInfo_r12_tags_1)
		/sizeof(asn_DEF_LTE_InterFreqCarrierFreqInfo_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_InterFreqCarrierFreqInfo_r12_1,
	20,	/* Elements count */
	&asn_SPC_LTE_InterFreqCarrierFreqInfo_r12_specs_1	/* Additional specs */
};

