/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SupportedBandCombinationAdd-v1320.h"

static asn_oer_constraints_t asn_OER_type_LTE_SupportedBandCombinationAdd_v1320_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..256)) */};
asn_per_constraints_t asn_PER_type_LTE_SupportedBandCombinationAdd_v1320_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_SupportedBandCombinationAdd_v1320_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_BandCombinationParameters_v1320,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SupportedBandCombinationAdd_v1320_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_LTE_SupportedBandCombinationAdd_v1320_specs_1 = {
	sizeof(struct LTE_SupportedBandCombinationAdd_v1320),
	offsetof(struct LTE_SupportedBandCombinationAdd_v1320, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SupportedBandCombinationAdd_v1320 = {
	"SupportedBandCombinationAdd-v1320",
	"SupportedBandCombinationAdd-v1320",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_SupportedBandCombinationAdd_v1320_tags_1,
	sizeof(asn_DEF_LTE_SupportedBandCombinationAdd_v1320_tags_1)
		/sizeof(asn_DEF_LTE_SupportedBandCombinationAdd_v1320_tags_1[0]), /* 1 */
	asn_DEF_LTE_SupportedBandCombinationAdd_v1320_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SupportedBandCombinationAdd_v1320_tags_1)
		/sizeof(asn_DEF_LTE_SupportedBandCombinationAdd_v1320_tags_1[0]), /* 1 */
	{ &asn_OER_type_LTE_SupportedBandCombinationAdd_v1320_constr_1, &asn_PER_type_LTE_SupportedBandCombinationAdd_v1320_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_LTE_SupportedBandCombinationAdd_v1320_1,
	1,	/* Single element */
	&asn_SPC_LTE_SupportedBandCombinationAdd_v1320_specs_1	/* Additional specs */
};

