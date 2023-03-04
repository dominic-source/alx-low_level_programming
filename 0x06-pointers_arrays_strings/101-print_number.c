#include "main.h"

/**
 * print_number - print number
 * Return: Nothing
 * @n: an integer
 */
void print_number(int n)
{
if (n < 0)
n = -n;
if (n / 10)
print_number(n / 10);
_putchar('0' + (n % 10));
}
