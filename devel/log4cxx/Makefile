# $NetBSD: Makefile,v 1.12 2018/07/18 00:06:13 joerg Exp $

DISTNAME=	apache-log4cxx-0.10.0
PKGNAME=	${DISTNAME:S/apache-//}
PKGREVISION=	6
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_APACHE:=logging/log4cxx/0.10.0/}

MAINTAINER=	reed@reedmedia.net
HOMEPAGE=	https://logging.apache.org/log4cxx/latest_stable/index.html
COMMENT=	Logging framework for C++

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake pkg-config
# c for configure
USE_LANGUAGES=	c c++03

CONFIGURE_ARGS+=	--disable-doxygen --disable-html-docs

PKGCONFIG_OVERRIDE+=	liblog4cxx.pc.in

.include "../../devel/apr/buildlink3.mk"
.include "../../devel/apr-util/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
