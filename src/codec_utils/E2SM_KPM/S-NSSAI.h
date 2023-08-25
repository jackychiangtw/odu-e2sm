/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "../../ASN1_Input/E2SM_KPM_V_3_0.asn1"
 * 	`asn1c -D ./../../E2_output/E2SM_KPM_v3.0_output -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_S_NSSAI_H_
#define	_S_NSSAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SST.h"
#include "SD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S-NSSAI */
typedef struct S_NSSAI {
	SST_t	 sST;
	SD_t	*sD;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S_NSSAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S_NSSAI;
extern asn_SEQUENCE_specifics_t asn_SPC_S_NSSAI_specs_1;
extern asn_TYPE_member_t asn_MBR_S_NSSAI_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _S_NSSAI_H_ */
#include <asn_internal.h>