/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SL-TxPoolIdentity-r12.h"

int
LTE_SL_TxPoolIdentity_r12_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
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

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LTE_SL_TxPoolIdentity_r12_constr_1 CC_NOTUSED = {
	{ 1, 1 }	/* (1..4) */,
	-1};
asn_per_constraints_t asn_PER_type_LTE_SL_TxPoolIdentity_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_LTE_SL_TxPoolIdentity_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_TxPoolIdentity_r12 = {
	"SL-TxPoolIdentity-r12",
	"SL-TxPoolIdentity-r12",
	&asn_OP_NativeInteger,
	asn_DEF_LTE_SL_TxPoolIdentity_r12_tags_1,
	sizeof(asn_DEF_LTE_SL_TxPoolIdentity_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_TxPoolIdentity_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_TxPoolIdentity_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_TxPoolIdentity_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_TxPoolIdentity_r12_tags_1[0]), /* 1 */
	{ &asn_OER_type_LTE_SL_TxPoolIdentity_r12_constr_1, &asn_PER_type_LTE_SL_TxPoolIdentity_r12_constr_1, LTE_SL_TxPoolIdentity_r12_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

