# $NetBSD: Makefile,v 1.22 2015/08/09 11:17:26 wiz Exp $

DISTNAME=	gource-0.40
PKGREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://gource.googlecode.com/files/

MAINTAINER=	ryoon@NetBSD.org
HOMEPAGE=	http://code.google.com/p/gource/
COMMENT=	Software version control visualization
LICENSE=	gnu-gpl-v3

GNU_CONFIGURE=	yes
USE_LANGUAGES=	c c++
USE_TOOLS+=	pkg-config

CONFIGURE_ARGS=	--with-boost=${BUILDLINK_PREFIX.boost-libs}

.include "../../devel/SDL/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../devel/pcre/buildlink3.mk"
.include "../../graphics/SDL_image/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../graphics/glm/buildlink3.mk"
.include "../../graphics/glu/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
