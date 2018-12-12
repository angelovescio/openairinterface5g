/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_AreaConfiguration-r10.h"

static asn_oer_constraints_t asn_OER_type_LTE_AreaConfiguration_r10_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LTE_AreaConfiguration_r10_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_AreaConfiguration_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_AreaConfiguration_r10, choice.cellGlobalIdList_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellGlobalIdList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellGlobalIdList-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_AreaConfiguration_r10, choice.trackingAreaCodeList_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_TrackingAreaCodeList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCodeList-r10"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_AreaConfiguration_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalIdList-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* trackingAreaCodeList-r10 */
};
asn_CHOICE_specifics_t asn_SPC_LTE_AreaConfiguration_r10_specs_1 = {
	sizeof(struct LTE_AreaConfiguration_r10),
	offsetof(struct LTE_AreaConfiguration_r10, _asn_ctx),
	offsetof(struct LTE_AreaConfiguration_r10, present),
	sizeof(((struct LTE_AreaConfiguration_r10 *)0)->present),
	asn_MAP_LTE_AreaConfiguration_r10_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_AreaConfiguration_r10 = {
	"AreaConfiguration-r10",
	"AreaConfiguration-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LTE_AreaConfiguration_r10_constr_1, &asn_PER_type_LTE_AreaConfiguration_r10_constr_1, CHOICE_constraint },
	asn_MBR_LTE_AreaConfiguration_r10_1,
	2,	/* Elements count */
	&asn_SPC_LTE_AreaConfiguration_r10_specs_1	/* Additional specs */
};

