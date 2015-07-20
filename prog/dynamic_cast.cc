#include <dlfcn.h>
#include <stdio.h>
#include <sysexits.h>

#include "classes.h"

static const char *libpath = "libdynamic_cast.so";
int
main()
{
  void *lib;
  if ((lib = dlopen(libpath, RTLD_LAZY))) {


  } else {
    perror("dlopen");
    return EX_SOFTWARE;
  }
}
