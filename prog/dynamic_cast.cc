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
    fprintf(stderr, "dlopen: %s\n", dlerror());
    return EX_SOFTWARE;
  }
}
