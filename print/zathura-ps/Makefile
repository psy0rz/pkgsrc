# $NetBSD: Makefile,v 1.1 2016/02/14 14:04:16 leot Exp $
#

DISTNAME=	zathura-ps-0.2.3
CATEGORIES=	print
MASTER_SITES=	http://pwmt.org/projects/zathura-ps/download/

MAINTAINER=	leot@NetBSD.org
HOMEPAGE=	http://pwmt.org/projects/zathura-ps/
COMMENT=	Add PS support to zathura using libspectre library
LICENSE=	zlib

USE_TOOLS+=	pkg-config gmake
USE_LIBTOOL=	yes

.include "../../graphics/cairo/buildlink3.mk"
.include "../../print/libspectre/buildlink3.mk"
.include "../../print/zathura/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/gtk3/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
