# $NetBSD: Makefile,v 1.1 2015/08/06 09:34:55 wiz Exp $

DISTNAME=	inc-0.06
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:S/${MODULE_DIR}/${AUTHOR_DIR}/}
MODULE_DIR=	modules/by-module
AUTHOR_DIR=	authors/id/I/IN/INGY

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/inc/
COMMENT=	Smart @INC Processing
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=		auto/inc/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
