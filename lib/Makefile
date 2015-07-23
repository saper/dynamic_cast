SRCDIR=		${.CURDIR}/../common

SHLIB_MAJOR=	1

.PATH: ${SRCDIR}

LIB_CXX=		dynamic_cast

SRCS+=		\
    classes.cc \
    downcast.cc

WARNS=		9
CXXFLAGS+=	-I${SRCDIR}

.include <bsd.lib.mk>
