# $NetBSD: Makefile,v 1.3 2018/03/07 11:57:48 wiz Exp $

DISTNAME=	xrx-1.0.4
PKGREVISION=	1
CATEGORIES=	net x11
MASTER_SITES=	${MASTER_SITE_XORG:=app/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://xorg.freedesktop.org/
COMMENT=	X Remote eXecution
LICENSE=	x11

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config

# XXX: Create this and enable firefox plugin in PKG_OPTIONS
#.include "options.mk"

.include "../../x11/libXaw/buildlink3.mk"
.include "../../x11/libICE/buildlink3.mk"
.include "../../x11/libXau/buildlink3.mk"
.include "../../x11/xorgproto/buildlink3.mk"
.include "../../x11/xtrans/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../devel/xorg-util-macros/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
