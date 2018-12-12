/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PDCCH-CandidateReductionValue-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LTE_PDCCH_CandidateReductionValue_r13_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LTE_PDCCH_CandidateReductionValue_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_PDCCH_CandidateReductionValue_r13_value2enum_1[] = {
	{ 0,	2,	"n0" },
	{ 1,	3,	"n33" },
	{ 2,	3,	"n66" },
	{ 3,	4,	"n100" }
};
static const unsigned int asn_MAP_LTE_PDCCH_CandidateReductionValue_r13_enum2value_1[] = {
	0,	/* n0(0) */
	3,	/* n100(3) */
	1,	/* n33(1) */
	2	/* n66(2) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_PDCCH_CandidateReductionValue_r13_specs_1 = {
	asn_MAP_LTE_PDCCH_CandidateReductionValue_r13_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_PDCCH_CandidateReductionValue_r13_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_PDCCH_CandidateReductionValue_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_PDCCH_CandidateReductionValue_r13 = {
	"PDCCH-CandidateReductionValue-r13",
	"PDCCH-CandidateReductionValue-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_PDCCH_CandidateReductionValue_r13_tags_1,
	sizeof(asn_DEF_LTE_PDCCH_CandidateReductionValue_r13_tags_1)
		/sizeof(asn_DEF_LTE_PDCCH_CandidateReductionValue_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_PDCCH_CandidateReductionValue_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PDCCH_CandidateReductionValue_r13_tags_1)
		/sizeof(asn_DEF_LTE_PDCCH_CandidateReductionValue_r13_tags_1[0]), /* 1 */
	{ &asn_OER_type_LTE_PDCCH_CandidateReductionValue_r13_constr_1, &asn_PER_type_LTE_PDCCH_CandidateReductionValue_r13_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_PDCCH_CandidateReductionValue_r13_specs_1	/* Additional specs */
};

