/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_Format5-resource-r13.h"

static int
memb_LTE_startingPRB_format5_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 109)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_cdm_index_format5_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_LTE_startingPRB_format5_r13_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..109) */,
	-1};
static asn_per_constraints_t asn_PER_memb_LTE_startingPRB_format5_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  109 }	/* (0..109) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_cdm_index_format5_r13_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_LTE_cdm_index_format5_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_Format5_resource_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_Format5_resource_r13, startingPRB_format5_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_LTE_startingPRB_format5_r13_constr_2, &asn_PER_memb_LTE_startingPRB_format5_r13_constr_2,  memb_LTE_startingPRB_format5_r13_constraint_1 },
		0, 0, /* No default value */
		"startingPRB-format5-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_Format5_resource_r13, cdm_index_format5_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_LTE_cdm_index_format5_r13_constr_3, &asn_PER_memb_LTE_cdm_index_format5_r13_constr_3,  memb_LTE_cdm_index_format5_r13_constraint_1 },
		0, 0, /* No default value */
		"cdm-index-format5-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_Format5_resource_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_Format5_resource_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startingPRB-format5-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cdm-index-format5-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_Format5_resource_r13_specs_1 = {
	sizeof(struct LTE_Format5_resource_r13),
	offsetof(struct LTE_Format5_resource_r13, _asn_ctx),
	asn_MAP_LTE_Format5_resource_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_Format5_resource_r13 = {
	"Format5-resource-r13",
	"Format5-resource-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_Format5_resource_r13_tags_1,
	sizeof(asn_DEF_LTE_Format5_resource_r13_tags_1)
		/sizeof(asn_DEF_LTE_Format5_resource_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_Format5_resource_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_Format5_resource_r13_tags_1)
		/sizeof(asn_DEF_LTE_Format5_resource_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_Format5_resource_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_Format5_resource_r13_specs_1	/* Additional specs */
};

