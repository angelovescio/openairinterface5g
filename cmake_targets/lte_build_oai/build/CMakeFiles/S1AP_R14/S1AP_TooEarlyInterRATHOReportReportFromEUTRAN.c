/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_TooEarlyInterRATHOReportReportFromEUTRAN.h"

asn_TYPE_member_t asn_MBR_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_TooEarlyInterRATHOReportReportFromEUTRAN, uERLFReportContainer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uERLFReportContainer"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_TooEarlyInterRATHOReportReportFromEUTRAN, mobilityInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_SonTransfer_IEs_MobilityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityInformation"
		},
};
static const int asn_MAP_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uERLFReportContainer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mobilityInformation */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_specs_1 = {
	sizeof(struct S1AP_TooEarlyInterRATHOReportReportFromEUTRAN),
	offsetof(struct S1AP_TooEarlyInterRATHOReportReportFromEUTRAN, _asn_ctx),
	asn_MAP_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN = {
	"TooEarlyInterRATHOReportReportFromEUTRAN",
	"TooEarlyInterRATHOReportReportFromEUTRAN",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_tags_1,
	sizeof(asn_DEF_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_tags_1)
		/sizeof(asn_DEF_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_tags_1[0]), /* 1 */
	asn_DEF_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_tags_1)
		/sizeof(asn_DEF_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_1,
	2,	/* Elements count */
	&asn_SPC_S1AP_TooEarlyInterRATHOReportReportFromEUTRAN_specs_1	/* Additional specs */
};

