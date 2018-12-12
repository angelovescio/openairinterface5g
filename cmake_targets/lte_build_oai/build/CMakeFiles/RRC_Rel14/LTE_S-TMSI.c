/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_S-TMSI.h"

static int
memb_LTE_m_TMSI_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_memb_LTE_m_TMSI_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	32	/* (SIZE(32..32)) */};
static asn_per_constraints_t asn_PER_memb_LTE_m_TMSI_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_S_TMSI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_S_TMSI, mmec),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MMEC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mmec"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_S_TMSI, m_TMSI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_LTE_m_TMSI_constr_3, &asn_PER_memb_LTE_m_TMSI_constr_3,  memb_LTE_m_TMSI_constraint_1 },
		0, 0, /* No default value */
		"m-TMSI"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_S_TMSI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_S_TMSI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mmec */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* m-TMSI */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_S_TMSI_specs_1 = {
	sizeof(struct LTE_S_TMSI),
	offsetof(struct LTE_S_TMSI, _asn_ctx),
	asn_MAP_LTE_S_TMSI_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_S_TMSI = {
	"S-TMSI",
	"S-TMSI",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_S_TMSI_tags_1,
	sizeof(asn_DEF_LTE_S_TMSI_tags_1)
		/sizeof(asn_DEF_LTE_S_TMSI_tags_1[0]), /* 1 */
	asn_DEF_LTE_S_TMSI_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_S_TMSI_tags_1)
		/sizeof(asn_DEF_LTE_S_TMSI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_S_TMSI_1,
	2,	/* Elements count */
	&asn_SPC_LTE_S_TMSI_specs_1	/* Additional specs */
};

