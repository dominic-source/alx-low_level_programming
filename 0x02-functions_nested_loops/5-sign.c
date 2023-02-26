#include "main.h"

/**
 * print_sign - Print the sign of a digit
 * Description: Print the sign of any digit it recieves
 * Return: 0
 * @n: an integer
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
