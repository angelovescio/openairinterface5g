/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/vesh/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_E-RABModifyListBearerModConf.h"

#include "S1AP_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_S1AP_E_RABModifyListBearerModConf_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..256)) */};
static asn_per_constraints_t asn_PER_type_S1AP_E_RABModifyListBearerModConf_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1AP_E_RABModifyListBearerModConf_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_E_RABModifyListBearerModConf_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_S1AP_E_RABModifyListBearerModConf_specs_1 = {
	sizeof(struct S1AP_E_RABModifyListBearerModConf),
	offsetof(struct S1AP_E_RABModifyListBearerModConf, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABModifyListBearerModConf = {
	"E-RABModifyListBearerModConf",
	"E-RABModifyListBearerModConf",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_E_RABModifyListBearerModConf_tags_1,
	sizeof(asn_DEF_S1AP_E_RABModifyListBearerModConf_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABModifyListBearerModConf_tags_1[0]), /* 1 */
	asn_DEF_S1AP_E_RABModifyListBearerModConf_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_E_RABModifyListBearerModConf_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABModifyListBearerModConf_tags_1[0]), /* 1 */
	{ &asn_OER_type_S1AP_E_RABModifyListBearerModConf_constr_1, &asn_PER_type_S1AP_E_RABModifyListBearerModConf_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_E_RABModifyListBearerModConf_1,
	1,	/* Single element */
	&asn_SPC_S1AP_E_RABModifyListBearerModConf_specs_1	/* Additional specs */
};

