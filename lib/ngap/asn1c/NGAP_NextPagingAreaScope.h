/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_NextPagingAreaScope_H_
#define	_NGAP_NextPagingAreaScope_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_NextPagingAreaScope {
	NGAP_NextPagingAreaScope_same	= 0,
	NGAP_NextPagingAreaScope_changed	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_NextPagingAreaScope;

/* NGAP_NextPagingAreaScope */
typedef long	 NGAP_NextPagingAreaScope_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_NextPagingAreaScope_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_NextPagingAreaScope;
extern const asn_INTEGER_specifics_t asn_SPC_NextPagingAreaScope_specs_1;
asn_struct_free_f NextPagingAreaScope_free;
asn_struct_print_f NextPagingAreaScope_print;
asn_constr_check_f NextPagingAreaScope_constraint;
ber_type_decoder_f NextPagingAreaScope_decode_ber;
der_type_encoder_f NextPagingAreaScope_encode_der;
xer_type_decoder_f NextPagingAreaScope_decode_xer;
xer_type_encoder_f NextPagingAreaScope_encode_xer;
oer_type_decoder_f NextPagingAreaScope_decode_oer;
oer_type_encoder_f NextPagingAreaScope_encode_oer;
per_type_decoder_f NextPagingAreaScope_decode_uper;
per_type_encoder_f NextPagingAreaScope_encode_uper;
per_type_decoder_f NextPagingAreaScope_decode_aper;
per_type_encoder_f NextPagingAreaScope_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_NextPagingAreaScope_H_ */
#include <asn_internal.h>
