
#include "test_task1.h"
#include <math.h>

int test_task1(void)
{
  int a;
  int b;
  int c;

  a = 4;
  b = 3;
  c = task1(a, b);
  if (c == 7)
  {
	return (0);
  }
  return (-1);
}

