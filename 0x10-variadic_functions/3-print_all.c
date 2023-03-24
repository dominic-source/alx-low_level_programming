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
int i = 0, j = 0;
char *s = "";
char *v;

while (format != NULL && j == 0)
{
va_start(arg, format);

while (format[i] != '\0')
{
if (format[i + 1] != '\0')
s = ", ";

switch (format[i])
{
case 'c':
printf("%c%s", (char)va_arg(arg, int), s);
s = "";
break;
case 'i':
printf("%i%s", va_arg(arg, int), s);
s = "";
break;
case 'f':
printf("%f%s", (float)va_arg(arg, double), s);
s = "";
break;
case 's':
v = va_arg(arg, char *);
if (v == NULL)
{
printf("(nil)%s", s);
s = "";
break;
}
printf("%s%s", v, s);
s = "";
break;
default:
s = "";
break;
}
i++;
}
printf("\n");
j++;
}
}
