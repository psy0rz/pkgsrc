# $NetBSD: Makefile,v 1.24 2015/07/12 18:56:20 wiz Exp $
#

DISTNAME=	Tree-Simple-1.25
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Tree/}
EXTRACT_SUFX=	.tgz

MAINTAINER=	rhaen@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Tree-Simple/
COMMENT=	Simple extension to manipulate tree objects
LICENSE=	${PERL5_LICENSE}

#DEPENDS+=	{perl>=5.10,p5-Scalar-List-Utils>=1.18}:../../devel/p5-Scalar-List-Utils
BUILD_DEPENDS+=	p5-Test-Exception>=0.20:../../devel/p5-Test-Exception
BUILD_DEPENDS+=	p5-Test-Version>=1.002003:../../devel/p5-Test-Version

PERL5_PACKLIST=		auto/Tree/Simple/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
