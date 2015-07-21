#include <classes.h>

#if __cplusplus
extern "C" int runsomething(Parent *ptr);
extern "C" void *downcast(Parent *ptr);
#endif

int
runsomething(Parent *ptr)
{
  return ptr->something();
}

void *
downcast(Parent *ptr)
{
  Child *n = dynamic_cast<Child *>(ptr);
  return n;
}
