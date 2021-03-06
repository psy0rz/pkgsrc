# $NetBSD: Makefile,v 1.14 2016/02/23 15:07:36 joerg Exp $

.include "dist.mk"

PKGNAME=	python34-${PY_DISTVERSION}
PKGREVISION=	2
CATEGORIES=	lang python

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.python.org/
COMMENT=	Interpreted, interactive, object-oriented programming language
LICENSE=	python-software-foundation

CONFLICTS+=	python-[0-9]*

PLIST_AWK+=		-f ${PKGSRCDIR}/lang/python/plist-python.awk
PLIST_AWK_ENV+=		PYVERS=34
PRINT_PLIST_AWK+=	/^[^@]/ && /[^\/]+\.py[co]$$/ {
PRINT_PLIST_AWK+=	gsub(/__pycache__\//, "")
PRINT_PLIST_AWK+=	gsub(/\.cpython-34/, "")}

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--with-threads
CONFIGURE_ARGS+=	--enable-shared
CONFIGURE_ARGS+=	OPT=${CFLAGS:M*:Q}
CONFIGURE_ARGS+=	--with-system-ffi
CONFIGURE_ARGS+=	--without-pymalloc
CONFIGURE_ARGS+=	--without-ensurepip
CONFIGURE_ENV+=		ac_cv_path_mkdir=${TOOLS_PATH.mkdir}

PKGCONFIG_OVERRIDE+=	Misc/python.pc.in

USE_LANGUAGES=		c c++

PTHREAD_OPTS+=	require
.include "../../mk/pthread.buildlink3.mk"

.include "../../mk/bsd.prefs.mk"

# http://bugs.python.org/issue13241
.if !empty(MACHINE_PLATFORM:MDarwin-10.*)
PKGSRC_COMPILER=	clang
PKG_CC=			clang
PKG_CXX=		clang++
.endif

# fdatasync()
LIBS.SunOS+=		-lrt

PY_VER_SUFFIX=		3.4

.if ${OPSYS} == "Darwin"
PY_PLATNAME=	${LOWER_OPSYS}
USE_TOOLS+=	gmake
.elif ${OPSYS} == "IRIX"
PY_PLATNAME=	${LOWER_OPSYS:C/\..*//}
.elif ${OPSYS} == "SunOS"
PY_PLATNAME=	sunos${OS_VERSION:C/\..*//}
.elif ${OPSYS} == "HPUX"
PY_PLATNAME=	hp-ux11
.elif ${OPSYS} == "Linux"
PY_PLATNAME=	linux
.else
PY_PLATNAME=	${LOWER_OPSYS}${OS_VERSION:C/\..*//}
.endif
PLIST_SUBST+=	PY_PLATNAME=${PY_PLATNAME:Q}

# ossaudiodev is only available on x86 for the following platforms
PLIST_VARS+=	oss
.if (${MACHINE_ARCH} == "i386" || ${MACHINE_ARCH} == "x86_64") && \
    (${PY_PLATNAME} == "linux" || ${OPSYS} == "FreeBSD")
PLIST.oss=	yes
.endif

# For Xcode 5 and up, we need to search the SDK path for headers, otherwise
# certain modules will not be built.
.if ${OPSYS} == "Darwin" && exists(${OSX_SDK_PATH:Q}/usr/include)
CFLAGS+=		-I${OSX_SDK_PATH:Q}/usr/include
.endif

PLIST_VARS+=	bsddb dll nis no-nis
.if ${OPSYS} == "IRIX"
.  if ${ABI} == "64"
PLIST.no-nis=	yes
.  else
PLIST.nis=	yes
.  endif
.else
.  include "../../mk/bdb.buildlink3.mk"
MAKE_ENV+=	PY_BDB_TYPE=${BDB_TYPE}
MAKE_ENV+=	PY_BDB_INCDIRS=${BUILDLINK_INCDIRS.${BDB_TYPE}:S,^,${BDBBASE}/,:Q}
MAKE_ENV+=	PY_BDB_LIBDIRS=${BDBBASE}/lib
PLIST.bsddb=	yes
PLIST.dll=	yes
.  if ${OPSYS} != "NetBSD" || exists(/usr/bin/ypcat)
PLIST.nis=	yes
.  else
PLIST.no-nis=	yes
.  endif
.endif

.if defined(BUILDLINK_TRANSFORM)
MAKE_ENV+=	PY_BDB_TRANSFORM=${BUILDLINK_TRANSFORM:Q}
.endif

PLIST_SUBST+=	PY_VER_SUFFIX=${PY_VER_SUFFIX:Q}

PRINT_PLIST_AWK+=	{ gsub(/${PY_PLATNAME}/, "$${PY_PLATNAME}") }
PRINT_PLIST_AWK+=	{ gsub(/python${PY_VER_SUFFIX}/, \
				"python$${PY_VER_SUFFIX}") }

TEST_TARGET=	test
INSTALL_TARGET=	altinstall

REPLACE_INTERPRETER+=	py34
REPLACE.py34.old=	.*python[^ ]*
REPLACE.py34.new=	${PREFIX}/bin/python${PY_VER_SUFFIX}
REPLACE_FILES.py34=	Lib/*.py Lib/*/*.py Lib/*/*/*.py Lib/*/*/*/*.py

SUBST_CLASSES+=		findlib
SUBST_MESSAGE.findlib=	Fixing find_library_file on Darwin.
SUBST_STAGE.findlib=	pre-configure
SUBST_FILES.findlib=	Lib/distutils/unixccompiler.py
SUBST_SED.findlib=	-e 's,/usr/local,${PREFIX},'

SUBST_CLASSES+=		sslbase
SUBST_MESSAGE.sslbase=	Fixing OpenSSL base directory to find header file.
SUBST_STAGE.sslbase=	pre-configure
SUBST_FILES.sslbase=	setup.py
SUBST_VARS.sslbase=	SSLBASE

CHECK_INTERPRETER_SKIP=	lib/python${PY_VER_SUFFIX}/venv/scripts/posix/pydoc

.if ${OPSYS} == "HPUX"
post-install:
	${LN} -fs ${DESTDIR}${PREFIX}/lib/libpython3.4.sl \
		${DESTDIR}${PREFIX}/lib/libpython3.4.sl.1.0
.endif

BUILDLINK_DEPMETHOD.readline=		build

.include "../../archivers/bzip2/buildlink3.mk"
.include "../../archivers/xz/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/libffi/buildlink3.mk"
.include "../../devel/readline/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../mk/dlopen.buildlink3.mk"
.include "../../mk/oss.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
