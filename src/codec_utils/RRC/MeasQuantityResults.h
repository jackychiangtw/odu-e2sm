/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_MeasQuantityResults_H_
#define	_MeasQuantityResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include "SINR-Range.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasQuantityResults */
typedef struct MeasQuantityResults {
	RSRP_Range_t	*rsrp;	/* OPTIONAL */
	RSRQ_Range_t	*rsrq;	/* OPTIONAL */
	SINR_Range_t	*sinr;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasQuantityResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasQuantityResults;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasQuantityResults_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasQuantityResults_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasQuantityResults_H_ */
#include <asn_internal.h>
