/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PhysicalConfigDedicatedSCell-v1370.h"

static asn_oer_constraints_t asn_OER_type_LTE_pucch_SCell_v1370_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_pucch_SCell_v1370_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_setup_4[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370__setup, pucch_ConfigDedicated_v1370),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PUCCH_ConfigDedicated_v1370,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigDedicated-v1370"
		},
};
static const int asn_MAP_LTE_setup_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pucch-ConfigDedicated-v1370 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_4 = {
	sizeof(struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370__setup),
	offsetof(struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_4 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_4,
	sizeof(asn_DEF_LTE_setup_tags_4)
		/sizeof(asn_DEF_LTE_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_4)
		/sizeof(asn_DEF_LTE_setup_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_4,
	1,	/* Elements count */
	&asn_SPC_LTE_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_pucch_SCell_v1370_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_pucch_SCell_v1370_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_pucch_SCell_v1370_specs_2 = {
	sizeof(struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370),
	offsetof(struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370, _asn_ctx),
	offsetof(struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370, present),
	sizeof(((struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370 *)0)->present),
	asn_MAP_LTE_pucch_SCell_v1370_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pucch_SCell_v1370_2 = {
	"pucch-SCell-v1370",
	"pucch-SCell-v1370",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LTE_pucch_SCell_v1370_constr_2, &asn_PER_type_LTE_pucch_SCell_v1370_constr_2, CHOICE_constraint },
	asn_MBR_LTE_pucch_SCell_v1370_2,
	2,	/* Elements count */
	&asn_SPC_LTE_pucch_SCell_v1370_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PhysicalConfigDedicatedSCell_v1370_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PhysicalConfigDedicatedSCell_v1370, pucch_SCell_v1370),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_pucch_SCell_v1370_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-SCell-v1370"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PhysicalConfigDedicatedSCell_v1370_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pucch-SCell-v1370 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PhysicalConfigDedicatedSCell_v1370_specs_1 = {
	sizeof(struct LTE_PhysicalConfigDedicatedSCell_v1370),
	offsetof(struct LTE_PhysicalConfigDedicatedSCell_v1370, _asn_ctx),
	asn_MAP_LTE_PhysicalConfigDedicatedSCell_v1370_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370 = {
	"PhysicalConfigDedicatedSCell-v1370",
	"PhysicalConfigDedicatedSCell-v1370",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370_tags_1,
	sizeof(asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370_tags_1)
		/sizeof(asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370_tags_1[0]), /* 1 */
	asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370_tags_1)
		/sizeof(asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PhysicalConfigDedicatedSCell_v1370_1,
	1,	/* Elements count */
	&asn_SPC_LTE_PhysicalConfigDedicatedSCell_v1370_specs_1	/* Additional specs */
};

