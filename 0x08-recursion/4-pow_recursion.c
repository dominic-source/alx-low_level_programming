#include "main.h"

/**
 * _pow_recursion - calculate x raised to the power of y
 * Return: the result of the calculation which is an integer
 * @x: integer argument
 * @y: second argument
 */
int _pow_recursion(int x, int y)
{
  /* base case */
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
