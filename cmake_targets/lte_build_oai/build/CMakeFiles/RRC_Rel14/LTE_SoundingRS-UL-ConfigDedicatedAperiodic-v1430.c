/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SoundingRS-UL-ConfigDedicatedAperiodic-v1430.h"

static int
memb_LTE_srs_SubframeIndication_r14_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_memb_LTE_srs_SubframeIndication_r14_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_LTE_srs_SubframeIndication_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430__setup, srs_SubframeIndication_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_LTE_srs_SubframeIndication_r14_constr_4, &asn_PER_memb_LTE_srs_SubframeIndication_r14_constr_4,  memb_LTE_srs_SubframeIndication_r14_constraint_3 },
		0, 0, /* No default value */
		"srs-SubframeIndication-r14"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* srs-SubframeIndication-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430__setup),
	offsetof(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	1,	/* Count of tags in the map */
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
	1,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_specs_1 = {
	sizeof(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430),
	offsetof(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430, _asn_ctx),
	offsetof(struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430, present),
	sizeof(((struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430 *)0)->present),
	asn_MAP_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430 = {
	"SoundingRS-UL-ConfigDedicatedAperiodic-v1430",
	"SoundingRS-UL-ConfigDedicatedAperiodic-v1430",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_constr_1, &asn_PER_type_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_constr_1, CHOICE_constraint },
	asn_MBR_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_specs_1	/* Additional specs */
};
