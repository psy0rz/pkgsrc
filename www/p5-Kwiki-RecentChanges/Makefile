# $NetBSD: Makefile,v 1.21 2015/06/12 10:52:06 wiz Exp $

DISTNAME=	Kwiki-RecentChanges-0.14
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	7
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Kwiki/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.kwiki.org/
#HOMEPAGE=	http://search.cpan.org/dist/Kwiki-Recent-Changes/
COMMENT=	Kwiki plugin to display recent changes

DEPENDS+=	p5-Kwiki>=0.37nb1:../../www/p5-Kwiki

PERL5_PACKLIST=	auto/Kwiki/RecentChanges/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
