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
if (va_arg(pa, char *) == NULL)
{
printf("(nil)");
printf("\n");
return;
}
va_end(pa);

va_start(pa, n);
for (i = 0; i < n; i++)
{
arg = va_arg(pa, char *);
if (i != 0)
{
if (separator != NULL)
printf("%s", separator);
}
printf("%s", arg);
}

printf("\n");
}

