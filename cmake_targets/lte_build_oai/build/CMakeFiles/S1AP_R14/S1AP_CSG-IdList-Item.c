/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_CSG-IdList-Item.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_CSG_IdList_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_CSG_IdList_Item, cSG_Id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CSG_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cSG-Id"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_CSG_IdList_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P35,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_CSG_IdList_Item_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_S1AP_CSG_IdList_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_CSG_IdList_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cSG-Id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_CSG_IdList_Item_specs_1 = {
	sizeof(struct S1AP_CSG_IdList_Item),
	offsetof(struct S1AP_CSG_IdList_Item, _asn_ctx),
	asn_MAP_S1AP_CSG_IdList_Item_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_S1AP_CSG_IdList_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_CSG_IdList_Item = {
	"CSG-IdList-Item",
	"CSG-IdList-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_CSG_IdList_Item_tags_1,
	sizeof(asn_DEF_S1AP_CSG_IdList_Item_tags_1)
		/sizeof(asn_DEF_S1AP_CSG_IdList_Item_tags_1[0]), /* 1 */
	asn_DEF_S1AP_CSG_IdList_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_CSG_IdList_Item_tags_1)
		/sizeof(asn_DEF_S1AP_CSG_IdList_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_CSG_IdList_Item_1,
	2,	/* Elements count */
	&asn_SPC_S1AP_CSG_IdList_Item_specs_1	/* Additional specs */
};
