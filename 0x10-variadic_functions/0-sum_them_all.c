#include <stdarg.h>

/**
 * sum_them_all - sum all the argument
 * @n: count of the variadic function
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ag;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(ag, n);
for (i = 0; i < n; i++)
sum += va_arg(ag, int);

va_end(ag);
return (sum);
}
