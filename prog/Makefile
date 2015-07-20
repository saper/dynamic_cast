SRCDIR=   ${.CURDIR}/../common

.PATH: ${SRCDIR}

PROG_CXX= dynamic_cast

SRCS+= \
	classes.cc \
	dynamic_cast.cc 


CFLAGS+= -I${SRCDIR}
CXXFLAGS+=	-std=c++11

WARNS= 9
.include <bsd.prog.mk>
