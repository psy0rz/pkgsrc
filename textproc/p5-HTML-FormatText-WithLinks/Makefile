# $NetBSD: Makefile,v 1.4 2015/06/12 10:51:23 wiz Exp $
#

DISTNAME=	HTML-FormatText-WithLinks-0.15
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=HTML/}

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	http://search.cpan.org/~struan/HTML-FormatText-WithLinks/
COMMENT=	HTML to text conversion with links as footnotes
LICENSE=	${PERL5_LICENSE}

PERL5_MODULE_TYPE=	Module::Build
PERL5_PACKLIST=		auto/HTML/FormatText/WithLinks/.packlist
USE_LANGUAGES=		# none

DEPENDS+=	p5-URI-[0-9]*:../../www/p5-URI
DEPENDS+=	p5-HTML-Tree-[0-9]*:../../www/p5-HTML-Tree
DEPENDS+=	p5-HTML-Format-[0-9]*:../../www/p5-HTML-Format
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
