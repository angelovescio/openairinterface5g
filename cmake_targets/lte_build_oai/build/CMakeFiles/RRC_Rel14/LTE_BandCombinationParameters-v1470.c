/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_BandCombinationParameters-v1470.h"

static int
memb_LTE_bandParameterList_v1470_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_srs_MaxSimultaneousCCs_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_LTE_bandParameterList_v1470_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_type_LTE_bandParameterList_v1470_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_bandParameterList_v1470_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_memb_LTE_bandParameterList_v1470_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_srs_MaxSimultaneousCCs_r14_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_LTE_srs_MaxSimultaneousCCs_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  31 }	/* (1..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_bandParameterList_v1470_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_BandParameters_v1470,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_bandParameterList_v1470_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_bandParameterList_v1470_specs_2 = {
	sizeof(struct LTE_BandCombinationParameters_v1470__bandParameterList_v1470),
	offsetof(struct LTE_BandCombinationParameters_v1470__bandParameterList_v1470, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_bandParameterList_v1470_2 = {
	"bandParameterList-v1470",
	"bandParameterList-v1470",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_bandParameterList_v1470_tags_2,
	sizeof(asn_DEF_LTE_bandParameterList_v1470_tags_2)
		/sizeof(asn_DEF_LTE_bandParameterList_v1470_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_bandParameterList_v1470_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_bandParameterList_v1470_tags_2)
		/sizeof(asn_DEF_LTE_bandParameterList_v1470_tags_2[0]), /* 2 */
	{ &asn_OER_type_LTE_bandParameterList_v1470_constr_2, &asn_PER_type_LTE_bandParameterList_v1470_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_LTE_bandParameterList_v1470_2,
	1,	/* Single element */
	&asn_SPC_LTE_bandParameterList_v1470_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_v1470_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_BandCombinationParameters_v1470, bandParameterList_v1470),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_bandParameterList_v1470_2,
		0,
		{ &asn_OER_memb_LTE_bandParameterList_v1470_constr_2, &asn_PER_memb_LTE_bandParameterList_v1470_constr_2,  memb_LTE_bandParameterList_v1470_constraint_1 },
		0, 0, /* No default value */
		"bandParameterList-v1470"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BandCombinationParameters_v1470, srs_MaxSimultaneousCCs_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_LTE_srs_MaxSimultaneousCCs_r14_constr_4, &asn_PER_memb_LTE_srs_MaxSimultaneousCCs_r14_constr_4,  memb_LTE_srs_MaxSimultaneousCCs_r14_constraint_1 },
		0, 0, /* No default value */
		"srs-MaxSimultaneousCCs-r14"
		},
};
static const int asn_MAP_LTE_BandCombinationParameters_v1470_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_BandCombinationParameters_v1470_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BandCombinationParameters_v1470_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandParameterList-v1470 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* srs-MaxSimultaneousCCs-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_v1470_specs_1 = {
	sizeof(struct LTE_BandCombinationParameters_v1470),
	offsetof(struct LTE_BandCombinationParameters_v1470, _asn_ctx),
	asn_MAP_LTE_BandCombinationParameters_v1470_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_BandCombinationParameters_v1470_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_v1470 = {
	"BandCombinationParameters-v1470",
	"BandCombinationParameters-v1470",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BandCombinationParameters_v1470_tags_1,
	sizeof(asn_DEF_LTE_BandCombinationParameters_v1470_tags_1)
		/sizeof(asn_DEF_LTE_BandCombinationParameters_v1470_tags_1[0]), /* 1 */
	asn_DEF_LTE_BandCombinationParameters_v1470_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BandCombinationParameters_v1470_tags_1)
		/sizeof(asn_DEF_LTE_BandCombinationParameters_v1470_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_BandCombinationParameters_v1470_1,
	2,	/* Elements count */
	&asn_SPC_LTE_BandCombinationParameters_v1470_specs_1	/* Additional specs */
};

