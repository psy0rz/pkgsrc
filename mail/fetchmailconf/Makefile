# $NetBSD: Makefile,v 1.92 2015/12/05 21:25:48 adam Exp $

DISTNAME=	fetchmail-6.3.22
PKGNAME=	${DISTNAME:S/fetchmail/fetchmailconf/}
PKGREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	http://download.berlios.de/fetchmail/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://fetchmail.berlios.de/
COMMENT=	Configuration tool for fetchmail

DEPENDS+=	${DISTNAME}{,nb*}:../../mail/fetchmail
DEPENDS+=	${PYPKGPREFIX}-Tk-[0-9]*:../../x11/py-Tk

NO_BUILD=	YES

DISTINFO_FILE=		${.CURDIR}/../../mail/fetchmail/distinfo
PATCHDIR=		${.CURDIR}/../../mail/fetchmail/patches

USE_PKGLOCALEDIR=	yes
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--without-hesiod
LDFLAGS+=		${CFLAGS}
USE_TOOLS+=		msgfmt tbl
USE_LANGUAGES+=		c

INSTALLATION_DIRS=	bin ${PKGMANDIR}/man1
INSTALL_TARGET=		install-pythonPYTHON

PLIST_SUBST+=		PYSITELIB=${PYSITELIB}
REPLACE_PYTHON=	fetchmailconf.py
PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35 # not yet ported as of 6.3.22

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/fetchmailconf.py ${DESTDIR}${PREFIX}/bin/fetchmailconf
	${LN} -s fetchmail.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/fetchmailconf.1

.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
