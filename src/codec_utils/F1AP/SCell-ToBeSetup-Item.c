/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "SCell-ToBeSetup-Item.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_SCell_ToBeSetup_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCell_ToBeSetup_Item, sCell_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCell-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SCell_ToBeSetup_Item, sCellIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellIndex"
		},
	{ ATF_POINTER, 2, offsetof(struct SCell_ToBeSetup_Item, sCellULConfigured),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellULConfigured,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellULConfigured"
		},
	{ ATF_POINTER, 1, offsetof(struct SCell_ToBeSetup_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_4624P85,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_SCell_ToBeSetup_Item_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_SCell_ToBeSetup_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCell_ToBeSetup_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCell-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sCellIndex */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sCellULConfigured */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SCell_ToBeSetup_Item_specs_1 = {
	sizeof(struct SCell_ToBeSetup_Item),
	offsetof(struct SCell_ToBeSetup_Item, _asn_ctx),
	asn_MAP_SCell_ToBeSetup_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SCell_ToBeSetup_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCell_ToBeSetup_Item = {
	"SCell-ToBeSetup-Item",
	"SCell-ToBeSetup-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_SCell_ToBeSetup_Item_tags_1,
	sizeof(asn_DEF_SCell_ToBeSetup_Item_tags_1)
		/sizeof(asn_DEF_SCell_ToBeSetup_Item_tags_1[0]), /* 1 */
	asn_DEF_SCell_ToBeSetup_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCell_ToBeSetup_Item_tags_1)
		/sizeof(asn_DEF_SCell_ToBeSetup_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCell_ToBeSetup_Item_1,
	4,	/* Elements count */
	&asn_SPC_SCell_ToBeSetup_Item_specs_1	/* Additional specs */
};

