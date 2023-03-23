#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers from variadic function
 * @separator: a separator for printing
 * @n: number of integers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ag;
unsigned int i;

va_start(ag, n);
for (i = 0; i < n; i++)
{
if (i != 0)
{
if (separator != NULL)
printf("%s", separator);
}

printf("%i", va_arg(ag, int));

}
printf("\n");

va_end(ag);
}
