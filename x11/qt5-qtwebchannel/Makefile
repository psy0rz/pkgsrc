# $NetBSD: Makefile,v 1.8 2016/03/02 23:04:01 ryoon Exp $

DISTNAME=	qtwebchannel-opensource-src-${QTVERSION}
PKGNAME=	qt5-qtwebchannel-${QTVERSION}
PKGREVISION=	1
COMMENT=	Qt5 WebChannel module

MAKE_ENV+=		QTDIR=${QTDIR}
INSTALL_ENV+=		INSTALL_ROOT=${DESTDIR}
INSTALLATION_DIRS+=	lib/pkgconfig

.include "../../x11/qt5-qtbase/Makefile.common"

post-install:
.for i in Qt5WebChannel.pc
	cd ${DESTDIR}${PREFIX}/lib/pkgconfig && \
		ln -f -s ${QTPREFIX}/lib/pkgconfig/${i} ${i}
.endfor

.include "../../x11/qt5-qtdeclarative/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
