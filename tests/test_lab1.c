
#include "main.h"
#include "../labs/lab1.h"

/**
 * test_lab1 - Test lab1
 *
 * Return: 0 on success, -1 on failure
 */
int test_lab1(void)
{
  int a;
  int b;
  int c;

  a = 4;
  b = 3;
  c = lab1(a, b);
  if (c == 7) 
  {
	return (0);
  }
  return (-1);
}
