# $NetBSD: Makefile,v 1.19 2016/01/10 19:49:48 markd Exp $

DISTNAME=	kolf-${_KDE_VERSION}
PKGREVISION=	3
CATEGORIES=	games
COMMENT=	a miniature golf game for KDE

.include "../../meta-pkgs/kde4/Makefile.kde4"

.include "../../meta-pkgs/kde4/kde4.mk"

.include "../../games/libkdegames/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/kdelibs4/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
