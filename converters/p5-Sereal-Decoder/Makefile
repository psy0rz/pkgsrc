# $NetBSD: Makefile,v 1.6 2015/06/12 10:48:33 wiz Exp $

DISTNAME=	Sereal-Decoder-3.005
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	security perl5 converters
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../CPAN/authors/id/Y/YV/YVES/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Sereal-Decoder/
COMMENT=	Perl5 module for fast, compact, powerful binary deserialization
LICENSE=	${PERL5_LICENSE}

BUILD_DEPENDS+=	p5-Test-LongString-[0-9]*:../../devel/p5-Test-LongString
BUILD_DEPENDS+=	p5-Test-Warn-[0-9]*:../../devel/p5-Test-Warn

PERL5_PACKLIST=		auto/Sereal/Decoder/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
