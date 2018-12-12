/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_FreqHoppingParameters-r13.h"

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
static int
memb_LTE_dummy4_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_LTE_dummy_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_dummy_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_FDD_r13_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_FDD_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_TDD_r13_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_TDD_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_dummy2_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_dummy2_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_FDD_r13_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_FDD_r13_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_TDD_r13_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_TDD_r13_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_dummy3_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_dummy3_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_FDD_r13_constr_28 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_FDD_r13_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_TDD_r13_constr_33 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_TDD_r13_constr_33 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_ULHoppingConfigCommonModeA_r13_constr_27 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_ULHoppingConfigCommonModeA_r13_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_FDD_r13_constr_39 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_FDD_r13_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_TDD_r13_constr_44 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_TDD_r13_constr_44 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_interval_ULHoppingConfigCommonModeB_r13_constr_38 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_interval_ULHoppingConfigCommonModeB_r13_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_dummy4_constr_49 CC_NOTUSED = {
	{ 1, 1 }	/* (1..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_LTE_dummy4_constr_49 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_dummy_value2enum_2[] = {
	{ 0,	3,	"nb2" },
	{ 1,	3,	"nb4" }
};
static const unsigned int asn_MAP_LTE_dummy_enum2value_2[] = {
	0,	/* nb2(0) */
	1	/* nb4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_dummy_specs_2 = {
	asn_MAP_LTE_dummy_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_dummy_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_dummy_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dummy_2 = {
	"dummy",
	"dummy",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_dummy_tags_2,
	sizeof(asn_DEF_LTE_dummy_tags_2)
		/sizeof(asn_DEF_LTE_dummy_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_dummy_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_dummy_tags_2)
		/sizeof(asn_DEF_LTE_dummy_tags_2[0]), /* 2 */
	{ &asn_OER_type_LTE_dummy_constr_2, &asn_PER_type_LTE_dummy_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_dummy_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_FDD_r13_value2enum_6[] = {
	{ 0,	4,	"int1" },
	{ 1,	4,	"int2" },
	{ 2,	4,	"int4" },
	{ 3,	4,	"int8" }
};
static const unsigned int asn_MAP_LTE_interval_FDD_r13_enum2value_6[] = {
	0,	/* int1(0) */
	1,	/* int2(1) */
	2,	/* int4(2) */
	3	/* int8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_FDD_r13_specs_6 = {
	asn_MAP_LTE_interval_FDD_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_FDD_r13_enum2value_6,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_FDD_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_FDD_r13_6 = {
	"interval-FDD-r13",
	"interval-FDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_FDD_r13_tags_6,
	sizeof(asn_DEF_LTE_interval_FDD_r13_tags_6)
		/sizeof(asn_DEF_LTE_interval_FDD_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_FDD_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_FDD_r13_tags_6)
		/sizeof(asn_DEF_LTE_interval_FDD_r13_tags_6[0]), /* 2 */
	{ &asn_OER_type_LTE_interval_FDD_r13_constr_6, &asn_PER_type_LTE_interval_FDD_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_FDD_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_TDD_r13_value2enum_11[] = {
	{ 0,	4,	"int1" },
	{ 1,	4,	"int5" },
	{ 2,	5,	"int10" },
	{ 3,	5,	"int20" }
};
static const unsigned int asn_MAP_LTE_interval_TDD_r13_enum2value_11[] = {
	0,	/* int1(0) */
	2,	/* int10(2) */
	3,	/* int20(3) */
	1	/* int5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_TDD_r13_specs_11 = {
	asn_MAP_LTE_interval_TDD_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_TDD_r13_enum2value_11,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_TDD_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_TDD_r13_11 = {
	"interval-TDD-r13",
	"interval-TDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_TDD_r13_tags_11,
	sizeof(asn_DEF_LTE_interval_TDD_r13_tags_11)
		/sizeof(asn_DEF_LTE_interval_TDD_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_TDD_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_TDD_r13_tags_11)
		/sizeof(asn_DEF_LTE_interval_TDD_r13_tags_11[0]), /* 2 */
	{ &asn_OER_type_LTE_interval_TDD_r13_constr_11, &asn_PER_type_LTE_interval_TDD_r13_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_TDD_r13_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_dummy2_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqHoppingParameters_r13__dummy2, choice.interval_FDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_FDD_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-FDD-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqHoppingParameters_r13__dummy2, choice.interval_TDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_TDD_r13_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-TDD-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_dummy2_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interval-FDD-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interval-TDD-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_dummy2_specs_5 = {
	sizeof(struct LTE_FreqHoppingParameters_r13__dummy2),
	offsetof(struct LTE_FreqHoppingParameters_r13__dummy2, _asn_ctx),
	offsetof(struct LTE_FreqHoppingParameters_r13__dummy2, present),
	sizeof(((struct LTE_FreqHoppingParameters_r13__dummy2 *)0)->present),
	asn_MAP_LTE_dummy2_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dummy2_5 = {
	"dummy2",
	"dummy2",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LTE_dummy2_constr_5, &asn_PER_type_LTE_dummy2_constr_5, CHOICE_constraint },
	asn_MBR_LTE_dummy2_5,
	2,	/* Elements count */
	&asn_SPC_LTE_dummy2_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_FDD_r13_value2enum_17[] = {
	{ 0,	4,	"int2" },
	{ 1,	4,	"int4" },
	{ 2,	4,	"int8" },
	{ 3,	5,	"int16" }
};
static const unsigned int asn_MAP_LTE_interval_FDD_r13_enum2value_17[] = {
	3,	/* int16(3) */
	0,	/* int2(0) */
	1,	/* int4(1) */
	2	/* int8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_FDD_r13_specs_17 = {
	asn_MAP_LTE_interval_FDD_r13_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_FDD_r13_enum2value_17,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_FDD_r13_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_FDD_r13_17 = {
	"interval-FDD-r13",
	"interval-FDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_FDD_r13_tags_17,
	sizeof(asn_DEF_LTE_interval_FDD_r13_tags_17)
		/sizeof(asn_DEF_LTE_interval_FDD_r13_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_FDD_r13_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_FDD_r13_tags_17)
		/sizeof(asn_DEF_LTE_interval_FDD_r13_tags_17[0]), /* 2 */
	{ &asn_OER_type_LTE_interval_FDD_r13_constr_17, &asn_PER_type_LTE_interval_FDD_r13_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_FDD_r13_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_TDD_r13_value2enum_22[] = {
	{ 0,	4,	"int5" },
	{ 1,	5,	"int10" },
	{ 2,	5,	"int20" },
	{ 3,	5,	"int40" }
};
static const unsigned int asn_MAP_LTE_interval_TDD_r13_enum2value_22[] = {
	1,	/* int10(1) */
	2,	/* int20(2) */
	3,	/* int40(3) */
	0	/* int5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_TDD_r13_specs_22 = {
	asn_MAP_LTE_interval_TDD_r13_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_TDD_r13_enum2value_22,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_TDD_r13_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_TDD_r13_22 = {
	"interval-TDD-r13",
	"interval-TDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_TDD_r13_tags_22,
	sizeof(asn_DEF_LTE_interval_TDD_r13_tags_22)
		/sizeof(asn_DEF_LTE_interval_TDD_r13_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_TDD_r13_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_TDD_r13_tags_22)
		/sizeof(asn_DEF_LTE_interval_TDD_r13_tags_22[0]), /* 2 */
	{ &asn_OER_type_LTE_interval_TDD_r13_constr_22, &asn_PER_type_LTE_interval_TDD_r13_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_TDD_r13_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_dummy3_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqHoppingParameters_r13__dummy3, choice.interval_FDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_FDD_r13_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-FDD-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqHoppingParameters_r13__dummy3, choice.interval_TDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_TDD_r13_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-TDD-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_dummy3_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interval-FDD-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interval-TDD-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_dummy3_specs_16 = {
	sizeof(struct LTE_FreqHoppingParameters_r13__dummy3),
	offsetof(struct LTE_FreqHoppingParameters_r13__dummy3, _asn_ctx),
	offsetof(struct LTE_FreqHoppingParameters_r13__dummy3, present),
	sizeof(((struct LTE_FreqHoppingParameters_r13__dummy3 *)0)->present),
	asn_MAP_LTE_dummy3_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dummy3_16 = {
	"dummy3",
	"dummy3",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LTE_dummy3_constr_16, &asn_PER_type_LTE_dummy3_constr_16, CHOICE_constraint },
	asn_MBR_LTE_dummy3_16,
	2,	/* Elements count */
	&asn_SPC_LTE_dummy3_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_FDD_r13_value2enum_28[] = {
	{ 0,	4,	"int1" },
	{ 1,	4,	"int2" },
	{ 2,	4,	"int4" },
	{ 3,	4,	"int8" }
};
static const unsigned int asn_MAP_LTE_interval_FDD_r13_enum2value_28[] = {
	0,	/* int1(0) */
	1,	/* int2(1) */
	2,	/* int4(2) */
	3	/* int8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_FDD_r13_specs_28 = {
	asn_MAP_LTE_interval_FDD_r13_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_FDD_r13_enum2value_28,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_FDD_r13_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_FDD_r13_28 = {
	"interval-FDD-r13",
	"interval-FDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_FDD_r13_tags_28,
	sizeof(asn_DEF_LTE_interval_FDD_r13_tags_28)
		/sizeof(asn_DEF_LTE_interval_FDD_r13_tags_28[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_FDD_r13_tags_28,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_FDD_r13_tags_28)
		/sizeof(asn_DEF_LTE_interval_FDD_r13_tags_28[0]), /* 2 */
	{ &asn_OER_type_LTE_interval_FDD_r13_constr_28, &asn_PER_type_LTE_interval_FDD_r13_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_FDD_r13_specs_28	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_TDD_r13_value2enum_33[] = {
	{ 0,	4,	"int1" },
	{ 1,	4,	"int5" },
	{ 2,	5,	"int10" },
	{ 3,	5,	"int20" }
};
static const unsigned int asn_MAP_LTE_interval_TDD_r13_enum2value_33[] = {
	0,	/* int1(0) */
	2,	/* int10(2) */
	3,	/* int20(3) */
	1	/* int5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_TDD_r13_specs_33 = {
	asn_MAP_LTE_interval_TDD_r13_value2enum_33,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_TDD_r13_enum2value_33,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_TDD_r13_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_TDD_r13_33 = {
	"interval-TDD-r13",
	"interval-TDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_TDD_r13_tags_33,
	sizeof(asn_DEF_LTE_interval_TDD_r13_tags_33)
		/sizeof(asn_DEF_LTE_interval_TDD_r13_tags_33[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_TDD_r13_tags_33,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_TDD_r13_tags_33)
		/sizeof(asn_DEF_LTE_interval_TDD_r13_tags_33[0]), /* 2 */
	{ &asn_OER_type_LTE_interval_TDD_r13_constr_33, &asn_PER_type_LTE_interval_TDD_r13_constr_33, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_TDD_r13_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_interval_ULHoppingConfigCommonModeA_r13_27[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13, choice.interval_FDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_FDD_r13_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-FDD-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13, choice.interval_TDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_TDD_r13_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-TDD-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_interval_ULHoppingConfigCommonModeA_r13_tag2el_27[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interval-FDD-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interval-TDD-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_interval_ULHoppingConfigCommonModeA_r13_specs_27 = {
	sizeof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13),
	offsetof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13, _asn_ctx),
	offsetof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13, present),
	sizeof(((struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeA_r13 *)0)->present),
	asn_MAP_LTE_interval_ULHoppingConfigCommonModeA_r13_tag2el_27,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_ULHoppingConfigCommonModeA_r13_27 = {
	"interval-ULHoppingConfigCommonModeA-r13",
	"interval-ULHoppingConfigCommonModeA-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LTE_interval_ULHoppingConfigCommonModeA_r13_constr_27, &asn_PER_type_LTE_interval_ULHoppingConfigCommonModeA_r13_constr_27, CHOICE_constraint },
	asn_MBR_LTE_interval_ULHoppingConfigCommonModeA_r13_27,
	2,	/* Elements count */
	&asn_SPC_LTE_interval_ULHoppingConfigCommonModeA_r13_specs_27	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_FDD_r13_value2enum_39[] = {
	{ 0,	4,	"int2" },
	{ 1,	4,	"int4" },
	{ 2,	4,	"int8" },
	{ 3,	5,	"int16" }
};
static const unsigned int asn_MAP_LTE_interval_FDD_r13_enum2value_39[] = {
	3,	/* int16(3) */
	0,	/* int2(0) */
	1,	/* int4(1) */
	2	/* int8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_FDD_r13_specs_39 = {
	asn_MAP_LTE_interval_FDD_r13_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_FDD_r13_enum2value_39,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_FDD_r13_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_FDD_r13_39 = {
	"interval-FDD-r13",
	"interval-FDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_FDD_r13_tags_39,
	sizeof(asn_DEF_LTE_interval_FDD_r13_tags_39)
		/sizeof(asn_DEF_LTE_interval_FDD_r13_tags_39[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_FDD_r13_tags_39,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_FDD_r13_tags_39)
		/sizeof(asn_DEF_LTE_interval_FDD_r13_tags_39[0]), /* 2 */
	{ &asn_OER_type_LTE_interval_FDD_r13_constr_39, &asn_PER_type_LTE_interval_FDD_r13_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_FDD_r13_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_TDD_r13_value2enum_44[] = {
	{ 0,	4,	"int5" },
	{ 1,	5,	"int10" },
	{ 2,	5,	"int20" },
	{ 3,	5,	"int40" }
};
static const unsigned int asn_MAP_LTE_interval_TDD_r13_enum2value_44[] = {
	1,	/* int10(1) */
	2,	/* int20(2) */
	3,	/* int40(3) */
	0	/* int5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_TDD_r13_specs_44 = {
	asn_MAP_LTE_interval_TDD_r13_value2enum_44,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_TDD_r13_enum2value_44,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_TDD_r13_tags_44[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_TDD_r13_44 = {
	"interval-TDD-r13",
	"interval-TDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_TDD_r13_tags_44,
	sizeof(asn_DEF_LTE_interval_TDD_r13_tags_44)
		/sizeof(asn_DEF_LTE_interval_TDD_r13_tags_44[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_TDD_r13_tags_44,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_TDD_r13_tags_44)
		/sizeof(asn_DEF_LTE_interval_TDD_r13_tags_44[0]), /* 2 */
	{ &asn_OER_type_LTE_interval_TDD_r13_constr_44, &asn_PER_type_LTE_interval_TDD_r13_constr_44, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_TDD_r13_specs_44	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_interval_ULHoppingConfigCommonModeB_r13_38[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13, choice.interval_FDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_FDD_r13_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-FDD-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13, choice.interval_TDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_TDD_r13_44,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-TDD-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_interval_ULHoppingConfigCommonModeB_r13_tag2el_38[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interval-FDD-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interval-TDD-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_interval_ULHoppingConfigCommonModeB_r13_specs_38 = {
	sizeof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13),
	offsetof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13, _asn_ctx),
	offsetof(struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13, present),
	sizeof(((struct LTE_FreqHoppingParameters_r13__interval_ULHoppingConfigCommonModeB_r13 *)0)->present),
	asn_MAP_LTE_interval_ULHoppingConfigCommonModeB_r13_tag2el_38,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_ULHoppingConfigCommonModeB_r13_38 = {
	"interval-ULHoppingConfigCommonModeB-r13",
	"interval-ULHoppingConfigCommonModeB-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LTE_interval_ULHoppingConfigCommonModeB_r13_constr_38, &asn_PER_type_LTE_interval_ULHoppingConfigCommonModeB_r13_constr_38, CHOICE_constraint },
	asn_MBR_LTE_interval_ULHoppingConfigCommonModeB_r13_38,
	2,	/* Elements count */
	&asn_SPC_LTE_interval_ULHoppingConfigCommonModeB_r13_specs_38	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_FreqHoppingParameters_r13_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_FreqHoppingParameters_r13, dummy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_dummy_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_FreqHoppingParameters_r13, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_dummy2_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy2"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_FreqHoppingParameters_r13, dummy3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_dummy3_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy3"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_FreqHoppingParameters_r13, interval_ULHoppingConfigCommonModeA_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_interval_ULHoppingConfigCommonModeA_r13_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-ULHoppingConfigCommonModeA-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_FreqHoppingParameters_r13, interval_ULHoppingConfigCommonModeB_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_interval_ULHoppingConfigCommonModeB_r13_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-ULHoppingConfigCommonModeB-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_FreqHoppingParameters_r13, dummy4),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_LTE_dummy4_constr_49, &asn_PER_memb_LTE_dummy4_constr_49,  memb_LTE_dummy4_constraint_1 },
		0, 0, /* No default value */
		"dummy4"
		},
};
static const int asn_MAP_LTE_FreqHoppingParameters_r13_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_FreqHoppingParameters_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_FreqHoppingParameters_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dummy2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dummy3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* interval-ULHoppingConfigCommonModeA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* interval-ULHoppingConfigCommonModeB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* dummy4 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_FreqHoppingParameters_r13_specs_1 = {
	sizeof(struct LTE_FreqHoppingParameters_r13),
	offsetof(struct LTE_FreqHoppingParameters_r13, _asn_ctx),
	asn_MAP_LTE_FreqHoppingParameters_r13_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_FreqHoppingParameters_r13_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_FreqHoppingParameters_r13 = {
	"FreqHoppingParameters-r13",
	"FreqHoppingParameters-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_FreqHoppingParameters_r13_tags_1,
	sizeof(asn_DEF_LTE_FreqHoppingParameters_r13_tags_1)
		/sizeof(asn_DEF_LTE_FreqHoppingParameters_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_FreqHoppingParameters_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_FreqHoppingParameters_r13_tags_1)
		/sizeof(asn_DEF_LTE_FreqHoppingParameters_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_FreqHoppingParameters_r13_1,
	6,	/* Elements count */
	&asn_SPC_LTE_FreqHoppingParameters_r13_specs_1	/* Additional specs */
};

