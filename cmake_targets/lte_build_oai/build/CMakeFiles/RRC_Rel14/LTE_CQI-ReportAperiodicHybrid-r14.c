/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CQI-ReportAperiodicHybrid-r14.h"

static int
memb_LTE_trigger1_Indicator_r14_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_LTE_trigger01_Indicator_r14_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_LTE_trigger10_Indicator_r14_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_LTE_trigger11_Indicator_r14_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_LTE_trigger001_Indicator_r14_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger010_Indicator_r14_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger011_Indicator_r14_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger100_Indicator_r14_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger101_Indicator_r14_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger110_Indicator_r14_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger111_Indicator_r14_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_LTE_trigger1_Indicator_r14_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger1_Indicator_r14_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger01_Indicator_r14_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger01_Indicator_r14_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger10_Indicator_r14_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger10_Indicator_r14_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger11_Indicator_r14_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger11_Indicator_r14_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger001_Indicator_r14_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger001_Indicator_r14_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger010_Indicator_r14_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger010_Indicator_r14_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger011_Indicator_r14_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger011_Indicator_r14_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger100_Indicator_r14_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger100_Indicator_r14_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger101_Indicator_r14_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger101_Indicator_r14_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger110_Indicator_r14_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger110_Indicator_r14_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_LTE_trigger111_Indicator_r14_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_LTE_trigger111_Indicator_r14_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_triggers_r14_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_LTE_triggers_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_oneBit_r14_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__oneBit_r14, trigger1_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger1_Indicator_r14_constr_4, &asn_PER_memb_LTE_trigger1_Indicator_r14_constr_4,  memb_LTE_trigger1_Indicator_r14_constraint_3 },
		0, 0, /* No default value */
		"trigger1-Indicator-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_oneBit_r14_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_oneBit_r14_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* trigger1-Indicator-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_oneBit_r14_specs_3 = {
	sizeof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__oneBit_r14),
	offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__oneBit_r14, _asn_ctx),
	asn_MAP_LTE_oneBit_r14_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_oneBit_r14_3 = {
	"oneBit-r14",
	"oneBit-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_oneBit_r14_tags_3,
	sizeof(asn_DEF_LTE_oneBit_r14_tags_3)
		/sizeof(asn_DEF_LTE_oneBit_r14_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_oneBit_r14_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_oneBit_r14_tags_3)
		/sizeof(asn_DEF_LTE_oneBit_r14_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_oneBit_r14_3,
	1,	/* Elements count */
	&asn_SPC_LTE_oneBit_r14_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_twoBit_r14_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__twoBit_r14, trigger01_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger01_Indicator_r14_constr_6, &asn_PER_memb_LTE_trigger01_Indicator_r14_constr_6,  memb_LTE_trigger01_Indicator_r14_constraint_5 },
		0, 0, /* No default value */
		"trigger01-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__twoBit_r14, trigger10_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger10_Indicator_r14_constr_7, &asn_PER_memb_LTE_trigger10_Indicator_r14_constr_7,  memb_LTE_trigger10_Indicator_r14_constraint_5 },
		0, 0, /* No default value */
		"trigger10-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__twoBit_r14, trigger11_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger11_Indicator_r14_constr_8, &asn_PER_memb_LTE_trigger11_Indicator_r14_constr_8,  memb_LTE_trigger11_Indicator_r14_constraint_5 },
		0, 0, /* No default value */
		"trigger11-Indicator-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_twoBit_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_twoBit_r14_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trigger01-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trigger10-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* trigger11-Indicator-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_twoBit_r14_specs_5 = {
	sizeof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__twoBit_r14),
	offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__twoBit_r14, _asn_ctx),
	asn_MAP_LTE_twoBit_r14_tag2el_5,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_twoBit_r14_5 = {
	"twoBit-r14",
	"twoBit-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_twoBit_r14_tags_5,
	sizeof(asn_DEF_LTE_twoBit_r14_tags_5)
		/sizeof(asn_DEF_LTE_twoBit_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_twoBit_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_twoBit_r14_tags_5)
		/sizeof(asn_DEF_LTE_twoBit_r14_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_twoBit_r14_5,
	3,	/* Elements count */
	&asn_SPC_LTE_twoBit_r14_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_threeBit_r14_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14, trigger001_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger001_Indicator_r14_constr_10, &asn_PER_memb_LTE_trigger001_Indicator_r14_constr_10,  memb_LTE_trigger001_Indicator_r14_constraint_9 },
		0, 0, /* No default value */
		"trigger001-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14, trigger010_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger010_Indicator_r14_constr_11, &asn_PER_memb_LTE_trigger010_Indicator_r14_constr_11,  memb_LTE_trigger010_Indicator_r14_constraint_9 },
		0, 0, /* No default value */
		"trigger010-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14, trigger011_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger011_Indicator_r14_constr_12, &asn_PER_memb_LTE_trigger011_Indicator_r14_constr_12,  memb_LTE_trigger011_Indicator_r14_constraint_9 },
		0, 0, /* No default value */
		"trigger011-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14, trigger100_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger100_Indicator_r14_constr_13, &asn_PER_memb_LTE_trigger100_Indicator_r14_constr_13,  memb_LTE_trigger100_Indicator_r14_constraint_9 },
		0, 0, /* No default value */
		"trigger100-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14, trigger101_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger101_Indicator_r14_constr_14, &asn_PER_memb_LTE_trigger101_Indicator_r14_constr_14,  memb_LTE_trigger101_Indicator_r14_constraint_9 },
		0, 0, /* No default value */
		"trigger101-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14, trigger110_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger110_Indicator_r14_constr_15, &asn_PER_memb_LTE_trigger110_Indicator_r14_constr_15,  memb_LTE_trigger110_Indicator_r14_constraint_9 },
		0, 0, /* No default value */
		"trigger110-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14, trigger111_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_trigger111_Indicator_r14_constr_16, &asn_PER_memb_LTE_trigger111_Indicator_r14_constr_16,  memb_LTE_trigger111_Indicator_r14_constraint_9 },
		0, 0, /* No default value */
		"trigger111-Indicator-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_threeBit_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_threeBit_r14_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trigger001-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trigger010-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trigger011-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trigger100-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* trigger101-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* trigger110-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* trigger111-Indicator-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_threeBit_r14_specs_9 = {
	sizeof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14),
	offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14, _asn_ctx),
	asn_MAP_LTE_threeBit_r14_tag2el_9,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_threeBit_r14_9 = {
	"threeBit-r14",
	"threeBit-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_threeBit_r14_tags_9,
	sizeof(asn_DEF_LTE_threeBit_r14_tags_9)
		/sizeof(asn_DEF_LTE_threeBit_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_threeBit_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_threeBit_r14_tags_9)
		/sizeof(asn_DEF_LTE_threeBit_r14_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_threeBit_r14_9,
	7,	/* Elements count */
	&asn_SPC_LTE_threeBit_r14_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_triggers_r14_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14, choice.oneBit_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_oneBit_r14_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"oneBit-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14, choice.twoBit_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_twoBit_r14_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoBit-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14, choice.threeBit_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_threeBit_r14_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threeBit-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_triggers_r14_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* oneBit-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* twoBit-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* threeBit-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_triggers_r14_specs_2 = {
	sizeof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14),
	offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14, _asn_ctx),
	offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14, present),
	sizeof(((struct LTE_CQI_ReportAperiodicHybrid_r14__triggers_r14 *)0)->present),
	asn_MAP_LTE_triggers_r14_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_triggers_r14_2 = {
	"triggers-r14",
	"triggers-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LTE_triggers_r14_constr_2, &asn_PER_type_LTE_triggers_r14_constr_2, CHOICE_constraint },
	asn_MBR_LTE_triggers_r14_2,
	3,	/* Elements count */
	&asn_SPC_LTE_triggers_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CQI_ReportAperiodicHybrid_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14, triggers_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_triggers_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"triggers-r14"
		},
};
static const int asn_MAP_LTE_CQI_ReportAperiodicHybrid_r14_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_CQI_ReportAperiodicHybrid_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CQI_ReportAperiodicHybrid_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* triggers-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportAperiodicHybrid_r14_specs_1 = {
	sizeof(struct LTE_CQI_ReportAperiodicHybrid_r14),
	offsetof(struct LTE_CQI_ReportAperiodicHybrid_r14, _asn_ctx),
	asn_MAP_LTE_CQI_ReportAperiodicHybrid_r14_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_CQI_ReportAperiodicHybrid_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportAperiodicHybrid_r14 = {
	"CQI-ReportAperiodicHybrid-r14",
	"CQI-ReportAperiodicHybrid-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CQI_ReportAperiodicHybrid_r14_tags_1,
	sizeof(asn_DEF_LTE_CQI_ReportAperiodicHybrid_r14_tags_1)
		/sizeof(asn_DEF_LTE_CQI_ReportAperiodicHybrid_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_CQI_ReportAperiodicHybrid_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CQI_ReportAperiodicHybrid_r14_tags_1)
		/sizeof(asn_DEF_LTE_CQI_ReportAperiodicHybrid_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CQI_ReportAperiodicHybrid_r14_1,
	1,	/* Elements count */
	&asn_SPC_LTE_CQI_ReportAperiodicHybrid_r14_specs_1	/* Additional specs */
};

