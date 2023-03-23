#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all argument
 * @format: format of the argument
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list arg;
int i = 0;
char *s = "";

va_start(arg, format);

while (format[i] != '\0')
{
if (i != 0)
s = ", ";

switch (format[i])
{
case 'c':
printf("%s%c", s, (char)va_arg(arg, int));
break;
case 'i':
printf("%s%i", s, va_arg(arg, int));
break;
case 'f':
printf("%s%f", s, (float)va_arg(arg, double));
break;
case 's':
printf("%s%s", s, va_arg(arg, char *));
break;
}
i++;
}
printf("\n");

}
