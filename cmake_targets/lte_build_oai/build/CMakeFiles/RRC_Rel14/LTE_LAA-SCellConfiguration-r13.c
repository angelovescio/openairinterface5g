/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_LAA-SCellConfiguration-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_laa_SCellSubframeConfig_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_LTE_subframeStartPosition_r13_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_subframeStartPosition_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_laa_SCellSubframeConfig_r13_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_LTE_laa_SCellSubframeConfig_r13_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_subframeStartPosition_r13_value2enum_2[] = {
	{ 0,	2,	"s0" },
	{ 1,	3,	"s07" }
};
static const unsigned int asn_MAP_LTE_subframeStartPosition_r13_enum2value_2[] = {
	0,	/* s0(0) */
	1	/* s07(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_subframeStartPosition_r13_specs_2 = {
	asn_MAP_LTE_subframeStartPosition_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_subframeStartPosition_r13_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_subframeStartPosition_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_subframeStartPosition_r13_2 = {
	"subframeStartPosition-r13",
	"subframeStartPosition-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_subframeStartPosition_r13_tags_2,
	sizeof(asn_DEF_LTE_subframeStartPosition_r13_tags_2)
		/sizeof(asn_DEF_LTE_subframeStartPosition_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_subframeStartPosition_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_subframeStartPosition_r13_tags_2)
		/sizeof(asn_DEF_LTE_subframeStartPosition_r13_tags_2[0]), /* 2 */
	{ &asn_OER_type_LTE_subframeStartPosition_r13_constr_2, &asn_PER_type_LTE_subframeStartPosition_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_subframeStartPosition_r13_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_LAA_SCellConfiguration_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LAA_SCellConfiguration_r13, subframeStartPosition_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_subframeStartPosition_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeStartPosition-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LAA_SCellConfiguration_r13, laa_SCellSubframeConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_laa_SCellSubframeConfig_r13_constr_5, &asn_PER_memb_LTE_laa_SCellSubframeConfig_r13_constr_5,  memb_LTE_laa_SCellSubframeConfig_r13_constraint_1 },
		0, 0, /* No default value */
		"laa-SCellSubframeConfig-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_LAA_SCellConfiguration_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_LAA_SCellConfiguration_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subframeStartPosition-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* laa-SCellSubframeConfig-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_LAA_SCellConfiguration_r13_specs_1 = {
	sizeof(struct LTE_LAA_SCellConfiguration_r13),
	offsetof(struct LTE_LAA_SCellConfiguration_r13, _asn_ctx),
	asn_MAP_LTE_LAA_SCellConfiguration_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_LAA_SCellConfiguration_r13 = {
	"LAA-SCellConfiguration-r13",
	"LAA-SCellConfiguration-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_LAA_SCellConfiguration_r13_tags_1,
	sizeof(asn_DEF_LTE_LAA_SCellConfiguration_r13_tags_1)
		/sizeof(asn_DEF_LTE_LAA_SCellConfiguration_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_LAA_SCellConfiguration_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_LAA_SCellConfiguration_r13_tags_1)
		/sizeof(asn_DEF_LTE_LAA_SCellConfiguration_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_LAA_SCellConfiguration_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_LAA_SCellConfiguration_r13_specs_1	/* Additional specs */
};

