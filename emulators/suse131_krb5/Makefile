# $NetBSD: Makefile,v 1.7 2015/07/28 08:49:14 wiz Exp $

PKGNAME=	suse_krb5-${SUSE_VERSION}
PKGREVISION=	3
CATEGORIES=	emulators
RPMUPDPKGS+=	krb5-1.11.3-3.18.1.${SUSE_ARCH}
RPMUPDPKGS+=	libcom_err2-1.42.8-2.8.1.${SUSE_ARCH}
RPMPKGS+=	libkeyutils1-1.5.5-6.1.3.${SUSE_ARCH}

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Linux compatibility package for kerberos libraries

EMUL_MODULES.linux=	base

.include "../../emulators/suse131_linux/Makefile.common"
.include "../../mk/bsd.pkg.mk"
