# $NetBSD: Makefile,v 1.5 2016/01/18 11:05:31 mef Exp $

DISTNAME=	File-Mork-0.4
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/S/SI/SIMONW/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/~simonw/File-Mork-0.3/
COMMENT=	Module to read Mozilla URL history files
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST= auto/File/Mork/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
