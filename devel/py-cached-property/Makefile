# $NetBSD: Makefile,v 1.3 2015/12/05 21:25:36 adam Exp $

DISTNAME=	cached-property-1.2.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_PYPI:=c/cached-property/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/pydanny/cached-property
COMMENT=	Cached-property for decorating methods in classes
LICENSE=	modified-bsd

USE_LANGUAGES=	# none

# UnicodeDecodeError: 'ascii' codec can't decode byte 0xe2 in position 561: ordinal not in range(128)
PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35 # as of 1.2.0

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
