# $NetBSD: Makefile,v 1.1.1.1 2015/09/11 18:43:24 bouyer Exp $
#

DISTNAME=	Geo-Ellipsoid-1.12
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Geo/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/~jgibson/Geo-Ellipsoid-1.12/lib/Geo/Ellipsoid.pm
COMMENT=	Geo::Ellipsoid - Longitude and latitude calculations using an ellipsoid model.
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=	auto/Geo/Ellipsoid/.packlist
#PERL5_MODULE_TYPE=	Module::Install::Bundled
MAKE_PARAMS+=	--skipdeps

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
