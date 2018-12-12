/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/vesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_ReportingPeriodicityRSRPMR.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_X2AP_ReportingPeriodicityRSRPMR_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_X2AP_ReportingPeriodicityRSRPMR_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_ReportingPeriodicityRSRPMR_value2enum_1[] = {
	{ 0,	17,	"one-hundred-20-ms" },
	{ 1,	17,	"two-hundred-40-ms" },
	{ 2,	18,	"four-hundred-80-ms" },
	{ 3,	17,	"six-hundred-40-ms" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_ReportingPeriodicityRSRPMR_enum2value_1[] = {
	2,	/* four-hundred-80-ms(2) */
	0,	/* one-hundred-20-ms(0) */
	3,	/* six-hundred-40-ms(3) */
	1	/* two-hundred-40-ms(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_X2AP_ReportingPeriodicityRSRPMR_specs_1 = {
	asn_MAP_X2AP_ReportingPeriodicityRSRPMR_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_ReportingPeriodicityRSRPMR_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_ReportingPeriodicityRSRPMR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ReportingPeriodicityRSRPMR = {
	"ReportingPeriodicityRSRPMR",
	"ReportingPeriodicityRSRPMR",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_ReportingPeriodicityRSRPMR_tags_1,
	sizeof(asn_DEF_X2AP_ReportingPeriodicityRSRPMR_tags_1)
		/sizeof(asn_DEF_X2AP_ReportingPeriodicityRSRPMR_tags_1[0]), /* 1 */
	asn_DEF_X2AP_ReportingPeriodicityRSRPMR_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_ReportingPeriodicityRSRPMR_tags_1)
		/sizeof(asn_DEF_X2AP_ReportingPeriodicityRSRPMR_tags_1[0]), /* 1 */
	{ &asn_OER_type_X2AP_ReportingPeriodicityRSRPMR_constr_1, &asn_PER_type_X2AP_ReportingPeriodicityRSRPMR_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_ReportingPeriodicityRSRPMR_specs_1	/* Additional specs */
};

