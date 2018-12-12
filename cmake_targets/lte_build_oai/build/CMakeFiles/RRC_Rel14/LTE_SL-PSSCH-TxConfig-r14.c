/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SL-PSSCH-TxConfig-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LTE_thresUE_Speed_r14_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_thresUE_Speed_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_thresUE_Speed_r14_value2enum_3[] = {
	{ 0,	6,	"kmph60" },
	{ 1,	6,	"kmph80" },
	{ 2,	7,	"kmph100" },
	{ 3,	7,	"kmph120" },
	{ 4,	7,	"kmph140" },
	{ 5,	7,	"kmph160" },
	{ 6,	7,	"kmph180" },
	{ 7,	7,	"kmph200" }
};
static const unsigned int asn_MAP_LTE_thresUE_Speed_r14_enum2value_3[] = {
	2,	/* kmph100(2) */
	3,	/* kmph120(3) */
	4,	/* kmph140(4) */
	5,	/* kmph160(5) */
	6,	/* kmph180(6) */
	7,	/* kmph200(7) */
	0,	/* kmph60(0) */
	1	/* kmph80(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_thresUE_Speed_r14_specs_3 = {
	asn_MAP_LTE_thresUE_Speed_r14_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_thresUE_Speed_r14_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_thresUE_Speed_r14_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_thresUE_Speed_r14_3 = {
	"thresUE-Speed-r14",
	"thresUE-Speed-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_thresUE_Speed_r14_tags_3,
	sizeof(asn_DEF_LTE_thresUE_Speed_r14_tags_3)
		/sizeof(asn_DEF_LTE_thresUE_Speed_r14_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_thresUE_Speed_r14_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_thresUE_Speed_r14_tags_3)
		/sizeof(asn_DEF_LTE_thresUE_Speed_r14_tags_3[0]), /* 2 */
	{ &asn_OER_type_LTE_thresUE_Speed_r14_constr_3, &asn_PER_type_LTE_thresUE_Speed_r14_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_thresUE_Speed_r14_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_PSSCH_TxConfig_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_PSSCH_TxConfig_r14, typeTxSync_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_TypeTxSync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"typeTxSync-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_PSSCH_TxConfig_r14, thresUE_Speed_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_thresUE_Speed_r14_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresUE-Speed-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_PSSCH_TxConfig_r14, parametersAboveThres_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PSSCH_TxParameters_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parametersAboveThres-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_PSSCH_TxConfig_r14, parametersBelowThres_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PSSCH_TxParameters_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parametersBelowThres-r14"
		},
};
static const int asn_MAP_LTE_SL_PSSCH_TxConfig_r14_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_PSSCH_TxConfig_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_PSSCH_TxConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* typeTxSync-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* thresUE-Speed-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* parametersAboveThres-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* parametersBelowThres-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_PSSCH_TxConfig_r14_specs_1 = {
	sizeof(struct LTE_SL_PSSCH_TxConfig_r14),
	offsetof(struct LTE_SL_PSSCH_TxConfig_r14, _asn_ctx),
	asn_MAP_LTE_SL_PSSCH_TxConfig_r14_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_SL_PSSCH_TxConfig_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_PSSCH_TxConfig_r14 = {
	"SL-PSSCH-TxConfig-r14",
	"SL-PSSCH-TxConfig-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_PSSCH_TxConfig_r14_tags_1,
	sizeof(asn_DEF_LTE_SL_PSSCH_TxConfig_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_PSSCH_TxConfig_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_PSSCH_TxConfig_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_PSSCH_TxConfig_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_PSSCH_TxConfig_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_PSSCH_TxConfig_r14_1,
	4,	/* Elements count */
	&asn_SPC_LTE_SL_PSSCH_TxConfig_r14_specs_1	/* Additional specs */
};

