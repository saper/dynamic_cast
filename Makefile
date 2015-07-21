SUBDIR=lib prog

run::
	/usr/bin/env LD_LIBRARY_PATH=${.OBJDIR}/lib ${.OBJDIR}/prog/dynamic_cast

.include <bsd.subdir.mk>
