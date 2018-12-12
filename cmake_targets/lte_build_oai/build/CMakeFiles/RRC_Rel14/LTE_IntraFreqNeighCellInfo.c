/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_IntraFreqNeighCellInfo.h"

asn_TYPE_member_t asn_MBR_LTE_IntraFreqNeighCellInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_IntraFreqNeighCellInfo, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_IntraFreqNeighCellInfo, q_OffsetCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_OffsetRange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-OffsetCell"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_IntraFreqNeighCellInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_IntraFreqNeighCellInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-OffsetCell */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_IntraFreqNeighCellInfo_specs_1 = {
	sizeof(struct LTE_IntraFreqNeighCellInfo),
	offsetof(struct LTE_IntraFreqNeighCellInfo, _asn_ctx),
	asn_MAP_LTE_IntraFreqNeighCellInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_IntraFreqNeighCellInfo = {
	"IntraFreqNeighCellInfo",
	"IntraFreqNeighCellInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_IntraFreqNeighCellInfo_tags_1,
	sizeof(asn_DEF_LTE_IntraFreqNeighCellInfo_tags_1)
		/sizeof(asn_DEF_LTE_IntraFreqNeighCellInfo_tags_1[0]), /* 1 */
	asn_DEF_LTE_IntraFreqNeighCellInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_IntraFreqNeighCellInfo_tags_1)
		/sizeof(asn_DEF_LTE_IntraFreqNeighCellInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_IntraFreqNeighCellInfo_1,
	2,	/* Elements count */
	&asn_SPC_LTE_IntraFreqNeighCellInfo_specs_1	/* Additional specs */
};

