/*
 * WPS Enrollee OS layer
 *
 * Broadcom Proprietary and Confidential. Copyright (C) 2016,
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom.
 *
 *
 * <<Broadcom-WL-IPTag/Proprietary:>>
 *
 * $Id: wps_enr_osl.h 525052 2015-01-08 20:18:35Z $
 */

#ifndef __OSL_H__
#define __OSL_H__

/* Opaque types */
struct _wps_credentials;

int wps_osl_get_ifname(char *ifname);
int wps_osl_set_ifname(char *ifname);
int wps_osl_get_mac(uint8 *mac);
int wps_osl_init(char *);
void wps_osl_deinit(void);
void wps_osl_cleanup(void);
unsigned long get_current_time(void);
uint32 wpsenr_eapol_validate(char* buf, uint32* len);
uint32 wait_for_eapol_packet(char* buf, uint32* len, uint32 timeout);
uint32 send_eapol_packet(char *packet, uint32 len);

uint32 poll_eapol_packet(char *buf, uint32 *len);
bool wps_osl_create_profile(const struct _wps_credentials *credentials);


#endif /* __OSL_H__ */
