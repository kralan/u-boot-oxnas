# (C) Copyright 2015 bodhi <mibodhi@gmail.com>
#
# Based on
# (C) Copyright 2000, 2001, 2002
# Wolfgang Denk, DENX Software Engineering, wd@denx.de.
#
# SPDX-License-Identifier:	GPL-2.0+
#

obj-y := ox820.o

ifeq ($(CONFIG_SPL_BUILD),y)
	obj-y	+= spl_start.o
	obj-y	+= ddr.o
else
	obj-y	+= lowlevel_init.o
endif
