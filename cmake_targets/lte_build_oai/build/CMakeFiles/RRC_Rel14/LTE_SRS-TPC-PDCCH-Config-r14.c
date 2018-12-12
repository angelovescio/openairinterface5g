/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SRS-TPC-PDCCH-Config-r14.h"

static int
memb_LTE_srs_TPC_RNTI_r14_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
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
memb_LTE_startingBitOfFormat3B_r14_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_LTE_fieldTypeFormat3B_r14_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_LTE_srs_CC_SetIndexlist_r14_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_LTE_srs_CC_SetIndexlist_r14_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_LTE_srs_CC_SetIndexlist_r14_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_srs_TPC_RNTI_r14_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_LTE_srs_TPC_RNTI_r14_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_startingBitOfFormat3B_r14_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_LTE_startingBitOfFormat3B_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_fieldTypeFormat3B_r14_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (1..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_LTE_fieldTypeFormat3B_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_srs_CC_SetIndexlist_r14_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_LTE_srs_CC_SetIndexlist_r14_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_SRS_TPC_PDCCH_Config_r14_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LTE_SRS_TPC_PDCCH_Config_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_srs_CC_SetIndexlist_r14_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_SRS_CC_SetIndex_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_srs_CC_SetIndexlist_r14_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_srs_CC_SetIndexlist_r14_specs_7 = {
	sizeof(struct LTE_SRS_TPC_PDCCH_Config_r14__setup__srs_CC_SetIndexlist_r14),
	offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14__setup__srs_CC_SetIndexlist_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_srs_CC_SetIndexlist_r14_7 = {
	"srs-CC-SetIndexlist-r14",
	"srs-CC-SetIndexlist-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_srs_CC_SetIndexlist_r14_tags_7,
	sizeof(asn_DEF_LTE_srs_CC_SetIndexlist_r14_tags_7)
		/sizeof(asn_DEF_LTE_srs_CC_SetIndexlist_r14_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_srs_CC_SetIndexlist_r14_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_srs_CC_SetIndexlist_r14_tags_7)
		/sizeof(asn_DEF_LTE_srs_CC_SetIndexlist_r14_tags_7[0]), /* 2 */
	{ &asn_OER_type_LTE_srs_CC_SetIndexlist_r14_constr_7, &asn_PER_type_LTE_srs_CC_SetIndexlist_r14_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_LTE_srs_CC_SetIndexlist_r14_7,
	1,	/* Single element */
	&asn_SPC_LTE_srs_CC_SetIndexlist_r14_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14__setup, srs_TPC_RNTI_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_srs_TPC_RNTI_r14_constr_4, &asn_PER_memb_LTE_srs_TPC_RNTI_r14_constr_4,  memb_LTE_srs_TPC_RNTI_r14_constraint_3 },
		0, 0, /* No default value */
		"srs-TPC-RNTI-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14__setup, startingBitOfFormat3B_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_LTE_startingBitOfFormat3B_r14_constr_5, &asn_PER_memb_LTE_startingBitOfFormat3B_r14_constr_5,  memb_LTE_startingBitOfFormat3B_r14_constraint_3 },
		0, 0, /* No default value */
		"startingBitOfFormat3B-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14__setup, fieldTypeFormat3B_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_LTE_fieldTypeFormat3B_r14_constr_6, &asn_PER_memb_LTE_fieldTypeFormat3B_r14_constr_6,  memb_LTE_fieldTypeFormat3B_r14_constraint_3 },
		0, 0, /* No default value */
		"fieldTypeFormat3B-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14__setup, srs_CC_SetIndexlist_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_srs_CC_SetIndexlist_r14_7,
		0,
		{ &asn_OER_memb_LTE_srs_CC_SetIndexlist_r14_constr_7, &asn_PER_memb_LTE_srs_CC_SetIndexlist_r14_constr_7,  memb_LTE_srs_CC_SetIndexlist_r14_constraint_3 },
		0, 0, /* No default value */
		"srs-CC-SetIndexlist-r14"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 3 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-TPC-RNTI-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* startingBitOfFormat3B-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fieldTypeFormat3B-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* srs-CC-SetIndexlist-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_SRS_TPC_PDCCH_Config_r14__setup),
	offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_3,
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_3,
	4,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SRS_TPC_PDCCH_Config_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SRS_TPC_PDCCH_Config_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_SRS_TPC_PDCCH_Config_r14_specs_1 = {
	sizeof(struct LTE_SRS_TPC_PDCCH_Config_r14),
	offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14, _asn_ctx),
	offsetof(struct LTE_SRS_TPC_PDCCH_Config_r14, present),
	sizeof(((struct LTE_SRS_TPC_PDCCH_Config_r14 *)0)->present),
	asn_MAP_LTE_SRS_TPC_PDCCH_Config_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SRS_TPC_PDCCH_Config_r14 = {
	"SRS-TPC-PDCCH-Config-r14",
	"SRS-TPC-PDCCH-Config-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LTE_SRS_TPC_PDCCH_Config_r14_constr_1, &asn_PER_type_LTE_SRS_TPC_PDCCH_Config_r14_constr_1, CHOICE_constraint },
	asn_MBR_LTE_SRS_TPC_PDCCH_Config_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SRS_TPC_PDCCH_Config_r14_specs_1	/* Additional specs */
};

