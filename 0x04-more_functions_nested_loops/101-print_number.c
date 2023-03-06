#include "main.h"

/**
 * print_number - print number
 * Return: Nothing
 * @n: an integer
 */
void print_number(int m)
{
unsigned int n;
n = m;
if (m < 0)
{
_putchar('-');
n = -m;
}

if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}
