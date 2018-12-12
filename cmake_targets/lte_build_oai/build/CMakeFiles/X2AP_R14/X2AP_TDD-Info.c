/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_TDD-Info.h"

#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_TDD_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_TDD_Info, eARFCN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_EARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eARFCN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_TDD_Info, transmission_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_Transmission_Bandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transmission-Bandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_TDD_Info, subframeAssignment),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_SubframeAssignment,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeAssignment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_TDD_Info, specialSubframe_Info),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_SpecialSubframe_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"specialSubframe-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_TDD_Info, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P114,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_TDD_Info_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_X2AP_TDD_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_TDD_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eARFCN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transmission-Bandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subframeAssignment */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* specialSubframe-Info */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_TDD_Info_specs_1 = {
	sizeof(struct X2AP_TDD_Info),
	offsetof(struct X2AP_TDD_Info, _asn_ctx),
	asn_MAP_X2AP_TDD_Info_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_X2AP_TDD_Info_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_TDD_Info = {
	"TDD-Info",
	"TDD-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_TDD_Info_tags_1,
	sizeof(asn_DEF_X2AP_TDD_Info_tags_1)
		/sizeof(asn_DEF_X2AP_TDD_Info_tags_1[0]), /* 1 */
	asn_DEF_X2AP_TDD_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_TDD_Info_tags_1)
		/sizeof(asn_DEF_X2AP_TDD_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_TDD_Info_1,
	5,	/* Elements count */
	&asn_SPC_X2AP_TDD_Info_specs_1	/* Additional specs */
};

