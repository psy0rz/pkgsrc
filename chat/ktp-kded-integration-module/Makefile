# $NetBSD: Makefile,v 1.2 2016/01/28 15:26:41 joerg Exp $

.include "../../meta-pkgs/kde-telepathy/Makefile.common"
DISTNAME=	ktp-kded-integration-module-${KTP_VERSION}
CATEGORIES=	chat kde
MASTER_SITES=	${MASTER_SITE_KDE:=kde-telepathy/${KTP_VERSION}/src/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	jaapb@NetBSD.org
HOMEPAGE=	http://community.kde.org/KTp
COMMENT=	KDE Telepathy integration into KDE workspaces
LICENSE=	gnu-lgpl-v2.1

USE_LANGUAGES=	c c++

BUILD_DEPENDS+=	automoc4>=0.9.87:../../devel/automoc4

.include "../../chat/ktp-common-internals/buildlink3.mk"
.include "../../meta-pkgs/kde4/kde4.mk"
.include "../../mk/bsd.pkg.mk"
