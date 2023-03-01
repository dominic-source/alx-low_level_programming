#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: char argument
 * Return: Nothing
 */
void print_rev(char *s)
{
int i = 0;
int length = 0;
int j = 0;
while (i > -1)
{
if (*(s + i) != '\0')
{
length++;
i++;
}
else
{
while (j <= length)
{
_putchar(*(s + (length - 1 - j)));
j++;
}
_putchar('\n');
return;
}
}
}
