/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_HandoverFromEUTRAPreparationRequest-v1020-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LTE_dualRxTxRedirectIndicator_r10_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_dualRxTxRedirectIndicator_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_dualRxTxRedirectIndicator_r10_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_dualRxTxRedirectIndicator_r10_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_dualRxTxRedirectIndicator_r10_specs_2 = {
	asn_MAP_LTE_dualRxTxRedirectIndicator_r10_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_dualRxTxRedirectIndicator_r10_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_dualRxTxRedirectIndicator_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dualRxTxRedirectIndicator_r10_2 = {
	"dualRxTxRedirectIndicator-r10",
	"dualRxTxRedirectIndicator-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_dualRxTxRedirectIndicator_r10_tags_2,
	sizeof(asn_DEF_LTE_dualRxTxRedirectIndicator_r10_tags_2)
		/sizeof(asn_DEF_LTE_dualRxTxRedirectIndicator_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_dualRxTxRedirectIndicator_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_dualRxTxRedirectIndicator_r10_tags_2)
		/sizeof(asn_DEF_LTE_dualRxTxRedirectIndicator_r10_tags_2[0]), /* 2 */
	{ &asn_OER_type_LTE_dualRxTxRedirectIndicator_r10_constr_2, &asn_PER_type_LTE_dualRxTxRedirectIndicator_r10_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_dualRxTxRedirectIndicator_r10_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_5 = {
	sizeof(struct LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs__nonCriticalExtension),
	offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_5 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_5,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_5)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_5)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs, dualRxTxRedirectIndicator_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_dualRxTxRedirectIndicator_r10_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dualRxTxRedirectIndicator-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs, redirectCarrierCDMA2000_1XRTT_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CarrierFreqCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"redirectCarrierCDMA2000-1XRTT-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dualRxTxRedirectIndicator-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* redirectCarrierCDMA2000-1XRTT-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_specs_1 = {
	sizeof(struct LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs),
	offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs, _asn_ctx),
	asn_MAP_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs = {
	"HandoverFromEUTRAPreparationRequest-v1020-IEs",
	"HandoverFromEUTRAPreparationRequest-v1020-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_tags_1,
	sizeof(asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_tags_1)
		/sizeof(asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_tags_1)
		/sizeof(asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_1,
	3,	/* Elements count */
	&asn_SPC_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_specs_1	/* Additional specs */
};

