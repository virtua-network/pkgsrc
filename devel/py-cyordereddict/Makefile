# $NetBSD: Makefile,v 1.4 2018/09/26 01:11:19 minskim Exp $

DISTNAME=	cyordereddict-1.0.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_PYPI:=c/cyordereddict/}

MAINTAINER=	minskim@NetBSD.org
HOMEPAGE=	https://github.com/shoyer/cyordereddict
COMMENT=	Cython implementation of Python's collections.OrderedDict
LICENSE=	mit

USE_LANGUAGES=	c

# python>=3.5 has OrderedDict written in C
PYTHON_VERSIONS_ACCEPTED=	27 34

.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
