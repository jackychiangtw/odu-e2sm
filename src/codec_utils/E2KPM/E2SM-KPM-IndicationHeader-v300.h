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

#ifndef	_E2SM_KPM_IndicationHeader_v300_H_
#define	_E2SM_KPM_IndicationHeader_v300_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2SM_KPM_IndicationHeader_v300__indicationHeader_formats_PR {
	E2SM_KPM_IndicationHeader_v300__indicationHeader_formats_PR_NOTHING,	/* No components present */
	E2SM_KPM_IndicationHeader_v300__indicationHeader_formats_PR_indicationHeader_Format1
	/* Extensions may appear below */
	
} E2SM_KPM_IndicationHeader_v300__indicationHeader_formats_PR;

/* Forward declarations */
struct E2SM_KPM_IndicationHeader_Format1_v300;

/* E2SM-KPM-IndicationHeader-v300 */
typedef struct E2SM_KPM_IndicationHeader_v300 {
	struct E2SM_KPM_IndicationHeader_v300__indicationHeader_formats {
		E2SM_KPM_IndicationHeader_v300__indicationHeader_formats_PR present;
		union E2SM_KPM_IndicationHeader_v300__indicationHeader_formats_u {
			struct E2SM_KPM_IndicationHeader_Format1_v300	*indicationHeader_Format1;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} indicationHeader_formats;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_IndicationHeader_v300_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_IndicationHeader_v300;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_IndicationHeader_v300_H_ */
#include <asn_internal.h>