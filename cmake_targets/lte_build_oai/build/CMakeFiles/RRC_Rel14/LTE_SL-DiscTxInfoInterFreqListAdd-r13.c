/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SL-DiscTxInfoInterFreqListAdd-r13.h"

static int
memb_LTE_discTxFreqToAddModList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
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
memb_LTE_discTxFreqToReleaseList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_LTE_discTxFreqToAddModList_r13_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_LTE_discTxFreqToAddModList_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_discTxFreqToReleaseList_r13_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_LTE_discTxFreqToReleaseList_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_discTxFreqToAddModList_r13_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_LTE_discTxFreqToAddModList_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_discTxFreqToReleaseList_r13_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_LTE_discTxFreqToReleaseList_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_discTxFreqToAddModList_r13_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_SL_DiscTxResourceInfoPerFreq_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_discTxFreqToAddModList_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_discTxFreqToAddModList_r13_specs_2 = {
	sizeof(struct LTE_SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToAddModList_r13),
	offsetof(struct LTE_SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToAddModList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discTxFreqToAddModList_r13_2 = {
	"discTxFreqToAddModList-r13",
	"discTxFreqToAddModList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_discTxFreqToAddModList_r13_tags_2,
	sizeof(asn_DEF_LTE_discTxFreqToAddModList_r13_tags_2)
		/sizeof(asn_DEF_LTE_discTxFreqToAddModList_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_discTxFreqToAddModList_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_discTxFreqToAddModList_r13_tags_2)
		/sizeof(asn_DEF_LTE_discTxFreqToAddModList_r13_tags_2[0]), /* 2 */
	{ &asn_OER_type_LTE_discTxFreqToAddModList_r13_constr_2, &asn_PER_type_LTE_discTxFreqToAddModList_r13_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_LTE_discTxFreqToAddModList_r13_2,
	1,	/* Single element */
	&asn_SPC_LTE_discTxFreqToAddModList_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_discTxFreqToReleaseList_r13_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LTE_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_discTxFreqToReleaseList_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_discTxFreqToReleaseList_r13_specs_4 = {
	sizeof(struct LTE_SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToReleaseList_r13),
	offsetof(struct LTE_SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToReleaseList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discTxFreqToReleaseList_r13_4 = {
	"discTxFreqToReleaseList-r13",
	"discTxFreqToReleaseList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_discTxFreqToReleaseList_r13_tags_4,
	sizeof(asn_DEF_LTE_discTxFreqToReleaseList_r13_tags_4)
		/sizeof(asn_DEF_LTE_discTxFreqToReleaseList_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_discTxFreqToReleaseList_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_discTxFreqToReleaseList_r13_tags_4)
		/sizeof(asn_DEF_LTE_discTxFreqToReleaseList_r13_tags_4[0]), /* 2 */
	{ &asn_OER_type_LTE_discTxFreqToReleaseList_r13_constr_4, &asn_PER_type_LTE_discTxFreqToReleaseList_r13_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_LTE_discTxFreqToReleaseList_r13_4,
	1,	/* Single element */
	&asn_SPC_LTE_discTxFreqToReleaseList_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_DiscTxInfoInterFreqListAdd_r13_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_DiscTxInfoInterFreqListAdd_r13, discTxFreqToAddModList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_discTxFreqToAddModList_r13_2,
		0,
		{ &asn_OER_memb_LTE_discTxFreqToAddModList_r13_constr_2, &asn_PER_memb_LTE_discTxFreqToAddModList_r13_constr_2,  memb_LTE_discTxFreqToAddModList_r13_constraint_1 },
		0, 0, /* No default value */
		"discTxFreqToAddModList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_DiscTxInfoInterFreqListAdd_r13, discTxFreqToReleaseList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_discTxFreqToReleaseList_r13_4,
		0,
		{ &asn_OER_memb_LTE_discTxFreqToReleaseList_r13_constr_4, &asn_PER_memb_LTE_discTxFreqToReleaseList_r13_constr_4,  memb_LTE_discTxFreqToReleaseList_r13_constraint_1 },
		0, 0, /* No default value */
		"discTxFreqToReleaseList-r13"
		},
};
static const int asn_MAP_LTE_SL_DiscTxInfoInterFreqListAdd_r13_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_DiscTxInfoInterFreqListAdd_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_DiscTxInfoInterFreqListAdd_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discTxFreqToAddModList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* discTxFreqToReleaseList-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_DiscTxInfoInterFreqListAdd_r13_specs_1 = {
	sizeof(struct LTE_SL_DiscTxInfoInterFreqListAdd_r13),
	offsetof(struct LTE_SL_DiscTxInfoInterFreqListAdd_r13, _asn_ctx),
	asn_MAP_LTE_SL_DiscTxInfoInterFreqListAdd_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_SL_DiscTxInfoInterFreqListAdd_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_DiscTxInfoInterFreqListAdd_r13 = {
	"SL-DiscTxInfoInterFreqListAdd-r13",
	"SL-DiscTxInfoInterFreqListAdd-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_DiscTxInfoInterFreqListAdd_r13_tags_1,
	sizeof(asn_DEF_LTE_SL_DiscTxInfoInterFreqListAdd_r13_tags_1)
		/sizeof(asn_DEF_LTE_SL_DiscTxInfoInterFreqListAdd_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_DiscTxInfoInterFreqListAdd_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_DiscTxInfoInterFreqListAdd_r13_tags_1)
		/sizeof(asn_DEF_LTE_SL_DiscTxInfoInterFreqListAdd_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_DiscTxInfoInterFreqListAdd_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SL_DiscTxInfoInterFreqListAdd_r13_specs_1	/* Additional specs */
};

