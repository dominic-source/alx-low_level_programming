#include "main.h"

/**
 * factorial - finds the factorial of a number
 * Return: an integer which is the result
 * @n: the argument which is factorial in search of
 */
int factorial(int n)
{
  /* base case */
if (n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
