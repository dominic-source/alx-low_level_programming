#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: count of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list pa;
unsigned int i;
char *arg;

va_start(pa, n);
for (i = 0; i < n; i++)
{
arg = va_arg(pa, char *);
if (i != 0)
{
if (separator != NULL)
printf("%s", separator);
}
if (arg != NULL)
printf("%s", arg);
else
printf("(nil)");
}

printf("\n");
}

