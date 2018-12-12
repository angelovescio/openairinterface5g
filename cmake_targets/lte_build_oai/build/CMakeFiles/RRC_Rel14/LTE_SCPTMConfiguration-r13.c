/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SCPTMConfiguration-r13.h"

asn_TYPE_member_t asn_MBR_LTE_SCPTMConfiguration_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SCPTMConfiguration_r13, sc_mtch_InfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SC_MTCH_InfoList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mtch-InfoList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SCPTMConfiguration_r13, scptm_NeighbourCellList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCPTM_NeighbourCellList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scptm-NeighbourCellList-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SCPTMConfiguration_r13, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SCPTMConfiguration_r13, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCPTMConfiguration_v1340,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SCPTMConfiguration_r13_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_SCPTMConfiguration_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SCPTMConfiguration_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sc-mtch-InfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scptm-NeighbourCellList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SCPTMConfiguration_r13_specs_1 = {
	sizeof(struct LTE_SCPTMConfiguration_r13),
	offsetof(struct LTE_SCPTMConfiguration_r13, _asn_ctx),
	asn_MAP_LTE_SCPTMConfiguration_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_SCPTMConfiguration_r13_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SCPTMConfiguration_r13 = {
	"SCPTMConfiguration-r13",
	"SCPTMConfiguration-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SCPTMConfiguration_r13_tags_1,
	sizeof(asn_DEF_LTE_SCPTMConfiguration_r13_tags_1)
		/sizeof(asn_DEF_LTE_SCPTMConfiguration_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SCPTMConfiguration_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SCPTMConfiguration_r13_tags_1)
		/sizeof(asn_DEF_LTE_SCPTMConfiguration_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SCPTMConfiguration_r13_1,
	4,	/* Elements count */
	&asn_SPC_LTE_SCPTMConfiguration_r13_specs_1	/* Additional specs */
};

