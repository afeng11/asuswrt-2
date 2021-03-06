/*
 * WPS aplockdown
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
 * $Id: wps_aplockdown.h 525052 2015-01-08 20:18:35Z $
 */

#ifndef __WPS_APLOCKDOWN_H__
#define __WPS_APLOCKDOWN_H__

int wps_aplockdown_init();
int wps_aplockdown_add(void);
int wps_aplockdown_check(void);
int wps_aplockdown_islocked();
int wps_aplockdown_cleanup();
#endif	/* __WPS_APLOCKDOWN_H__ */
