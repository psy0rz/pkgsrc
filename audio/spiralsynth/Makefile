# $NetBSD: Makefile,v 1.35 2015/04/25 14:20:24 tnn Exp $
#

DISTNAME=		SpiralSynth-2.0.0
PKGNAME=		spiralsynth-2.0.0
PKGREVISION=		8
CATEGORIES=		audio
MASTER_SITES=		http://www.pawfal.org/Software/SpiralSynth/dload/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://www.pawfal.org/Software/SpiralSynth/
COMMENT=		Polyphonic analogue softsynth

# only runs correctly on little-endian machines
BROKEN_EXCEPT_ON_PLATFORM=	${LITTLEENDIANPLATFORMS}

USE_LANGUAGES=		c c++
USE_TOOLS+=		gmake
GNU_CONFIGURE=		yes
MAKE_ENV+=		CXXFLAGS=${CXXFLAGS:M*:Q}
CXXFLAGS+=		-DDEVOSSAUDIO="\"${DEVOSSAUDIO}\""

INSTALLATION_DIRS=	bin

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/SpiralSynth ${DESTDIR}${PREFIX}/bin
	${INSTALL_DATA_DIR} ${DESTDIR}${PREFIX}/share/spiralsynth
	${INSTALL_DATA} ${WRKSRC}/.SpiralPatches.bank \
		${WRKSRC}/.Spiralrc ${DESTDIR}${PREFIX}/share/spiralsynth

.include "../../x11/fltk13/buildlink3.mk"
.include "../../mk/oss.buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
