/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_PDUSessionResourceSetupRequestTransfer_H_
#define	_NGAP_PDUSessionResourceSetupRequestTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_BitRate.h"
#include "NGAP_UPTransportLayerInformation.h"
#include "NGAP_DataForwardingNotPossible.h"
#include "NGAP_PDUSessionType.h"
#include "NGAP_QosFlowSetupRequestList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_UPTransportLayerInformation;
struct NGAP_SecurityIndication;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_PDUSessionResourceSetupRequestTransfer */
typedef struct NGAP_PDUSessionResourceSetupRequestTransfer {
	NGAP_BitRate_t	 pDUSessionAggregateMaximumBitRate;
	NGAP_UPTransportLayerInformation_t	 uL_NGU_UP_TNLInformation;
	struct NGAP_UPTransportLayerInformation	*additionalUL_NGU_UP_TNLInformation;	/* OPTIONAL */
	NGAP_DataForwardingNotPossible_t	*dataForwardingNotPossible;	/* OPTIONAL */
	NGAP_PDUSessionType_t	 pDUSessionType;
	struct NGAP_SecurityIndication	*securityIndication;	/* OPTIONAL */
	NGAP_QosFlowSetupRequestList_t	 qosFlowSetupRequestList;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionResourceSetupRequestTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceSetupRequestTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionResourceSetupRequestTransfer_H_ */
#include <asn_internal.h>
