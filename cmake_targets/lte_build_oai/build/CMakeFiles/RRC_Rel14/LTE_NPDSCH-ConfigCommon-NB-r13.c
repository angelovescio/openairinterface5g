/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_NPDSCH-ConfigCommon-NB-r13.h"

static int
memb_LTE_nrs_Power_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= 50)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_LTE_nrs_Power_r13_constr_2 CC_NOTUSED = {
	{ 1, 0 }	/* (-60..50) */,
	-1};
static asn_per_constraints_t asn_PER_memb_LTE_nrs_Power_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  50 }	/* (-60..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_NPDSCH_ConfigCommon_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPDSCH_ConfigCommon_NB_r13, nrs_Power_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_LTE_nrs_Power_r13_constr_2, &asn_PER_memb_LTE_nrs_Power_r13_constr_2,  memb_LTE_nrs_Power_r13_constraint_1 },
		0, 0, /* No default value */
		"nrs-Power-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_NPDSCH_ConfigCommon_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NPDSCH_ConfigCommon_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nrs-Power-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NPDSCH_ConfigCommon_NB_r13_specs_1 = {
	sizeof(struct LTE_NPDSCH_ConfigCommon_NB_r13),
	offsetof(struct LTE_NPDSCH_ConfigCommon_NB_r13, _asn_ctx),
	asn_MAP_LTE_NPDSCH_ConfigCommon_NB_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NPDSCH_ConfigCommon_NB_r13 = {
	"NPDSCH-ConfigCommon-NB-r13",
	"NPDSCH-ConfigCommon-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NPDSCH_ConfigCommon_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_NPDSCH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_NPDSCH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_NPDSCH_ConfigCommon_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NPDSCH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_NPDSCH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_NPDSCH_ConfigCommon_NB_r13_1,
	1,	/* Elements count */
	&asn_SPC_LTE_NPDSCH_ConfigCommon_NB_r13_specs_1	/* Additional specs */
};

