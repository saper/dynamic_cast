SRCDIR=   ${.CURDIR}/../common

.PATH: ${SRCDIR}

PROG= dynamic_cast
PROG_CXX:= ${PROG}

SRCS+= \
	classes.cc \
	dynamic_cast.cc 


CFLAGS+= -I${SRCDIR}
CXXFLAGS+=	-std=c++11

WARNS= 9

.include <bsd.prog.mk>

TARGET_OSNAME ?= BSD
.if ${TARGET_OSNAME} == "Linux"
_CCLINK= ${CXX}
LDADD += -ldl
.endif

