/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/vesh/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -gen-OER -no-gen-example -D /home/vesh/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SystemInformation-BR-r13.h"

/*
 * This type is implemented using LTE_SystemInformation,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformation_BR_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformation_BR_r13 = {
	"SystemInformation-BR-r13",
	"SystemInformation-BR-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformation_BR_r13_tags_1,
	sizeof(asn_DEF_LTE_SystemInformation_BR_r13_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformation_BR_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformation_BR_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformation_BR_r13_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformation_BR_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformation_1,
	1,	/* Elements count */
	&asn_SPC_LTE_SystemInformation_specs_1	/* Additional specs */
};

