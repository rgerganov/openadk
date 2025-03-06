# This file is part of the OpenADK project. OpenADK is copyrighted
# material, please see the LICENCE file in the top-level directory.

PKG_NAME:=		uClibc-ng
ifeq ($(ADK_LIBC_VERSION),git)
PKG_VERSION:=		git
PKG_RELEASE:=		1
PKG_SITES:=		https://git.uclibc-ng.org/git/uclibc-ng.git
endif
ifeq ($(ADK_TARGET_LIB_UCLIBC_NG_1_0_14),y)
PKG_VERSION:=		1.0.14
PKG_RELEASE:=		1
PKG_SITES:=		http://downloads.uclibc-ng.org/releases/1.0.14/
PKG_HASH:=		1111b7e769f145041e9d5228241b6403c9cd69aba8875d02e4beaaab64a33821
endif
DISTFILES:=		$(PKG_NAME)-$(PKG_VERSION).tar.gz
