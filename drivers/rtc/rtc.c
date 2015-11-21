/*
 * Copyright (C) 2014 bodhi
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/*
 * Date & Time stub for no RTC
 */

#include <rtc_def.h>

int rtc_get(struct rtc_time *t)
{
	return 0;
}

int rtc_set(struct rtc_time *t)
{
	return 0;
}

void rtc_reset(void)
{
}


