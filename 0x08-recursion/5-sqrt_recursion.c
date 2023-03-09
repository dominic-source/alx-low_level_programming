#include "main.h"
int _sqrt_(int n, int i);

/**
 * _sqrt_recursion - finds the square root of n
 * Return: square root of n which is int
 * @n: the values to find it square root
 */
int _sqrt_recursion(int n)
{
/* base case */
if (n <= 0)
return (-1);
return (_sqrt_(n, 1));
}
/**
 * _sqrt_ - finds the square root of n
 * Return: square root of n which is int
 * @n: the values to find it square root
 * @i: integer value
 */
int _sqrt_(int n, int i)
{
int r;
if (i * i != n && i != n)
{
r = _sqrt_(n, i + 1);
}
else if (i == n && n != 1)
return (-1);
else
return (i);
return (r);
}
