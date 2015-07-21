#include <dlfcn.h>
#include <stdio.h>
#include <sysexits.h>

#include "classes.h"

static const char *libpath = "libdynamic_cast.so";
int
main()
{
  void *lib, *sym;
  Parent obj1 = Parent();
  Child  obj2 = Child();
  Parent *objptr1 = &obj1;
  Parent *objptr2 = &obj2;
  if ((lib = dlopen(libpath, RTLD_LAZY))) {
    if ((sym = dlsym(lib, "runsomething"))) {
      printf("Parent::something() = %d\n", (*(int(*)(Parent *))sym)(objptr1));
      printf("Child::something() = %d\n", (*(int(*)(Parent *))sym)(objptr2));
    } else {
      fprintf(stderr, "dlsym(\"runsomething\"): %s\n", dlerror());
      return EX_SOFTWARE;
    }
    if ((sym = dlsym(lib, "downcast"))) {
      printf("library dynamic_cast<Child *>(Parent *) = %p\n",
            (*(void *(*)(Parent *))sym)(objptr1));
      printf("library dynamic_cast<Child *>(Child *) = %p\n",
            (*(void *(*)(Parent *))sym)(objptr2));
      printf("local dynamic_cast<Child *>(Parent *) = %p\n",
            dynamic_cast<Child *>(objptr1));
      printf("local dynamic_cast<Child *>(Child *) = %p\n",
            dynamic_cast<Child *>(objptr2));
    } else {
      fprintf(stderr, "dlsym(\"downcast\"): %s\n", dlerror());
      return EX_SOFTWARE;
    }
    return 0;
  } else {
    fprintf(stderr, "dlopen: %s\n", dlerror());
    return EX_SOFTWARE;
  }
}
