# $NetBSD: Makefile,v 1.4 2019/01/02 20:07:15 nia Exp $

DISTNAME=	libretro-reicast-20181223
CATEGORIES=	emulators
MASTER_SITES=	${MASTER_SITE_GITHUB:=libretro/}
GITHUB_PROJECT=	reicast-emulator
GITHUB_TAG=	3dd45d27159278e88a73352a318d0b23bc241a1a

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://docs.libretro.com/library/reicast/
COMMENT=	Libretro core based on the Reicast Sega Dreamcast emulator
LICENSE=	gnu-gpl-v2

EXTRACT_USING=	bsdtar
USE_TOOLS+=	gmake
USE_LANGUAGES=	c c++11

MAKE_FLAGS+=		platform=unix
MAKE_FLAGS+=		HAVE_OPENMP=0
MAKE_FLAGS+=		HAVE_LTCG=0
MAKE_FLAGS+=		SINGLE_PREC_FLAGS=1
MAKE_FLAGS+=		GIT_VERSION="-pkgsrc"
MAKE_FLAGS+=		CC_AS=${AS:Q}

.include "../../mk/bsd.prefs.mk"

.if ${MACHINE_ARCH} == "x86_64"
MAKE_FLAGS+=		WITH_DYNAREC=x86_64
.elif ${MACHINE_ARCH} == "i386"
MAKE_FLAGS+=		WITH_DYNAREC=x86
.elif !empty(MACHINE_ARCH:M*arm*)
CFLAGS+=		-marm
MAKE_FLAGS+=		WITH_DYNAREC=arm
.elif !empty(MACHINE_ARCH:M*mips*)
MAKE_FLAGS+=		WITH_DYNAREC=mips
.else
MAKE_FLAGS+=		WITH_DYNAREC=
.endif

BUILDLINK_TRANSFORM.SunOS+=	rm:-Wl,--version-script=link.T
BUILDLINK_TRANSFORM.SunOS+=	rm:-Wl,-no-undefined

INSTALLATION_DIRS+=	${PREFIX}/lib/libretro

do-install:
	${INSTALL_LIB} ${WRKSRC}/reicast_libretro.so \
	    ${DESTDIR}${PREFIX}/lib/libretro/reicast_libretro.so

.include "options.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
