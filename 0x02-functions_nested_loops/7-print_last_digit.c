#include "main.h"

/**
 * print_last_digit - print the last digit
 * Description: A function that prints the last digit of a number
 * Return: 0
 * @c: function argument
 */
int print_last_digit(int c)
{
if (c < 0)
{
_putchar('0' + ((c * -1) % 10));
return ((c * -1) % 10);
}
else
{
_putchar('0' + (c % 10));
return (c % 10);
}
}
