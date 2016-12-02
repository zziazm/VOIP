/*
 * SNMPStats Module  - Network Statistics
 *
 * Kamailio Server Net objects addition
 * Copyright (C) 2013 Edvina AB, Sollentuna, Sweden
 * Written by Olle E. Johansson
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * Kamailio is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 * USA
 *
 * Note: this file originally auto-generated by mib2c 
 *
 */
/*!
 *\file
 * \brief SNMP network statistics
 * This file groups together alarm checking and handling
 * \ingroup snmpstats
 * - Module: \ref snmpstats
 * \author oej
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "kamailioNetConfig.h"

#include "snmpstats_globals.h"
#include "utilities.h"
#include "../../lib/kcore/statistics.h"
#include "../../globals.h"
#include "../../cfg_core.h"

/* Net-snmp version 5.6 defines oid's as const */
#define CONST

/** Initializes the kamailioNetConfig module */
void
init_kamailioNetConfig(void)
{
    CONST oid kamailioNetConfUdpTransport_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,1 };
    CONST oid kamailioNetConfUdpDtlsTransport_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,2 };
    CONST oid kamailioNetConfTcpTransport_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,3 };
    CONST oid kamailioNetConfTcpTlsTransport_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,4 };
    CONST oid kamailioNetConfSctpTransport_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,5 };
    CONST oid kamailioNetConfSctpTlsTransport_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,6 };
    CONST oid kamailioNetConfWsTransport_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,7 };
    CONST oid kamailioNetConfWsTlsTransport_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,8 };
    CONST oid kamailioNetConfHttpServer_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,9 };
    CONST oid kamailioNetConfMsrpRelay_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,10 };
    CONST oid kamailioNetConfStunServer_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,11 };
    CONST oid kamailioNetConfOutbound_oid[] = { 1,3,6,1,4,1,34352,3,1,3,1,4,4,12 };

  DEBUGMSGTL(("kamailioNetConfig", "Initializing\n"));

    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfUdpTransport", handle_kamailioNetConfUdpTransport,
                               kamailioNetConfUdpTransport_oid, OID_LENGTH(kamailioNetConfUdpTransport_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfUdpDtlsTransport", handle_kamailioNetConfUdpDtlsTransport,
                               kamailioNetConfUdpDtlsTransport_oid, OID_LENGTH(kamailioNetConfUdpDtlsTransport_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfTcpTransport", handle_kamailioNetConfTcpTransport,
                               kamailioNetConfTcpTransport_oid, OID_LENGTH(kamailioNetConfTcpTransport_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfTcpTlsTransport", handle_kamailioNetConfTcpTlsTransport,
                               kamailioNetConfTcpTlsTransport_oid, OID_LENGTH(kamailioNetConfTcpTlsTransport_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfSctpTransport", handle_kamailioNetConfSctpTransport,
                               kamailioNetConfSctpTransport_oid, OID_LENGTH(kamailioNetConfSctpTransport_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfSctpTlsTransport", handle_kamailioNetConfSctpTlsTransport,
                               kamailioNetConfSctpTlsTransport_oid, OID_LENGTH(kamailioNetConfSctpTlsTransport_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfWsTransport", handle_kamailioNetConfWsTransport,
                               kamailioNetConfWsTransport_oid, OID_LENGTH(kamailioNetConfWsTransport_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfWsTlsTransport", handle_kamailioNetConfWsTlsTransport,
                               kamailioNetConfWsTlsTransport_oid, OID_LENGTH(kamailioNetConfWsTlsTransport_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfHttpServer", handle_kamailioNetConfHttpServer,
                               kamailioNetConfHttpServer_oid, OID_LENGTH(kamailioNetConfHttpServer_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfMsrpRelay", handle_kamailioNetConfMsrpRelay,
                               kamailioNetConfMsrpRelay_oid, OID_LENGTH(kamailioNetConfMsrpRelay_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfStunServer", handle_kamailioNetConfStunServer,
                               kamailioNetConfStunServer_oid, OID_LENGTH(kamailioNetConfStunServer_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("kamailioNetConfOutbound", handle_kamailioNetConfOutbound,
                               kamailioNetConfOutbound_oid, OID_LENGTH(kamailioNetConfOutbound_oid),
                               HANDLER_CAN_RONLY
        ));
}

int handle_kamailioNetConfUdpTransport(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int value = 1;	/* By default, implemented */

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER,
			(u_char *) &value, sizeof(int));
            break;


        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfUdpTransport\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfUdpDtlsTransport(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{

	/* Note: This transport is not supported in Kamailio. This OID is just a place holder
		for future work. 
	*/
    int value = -1;	/* Not implemented */

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER,
			(u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfUdpDtlsTransport\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfTcpTransport(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int value = 0;	/* Not implemented */

#ifdef USE_TCP
	if (!tcp_disable) {
		value = 1;
	}
#endif

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfTcpTransport\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfTcpTlsTransport(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int value = 0;

#ifdef USE_TCP
	if (!tcp_disable) {
#ifdef USE_TLS
		if (module_loaded("tls")) {
			value = 1;
		}
#endif
		;	/* Empty statement needed here */
	}
#endif

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfTcpTlsTransport\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfSctpTransport(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int value = 0;
	/* At this point I'm lazy and just check if the transport is compiled. */
#ifdef USE_SCTP
	value = 1;
#endif

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfSctpTransport\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfSctpTlsTransport(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int value = -1;	/* Not implemented */

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfSctpTlsTransport\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfWsTransport(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int value = -1;	/* Not implemented */
    if (module_loaded("tls"))  {
	value = 1;
    }

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfWsTransport\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfWsTlsTransport(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    	int value = 0;
	unsigned int type;

	if (module_loaded("websocket")) {
		value = snmp_cfg_get_int("websocket", "enabled", &type);
		if (type != CFG_VAR_INT) {
			value = 0;
		}
	}

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfWsTlsTransport\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfHttpServer(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int value = 0;
    if (module_loaded("xhttp"))  {
	value = 1;
    }

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfHttpServer\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfMsrpRelay(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int value = 0;
    if (module_loaded("msrp"))  {
	value = 1;
    }

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfMsrpRelay\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfStunServer(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int value = 0;
    if (module_loaded("stun"))  {
	value = 1;
    }

    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfStunServer\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int handle_kamailioNetConfOutbound(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
	int value = 0;	/* Not implemented */
	unsigned int type;
	
	if (module_loaded("outbound")) {
		value = snmp_cfg_get_int("outbound", "outbound_enabled", &type);
		if (type != CFG_VAR_INT) {
			value = 0;
		}
	}

	switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER, (u_char *) &value, sizeof(int));
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_kamailioNetConfOutbound\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
	}

	return SNMP_ERR_NOERROR;
}
