/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_QuantityConfigUTRA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LTE_measQuantityUTRA_FDD_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_measQuantityUTRA_FDD_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_measQuantityUTRA_TDD_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_measQuantityUTRA_TDD_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_measQuantityUTRA_FDD_value2enum_2[] = {
	{ 0,	10,	"cpich-RSCP" },
	{ 1,	10,	"cpich-EcN0" }
};
static const unsigned int asn_MAP_LTE_measQuantityUTRA_FDD_enum2value_2[] = {
	1,	/* cpich-EcN0(1) */
	0	/* cpich-RSCP(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_measQuantityUTRA_FDD_specs_2 = {
	asn_MAP_LTE_measQuantityUTRA_FDD_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_measQuantityUTRA_FDD_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_measQuantityUTRA_FDD_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_measQuantityUTRA_FDD_2 = {
	"measQuantityUTRA-FDD",
	"measQuantityUTRA-FDD",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_measQuantityUTRA_FDD_tags_2,
	sizeof(asn_DEF_LTE_measQuantityUTRA_FDD_tags_2)
		/sizeof(asn_DEF_LTE_measQuantityUTRA_FDD_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_measQuantityUTRA_FDD_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_measQuantityUTRA_FDD_tags_2)
		/sizeof(asn_DEF_LTE_measQuantityUTRA_FDD_tags_2[0]), /* 2 */
	{ &asn_OER_type_LTE_measQuantityUTRA_FDD_constr_2, &asn_PER_type_LTE_measQuantityUTRA_FDD_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_measQuantityUTRA_FDD_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_measQuantityUTRA_TDD_value2enum_5[] = {
	{ 0,	11,	"pccpch-RSCP" }
};
static const unsigned int asn_MAP_LTE_measQuantityUTRA_TDD_enum2value_5[] = {
	0	/* pccpch-RSCP(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_measQuantityUTRA_TDD_specs_5 = {
	asn_MAP_LTE_measQuantityUTRA_TDD_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_measQuantityUTRA_TDD_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_measQuantityUTRA_TDD_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_measQuantityUTRA_TDD_5 = {
	"measQuantityUTRA-TDD",
	"measQuantityUTRA-TDD",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_measQuantityUTRA_TDD_tags_5,
	sizeof(asn_DEF_LTE_measQuantityUTRA_TDD_tags_5)
		/sizeof(asn_DEF_LTE_measQuantityUTRA_TDD_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_measQuantityUTRA_TDD_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_measQuantityUTRA_TDD_tags_5)
		/sizeof(asn_DEF_LTE_measQuantityUTRA_TDD_tags_5[0]), /* 2 */
	{ &asn_OER_type_LTE_measQuantityUTRA_TDD_constr_5, &asn_PER_type_LTE_measQuantityUTRA_TDD_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_measQuantityUTRA_TDD_specs_5	/* Additional specs */
};

static int asn_DFL_7_cmp_4(const void *sptr) {
	const LTE_FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_7_set_4(void **sptr) {
	LTE_FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
asn_TYPE_member_t asn_MBR_LTE_QuantityConfigUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_QuantityConfigUTRA, measQuantityUTRA_FDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_measQuantityUTRA_FDD_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measQuantityUTRA-FDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_QuantityConfigUTRA, measQuantityUTRA_TDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_measQuantityUTRA_TDD_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measQuantityUTRA-TDD"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_QuantityConfigUTRA, filterCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_7_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_7_set_4,	/* Set DEFAULT 4 */
		"filterCoefficient"
		},
};
static const int asn_MAP_LTE_QuantityConfigUTRA_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LTE_QuantityConfigUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_QuantityConfigUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measQuantityUTRA-FDD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measQuantityUTRA-TDD */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* filterCoefficient */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_QuantityConfigUTRA_specs_1 = {
	sizeof(struct LTE_QuantityConfigUTRA),
	offsetof(struct LTE_QuantityConfigUTRA, _asn_ctx),
	asn_MAP_LTE_QuantityConfigUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_QuantityConfigUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_QuantityConfigUTRA = {
	"QuantityConfigUTRA",
	"QuantityConfigUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_QuantityConfigUTRA_tags_1,
	sizeof(asn_DEF_LTE_QuantityConfigUTRA_tags_1)
		/sizeof(asn_DEF_LTE_QuantityConfigUTRA_tags_1[0]), /* 1 */
	asn_DEF_LTE_QuantityConfigUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_QuantityConfigUTRA_tags_1)
		/sizeof(asn_DEF_LTE_QuantityConfigUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_QuantityConfigUTRA_1,
	3,	/* Elements count */
	&asn_SPC_LTE_QuantityConfigUTRA_specs_1	/* Additional specs */
};

