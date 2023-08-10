/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_GNB_CUSystemInformation_H_
#define	_GNB_CUSystemInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;
struct SibtypetobeupdatedListItem;

/* GNB-CUSystemInformation */
typedef struct GNB_CUSystemInformation {
	struct GNB_CUSystemInformation__sibtypetobeupdatedlist {
		A_SEQUENCE_OF(struct SibtypetobeupdatedListItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sibtypetobeupdatedlist;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNB_CUSystemInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNB_CUSystemInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _GNB_CUSystemInformation_H_ */
#include <asn_internal.h>
