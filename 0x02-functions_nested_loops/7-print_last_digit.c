#include "main.h"

/**
 * print_last_digit - print the last digit
 * Description: A function that prints the last digit of a number
 * Return: 0
 * @c: function argument
 */
int print_last_digit(int c)
{
_putchar('0' + (c % 10));
return (c % 10);
}
