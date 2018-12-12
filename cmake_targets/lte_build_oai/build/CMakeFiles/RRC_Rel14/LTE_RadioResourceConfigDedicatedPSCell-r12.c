/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RadioResourceConfigDedicatedPSCell-r12.h"

static asn_TYPE_member_t asn_MBR_LTE_ext1_6[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext1, neighCellsCRS_InfoPSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_NeighCellsCRS_Info_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsCRS-InfoPSCell-r13"
		},
};
static const int asn_MAP_LTE_ext1_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* neighCellsCRS-InfoPSCell-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_6 = {
	sizeof(struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext1),
	offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_6,
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_6,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_8[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext2, sps_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config-v1430"
		},
};
static const int asn_MAP_LTE_ext2_oms_8[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sps-Config-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_8 = {
	sizeof(struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext2),
	offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_8 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_8,
	sizeof(asn_DEF_LTE_ext2_tags_8)
		/sizeof(asn_DEF_LTE_ext2_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_8)
		/sizeof(asn_DEF_LTE_ext2_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_8,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigDedicatedPSCell_r12_1[] = {
	{ ATF_POINTER, 5, offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12, physicalConfigDedicatedPSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysicalConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalConfigDedicatedPSCell-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12, sps_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12, naics_Info_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_NAICS_AssistanceInfo_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"naics-Info-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12, ext2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext2_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_LTE_RadioResourceConfigDedicatedPSCell_r12_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_RadioResourceConfigDedicatedPSCell_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RadioResourceConfigDedicatedPSCell_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physicalConfigDedicatedPSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sps-Config-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* naics-Info-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigDedicatedPSCell_r12_specs_1 = {
	sizeof(struct LTE_RadioResourceConfigDedicatedPSCell_r12),
	offsetof(struct LTE_RadioResourceConfigDedicatedPSCell_r12, _asn_ctx),
	asn_MAP_LTE_RadioResourceConfigDedicatedPSCell_r12_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_RadioResourceConfigDedicatedPSCell_r12_oms_1,	/* Optional members */
	3, 2,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigDedicatedPSCell_r12 = {
	"RadioResourceConfigDedicatedPSCell-r12",
	"RadioResourceConfigDedicatedPSCell-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RadioResourceConfigDedicatedPSCell_r12_tags_1,
	sizeof(asn_DEF_LTE_RadioResourceConfigDedicatedPSCell_r12_tags_1)
		/sizeof(asn_DEF_LTE_RadioResourceConfigDedicatedPSCell_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_RadioResourceConfigDedicatedPSCell_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RadioResourceConfigDedicatedPSCell_r12_tags_1)
		/sizeof(asn_DEF_LTE_RadioResourceConfigDedicatedPSCell_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RadioResourceConfigDedicatedPSCell_r12_1,
	5,	/* Elements count */
	&asn_SPC_LTE_RadioResourceConfigDedicatedPSCell_r12_specs_1	/* Additional specs */
};

