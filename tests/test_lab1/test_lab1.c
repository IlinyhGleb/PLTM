
#include "main.h"

/**
 * test_lab1 - Test lab1
 *
 * Return: 0 on success, -1 on failure
 */
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
