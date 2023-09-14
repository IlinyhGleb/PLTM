
#include "test_lab1.h"
#include <math.h>

int test_task2(void)
{
  const double EPSILON = 1e-4;

  float a = 5;
  float b = 4;
  float c = 8;
  float x;

  x = task2(a, b, c);
  if (fabs(x - 0.8) <= EPSILON)
  {
	return (0);
  }
  return (-1);
}

