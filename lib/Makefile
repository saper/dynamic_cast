SRCDIR=		${.CURDIR}/../common

SHLIB_MAJOR=	1

.PATH: ${SRCDIR}

LIB=		dynamic_cast

SRCS+=		\
    classes.cc \
    downcast.cc

WARNS=		9
CFLAGS+=	-I${SRCDIR}

.include <bsd.lib.mk>
