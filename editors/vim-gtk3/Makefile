# $NetBSD: Makefile,v 1.12 2018/11/14 22:21:24 kleink Exp $

PKGNAME=	vim-gtk3-${VIM_VERSION}.${VIM_PATCHLEVEL}
PKGREVISION=	2

COMMENT=	Vim editor (vi clone) with X11 GTK3 GUI

PKG_SUPPORTED_OPTIONS+=	gnome

.include		"../../editors/vim-share/Makefile.common"


DEPENDS+=		vim-share-${VIM_VERSION}.${VIM_PATCHLEVEL}{,nb*}:../../editors/vim-share
CONFLICTS+=		vim-[0-9]* vim-gtk-[0-9]* vim-motif-[0-9]* vim-gtk2-[0-9]*
CONFLICTS+=		vim-xaw-[0-9]* vim-kde-[0-9]*

CONFIGURE_ARGS+=	--with-tlib=${BUILDLINK_LIBNAME.termcap}

CONFIGURE_ARGS+=	--enable-gui=gtk3

USE_TOOLS+=		pkg-config

BUILD_TARGET=		vim
INSTALL_TARGET=		installvimbin

INSTALLATION_DIRS+=	${PKGMANDIR}/man1

CHECK_INTERPRETER_SKIP+=${PKGMANDIR}/man1/gvim.1 ${PKGMANDIR}/man1/gview.1
CHECK_INTERPRETER_SKIP+=${PKGMANDIR}/man1/rgvim.1 ${PKGMANDIR}/man1/rgview.1

post-install:
.for f in gvim.1 gview.1 rgvim.1 rgview.1
	${RM} -f ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/${f}
	${LN} -s vim.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/${f}
.endfor
.for f in gvim gview rgvim rgview rvim rview
	${RM} -f ${DESTDIR}${PREFIX}/bin/${f}
	${LN} -s vim ${DESTDIR}${PREFIX}/bin/${f}
.endfor

.include "../../converters/libiconv/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../x11/libXpm/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"

.include "../../mk/termcap.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
