/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_NPRACH-Parameters-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LTE_nprach_Periodicity_r13_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_nprach_Periodicity_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_nprach_StartTime_r13_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_nprach_StartTime_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_nprach_SubcarrierOffset_r13_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_nprach_SubcarrierOffset_r13_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_nprach_NumSubcarriers_r13_constr_29 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_nprach_NumSubcarriers_r13_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_nprach_SubcarrierMSG3_RangeStart_r13_constr_34 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_nprach_SubcarrierMSG3_RangeStart_r13_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_maxNumPreambleAttemptCE_r13_constr_39 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_maxNumPreambleAttemptCE_r13_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_numRepetitionsPerPreambleAttempt_r13_constr_48 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_numRepetitionsPerPreambleAttempt_r13_constr_48 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_npdcch_NumRepetitions_RA_r13_constr_57 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_NumRepetitions_RA_r13_constr_57 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_npdcch_StartSF_CSS_RA_r13_constr_74 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_StartSF_CSS_RA_r13_constr_74 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_npdcch_Offset_RA_r13_constr_83 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_Offset_RA_r13_constr_83 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_Periodicity_r13_value2enum_2[] = {
	{ 0,	4,	"ms40" },
	{ 1,	4,	"ms80" },
	{ 2,	5,	"ms160" },
	{ 3,	5,	"ms240" },
	{ 4,	5,	"ms320" },
	{ 5,	5,	"ms640" },
	{ 6,	6,	"ms1280" },
	{ 7,	6,	"ms2560" }
};
static const unsigned int asn_MAP_LTE_nprach_Periodicity_r13_enum2value_2[] = {
	6,	/* ms1280(6) */
	2,	/* ms160(2) */
	3,	/* ms240(3) */
	7,	/* ms2560(7) */
	4,	/* ms320(4) */
	0,	/* ms40(0) */
	5,	/* ms640(5) */
	1	/* ms80(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_Periodicity_r13_specs_2 = {
	asn_MAP_LTE_nprach_Periodicity_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_Periodicity_r13_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_Periodicity_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_Periodicity_r13_2 = {
	"nprach-Periodicity-r13",
	"nprach-Periodicity-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_Periodicity_r13_tags_2,
	sizeof(asn_DEF_LTE_nprach_Periodicity_r13_tags_2)
		/sizeof(asn_DEF_LTE_nprach_Periodicity_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_Periodicity_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_Periodicity_r13_tags_2)
		/sizeof(asn_DEF_LTE_nprach_Periodicity_r13_tags_2[0]), /* 2 */
	{ &asn_OER_type_LTE_nprach_Periodicity_r13_constr_2, &asn_PER_type_LTE_nprach_Periodicity_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_Periodicity_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_StartTime_r13_value2enum_11[] = {
	{ 0,	3,	"ms8" },
	{ 1,	4,	"ms16" },
	{ 2,	4,	"ms32" },
	{ 3,	4,	"ms64" },
	{ 4,	5,	"ms128" },
	{ 5,	5,	"ms256" },
	{ 6,	5,	"ms512" },
	{ 7,	6,	"ms1024" }
};
static const unsigned int asn_MAP_LTE_nprach_StartTime_r13_enum2value_11[] = {
	7,	/* ms1024(7) */
	4,	/* ms128(4) */
	1,	/* ms16(1) */
	5,	/* ms256(5) */
	2,	/* ms32(2) */
	6,	/* ms512(6) */
	3,	/* ms64(3) */
	0	/* ms8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_StartTime_r13_specs_11 = {
	asn_MAP_LTE_nprach_StartTime_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_StartTime_r13_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_StartTime_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_StartTime_r13_11 = {
	"nprach-StartTime-r13",
	"nprach-StartTime-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_StartTime_r13_tags_11,
	sizeof(asn_DEF_LTE_nprach_StartTime_r13_tags_11)
		/sizeof(asn_DEF_LTE_nprach_StartTime_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_StartTime_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_StartTime_r13_tags_11)
		/sizeof(asn_DEF_LTE_nprach_StartTime_r13_tags_11[0]), /* 2 */
	{ &asn_OER_type_LTE_nprach_StartTime_r13_constr_11, &asn_PER_type_LTE_nprach_StartTime_r13_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_StartTime_r13_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_SubcarrierOffset_r13_value2enum_20[] = {
	{ 0,	2,	"n0" },
	{ 1,	3,	"n12" },
	{ 2,	3,	"n24" },
	{ 3,	3,	"n36" },
	{ 4,	2,	"n2" },
	{ 5,	3,	"n18" },
	{ 6,	3,	"n34" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_nprach_SubcarrierOffset_r13_enum2value_20[] = {
	0,	/* n0(0) */
	1,	/* n12(1) */
	5,	/* n18(5) */
	4,	/* n2(4) */
	2,	/* n24(2) */
	6,	/* n34(6) */
	3,	/* n36(3) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_SubcarrierOffset_r13_specs_20 = {
	asn_MAP_LTE_nprach_SubcarrierOffset_r13_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_SubcarrierOffset_r13_enum2value_20,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_SubcarrierOffset_r13_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_SubcarrierOffset_r13_20 = {
	"nprach-SubcarrierOffset-r13",
	"nprach-SubcarrierOffset-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_SubcarrierOffset_r13_tags_20,
	sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r13_tags_20)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r13_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_SubcarrierOffset_r13_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r13_tags_20)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r13_tags_20[0]), /* 2 */
	{ &asn_OER_type_LTE_nprach_SubcarrierOffset_r13_constr_20, &asn_PER_type_LTE_nprach_SubcarrierOffset_r13_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_SubcarrierOffset_r13_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_NumSubcarriers_r13_value2enum_29[] = {
	{ 0,	3,	"n12" },
	{ 1,	3,	"n24" },
	{ 2,	3,	"n36" },
	{ 3,	3,	"n48" }
};
static const unsigned int asn_MAP_LTE_nprach_NumSubcarriers_r13_enum2value_29[] = {
	0,	/* n12(0) */
	1,	/* n24(1) */
	2,	/* n36(2) */
	3	/* n48(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_NumSubcarriers_r13_specs_29 = {
	asn_MAP_LTE_nprach_NumSubcarriers_r13_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_NumSubcarriers_r13_enum2value_29,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_NumSubcarriers_r13_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_NumSubcarriers_r13_29 = {
	"nprach-NumSubcarriers-r13",
	"nprach-NumSubcarriers-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_NumSubcarriers_r13_tags_29,
	sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r13_tags_29)
		/sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r13_tags_29[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_NumSubcarriers_r13_tags_29,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r13_tags_29)
		/sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r13_tags_29[0]), /* 2 */
	{ &asn_OER_type_LTE_nprach_NumSubcarriers_r13_constr_29, &asn_PER_type_LTE_nprach_NumSubcarriers_r13_constr_29, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_NumSubcarriers_r13_specs_29	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r13_value2enum_34[] = {
	{ 0,	4,	"zero" },
	{ 1,	8,	"oneThird" },
	{ 2,	8,	"twoThird" },
	{ 3,	3,	"one" }
};
static const unsigned int asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r13_enum2value_34[] = {
	3,	/* one(3) */
	1,	/* oneThird(1) */
	2,	/* twoThird(2) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_SubcarrierMSG3_RangeStart_r13_specs_34 = {
	asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r13_value2enum_34,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r13_enum2value_34,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r13_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r13_34 = {
	"nprach-SubcarrierMSG3-RangeStart-r13",
	"nprach-SubcarrierMSG3-RangeStart-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r13_tags_34,
	sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r13_tags_34)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r13_tags_34[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r13_tags_34,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r13_tags_34)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r13_tags_34[0]), /* 2 */
	{ &asn_OER_type_LTE_nprach_SubcarrierMSG3_RangeStart_r13_constr_34, &asn_PER_type_LTE_nprach_SubcarrierMSG3_RangeStart_r13_constr_34, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_SubcarrierMSG3_RangeStart_r13_specs_34	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_maxNumPreambleAttemptCE_r13_value2enum_39[] = {
	{ 0,	2,	"n3" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n5" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n7" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_maxNumPreambleAttemptCE_r13_enum2value_39[] = {
	6,	/* n10(6) */
	0,	/* n3(0) */
	1,	/* n4(1) */
	2,	/* n5(2) */
	3,	/* n6(3) */
	4,	/* n7(4) */
	5,	/* n8(5) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_maxNumPreambleAttemptCE_r13_specs_39 = {
	asn_MAP_LTE_maxNumPreambleAttemptCE_r13_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_maxNumPreambleAttemptCE_r13_enum2value_39,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_maxNumPreambleAttemptCE_r13_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_maxNumPreambleAttemptCE_r13_39 = {
	"maxNumPreambleAttemptCE-r13",
	"maxNumPreambleAttemptCE-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_maxNumPreambleAttemptCE_r13_tags_39,
	sizeof(asn_DEF_LTE_maxNumPreambleAttemptCE_r13_tags_39)
		/sizeof(asn_DEF_LTE_maxNumPreambleAttemptCE_r13_tags_39[0]) - 1, /* 1 */
	asn_DEF_LTE_maxNumPreambleAttemptCE_r13_tags_39,	/* Same as above */
	sizeof(asn_DEF_LTE_maxNumPreambleAttemptCE_r13_tags_39)
		/sizeof(asn_DEF_LTE_maxNumPreambleAttemptCE_r13_tags_39[0]), /* 2 */
	{ &asn_OER_type_LTE_maxNumPreambleAttemptCE_r13_constr_39, &asn_PER_type_LTE_maxNumPreambleAttemptCE_r13_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_maxNumPreambleAttemptCE_r13_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_numRepetitionsPerPreambleAttempt_r13_value2enum_48[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" },
	{ 7,	4,	"n128" }
};
static const unsigned int asn_MAP_LTE_numRepetitionsPerPreambleAttempt_r13_enum2value_48[] = {
	0,	/* n1(0) */
	7,	/* n128(7) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_numRepetitionsPerPreambleAttempt_r13_specs_48 = {
	asn_MAP_LTE_numRepetitionsPerPreambleAttempt_r13_value2enum_48,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_numRepetitionsPerPreambleAttempt_r13_enum2value_48,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_numRepetitionsPerPreambleAttempt_r13_tags_48[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_numRepetitionsPerPreambleAttempt_r13_48 = {
	"numRepetitionsPerPreambleAttempt-r13",
	"numRepetitionsPerPreambleAttempt-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_numRepetitionsPerPreambleAttempt_r13_tags_48,
	sizeof(asn_DEF_LTE_numRepetitionsPerPreambleAttempt_r13_tags_48)
		/sizeof(asn_DEF_LTE_numRepetitionsPerPreambleAttempt_r13_tags_48[0]) - 1, /* 1 */
	asn_DEF_LTE_numRepetitionsPerPreambleAttempt_r13_tags_48,	/* Same as above */
	sizeof(asn_DEF_LTE_numRepetitionsPerPreambleAttempt_r13_tags_48)
		/sizeof(asn_DEF_LTE_numRepetitionsPerPreambleAttempt_r13_tags_48[0]), /* 2 */
	{ &asn_OER_type_LTE_numRepetitionsPerPreambleAttempt_r13_constr_48, &asn_PER_type_LTE_numRepetitionsPerPreambleAttempt_r13_constr_48, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_numRepetitionsPerPreambleAttempt_r13_specs_48	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_NumRepetitions_RA_r13_value2enum_57[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" },
	{ 9,	4,	"r512" },
	{ 10,	5,	"r1024" },
	{ 11,	5,	"r2048" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_npdcch_NumRepetitions_RA_r13_enum2value_57[] = {
	0,	/* r1(0) */
	10,	/* r1024(10) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	11,	/* r2048(11) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	9,	/* r512(9) */
	6,	/* r64(6) */
	3,	/* r8(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12	/* spare4(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_NumRepetitions_RA_r13_specs_57 = {
	asn_MAP_LTE_npdcch_NumRepetitions_RA_r13_value2enum_57,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_NumRepetitions_RA_r13_enum2value_57,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_NumRepetitions_RA_r13_tags_57[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_NumRepetitions_RA_r13_57 = {
	"npdcch-NumRepetitions-RA-r13",
	"npdcch-NumRepetitions-RA-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_NumRepetitions_RA_r13_tags_57,
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r13_tags_57)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r13_tags_57[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_NumRepetitions_RA_r13_tags_57,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r13_tags_57)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r13_tags_57[0]), /* 2 */
	{ &asn_OER_type_LTE_npdcch_NumRepetitions_RA_r13_constr_57, &asn_PER_type_LTE_npdcch_NumRepetitions_RA_r13_constr_57, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_NumRepetitions_RA_r13_specs_57	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_StartSF_CSS_RA_r13_value2enum_74[] = {
	{ 0,	6,	"v1dot5" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v8" },
	{ 4,	3,	"v16" },
	{ 5,	3,	"v32" },
	{ 6,	3,	"v48" },
	{ 7,	3,	"v64" }
};
static const unsigned int asn_MAP_LTE_npdcch_StartSF_CSS_RA_r13_enum2value_74[] = {
	4,	/* v16(4) */
	0,	/* v1dot5(0) */
	1,	/* v2(1) */
	5,	/* v32(5) */
	2,	/* v4(2) */
	6,	/* v48(6) */
	7,	/* v64(7) */
	3	/* v8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_StartSF_CSS_RA_r13_specs_74 = {
	asn_MAP_LTE_npdcch_StartSF_CSS_RA_r13_value2enum_74,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_StartSF_CSS_RA_r13_enum2value_74,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_StartSF_CSS_RA_r13_tags_74[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_StartSF_CSS_RA_r13_74 = {
	"npdcch-StartSF-CSS-RA-r13",
	"npdcch-StartSF-CSS-RA-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_StartSF_CSS_RA_r13_tags_74,
	sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r13_tags_74)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r13_tags_74[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_StartSF_CSS_RA_r13_tags_74,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r13_tags_74)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r13_tags_74[0]), /* 2 */
	{ &asn_OER_type_LTE_npdcch_StartSF_CSS_RA_r13_constr_74, &asn_PER_type_LTE_npdcch_StartSF_CSS_RA_r13_constr_74, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_StartSF_CSS_RA_r13_specs_74	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_Offset_RA_r13_value2enum_83[] = {
	{ 0,	4,	"zero" },
	{ 1,	9,	"oneEighth" },
	{ 2,	9,	"oneFourth" },
	{ 3,	11,	"threeEighth" }
};
static const unsigned int asn_MAP_LTE_npdcch_Offset_RA_r13_enum2value_83[] = {
	1,	/* oneEighth(1) */
	2,	/* oneFourth(2) */
	3,	/* threeEighth(3) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_Offset_RA_r13_specs_83 = {
	asn_MAP_LTE_npdcch_Offset_RA_r13_value2enum_83,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_Offset_RA_r13_enum2value_83,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_Offset_RA_r13_tags_83[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_Offset_RA_r13_83 = {
	"npdcch-Offset-RA-r13",
	"npdcch-Offset-RA-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_Offset_RA_r13_tags_83,
	sizeof(asn_DEF_LTE_npdcch_Offset_RA_r13_tags_83)
		/sizeof(asn_DEF_LTE_npdcch_Offset_RA_r13_tags_83[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_Offset_RA_r13_tags_83,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_Offset_RA_r13_tags_83)
		/sizeof(asn_DEF_LTE_npdcch_Offset_RA_r13_tags_83[0]), /* 2 */
	{ &asn_OER_type_LTE_npdcch_Offset_RA_r13_constr_83, &asn_PER_type_LTE_npdcch_Offset_RA_r13_constr_83, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_Offset_RA_r13_specs_83	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_NPRACH_Parameters_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, nprach_Periodicity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_Periodicity_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Periodicity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, nprach_StartTime_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_StartTime_r13_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-StartTime-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, nprach_SubcarrierOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_SubcarrierOffset_r13_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-SubcarrierOffset-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, nprach_NumSubcarriers_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_NumSubcarriers_r13_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-NumSubcarriers-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, nprach_SubcarrierMSG3_RangeStart_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r13_34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-SubcarrierMSG3-RangeStart-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, maxNumPreambleAttemptCE_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_maxNumPreambleAttemptCE_r13_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumPreambleAttemptCE-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, numRepetitionsPerPreambleAttempt_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_numRepetitionsPerPreambleAttempt_r13_48,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numRepetitionsPerPreambleAttempt-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, npdcch_NumRepetitions_RA_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_NumRepetitions_RA_r13_57,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-NumRepetitions-RA-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, npdcch_StartSF_CSS_RA_r13),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_StartSF_CSS_RA_r13_74,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-StartSF-CSS-RA-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_Parameters_NB_r13, npdcch_Offset_RA_r13),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_Offset_RA_r13_83,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-Offset-RA-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_NPRACH_Parameters_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NPRACH_Parameters_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-Periodicity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nprach-StartTime-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nprach-SubcarrierOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-NumSubcarriers-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nprach-SubcarrierMSG3-RangeStart-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* maxNumPreambleAttemptCE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* numRepetitionsPerPreambleAttempt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* npdcch-NumRepetitions-RA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* npdcch-StartSF-CSS-RA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* npdcch-Offset-RA-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NPRACH_Parameters_NB_r13_specs_1 = {
	sizeof(struct LTE_NPRACH_Parameters_NB_r13),
	offsetof(struct LTE_NPRACH_Parameters_NB_r13, _asn_ctx),
	asn_MAP_LTE_NPRACH_Parameters_NB_r13_tag2el_1,
	10,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NPRACH_Parameters_NB_r13 = {
	"NPRACH-Parameters-NB-r13",
	"NPRACH-Parameters-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NPRACH_Parameters_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_NPRACH_Parameters_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_Parameters_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_NPRACH_Parameters_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NPRACH_Parameters_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_Parameters_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_NPRACH_Parameters_NB_r13_1,
	10,	/* Elements count */
	&asn_SPC_LTE_NPRACH_Parameters_NB_r13_specs_1	/* Additional specs */
};

