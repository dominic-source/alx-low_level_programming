#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all argument
 * @format: format of the argument
 */
void print_all(const char * const format, ...)
{
va_list arg;
int i = -1, j = 0, k = 0;
char *s = "", *v, f;
while (format != NULL && j++ == 0)
{
va_start(arg, format);
while (format[++i] != '\0')
{
f = format[i];
if ((f == 'c' || f == 'i' || f == 'f' || f == 's') && k++)
s = ", ";
switch (format[i])
{
case 'c':
printf("%s%c", s, (char)va_arg(arg, int));
s = "";
break;
case 'i':
printf("%s%i", s, va_arg(arg, int));
s = "";
break;
case 'f':
printf("%s%f", s, (float)va_arg(arg, double));
s = "";
break;
case 's':
v = va_arg(arg, char *);
if (v == NULL)
{
printf("%s(nil)", s);
s = "";
break;
}
printf("%s%s", s, v);
s = "";
break;
}
}
}
printf("\n");
}
