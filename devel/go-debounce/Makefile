# $NetBSD: Makefile,v 1.3 2018/12/19 15:47:03 bsiegert Exp $

DISTNAME=	debounce-1.1.0
PKGNAME=	go-${DISTNAME}
PKGREVISION=	2
MASTER_SITES=	${MASTER_SITE_GITHUB:=bep/}
CATEGORIES=	devel
GITHUB_PROJECT=	${PKGBASE:S/^go-//}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	minskim@NetBSD.org
HOMEPAGE=	https://github.com/bep/debounce
COMMENT=	Debouncer written in Go
LICENSE=	mit

GO_DIST_BASE=	${DISTNAME}
GO_SRCPATH=	${HOMEPAGE:S,https://,,}

.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
