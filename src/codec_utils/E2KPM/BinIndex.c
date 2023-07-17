/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
<<<<<<< HEAD
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
=======
<<<<<<< Updated upstream
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300.asn1"
=======
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
>>>>>>> Stashed changes
>>>>>>> 65785e7fdb2a1f778048b4a2e22e3222113b14be
 * 	`asn1c -pdu=auto -fcompound-names -fno-include-deps -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "BinIndex.h"

int
BinIndex_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65535)) {
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
static asn_oer_constraints_t asn_OER_type_BinIndex_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_BinIndex_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16,  16,  1,  65535 }	/* (1..65535,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_BinIndex_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_BinIndex = {
	"BinIndex",
	"BinIndex",
	&asn_OP_NativeInteger,
	asn_DEF_BinIndex_tags_1,
	sizeof(asn_DEF_BinIndex_tags_1)
		/sizeof(asn_DEF_BinIndex_tags_1[0]), /* 1 */
	asn_DEF_BinIndex_tags_1,	/* Same as above */
	sizeof(asn_DEF_BinIndex_tags_1)
		/sizeof(asn_DEF_BinIndex_tags_1[0]), /* 1 */
	{ &asn_OER_type_BinIndex_constr_1, &asn_PER_type_BinIndex_constr_1, BinIndex_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};
