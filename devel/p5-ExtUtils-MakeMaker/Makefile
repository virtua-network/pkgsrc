# $NetBSD: Makefile,v 1.50 2018/08/22 09:43:58 wiz Exp $

DISTNAME=	ExtUtils-MakeMaker-7.34
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/B/BI/BINGOS/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://metacpan.org/release/ExtUtils-MakeMaker
COMMENT=	Create a module Makefile
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-ExtUtils-Manifest>=1.65:../../devel/p5-ExtUtils-Manifest
DEPENDS+=	p5-CPAN-Meta-Requirements>=2.127:../../devel/p5-CPAN-Meta-Requirements

PERL5_PACKLIST=	auto/ExtUtils/MakeMaker/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
