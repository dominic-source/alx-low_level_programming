#include "main.h"

/**
 * _puts - print  a string
 * Return: Nothing
 * @str: argument is a char
 */
void _puts(char *str)
{
int i = 0;

while (i > -1)
{
if (*(str + i) != '\0')
{
_putchar(*(str + i));
}
else
{
_putchar('\n');
return;
}
i++;
}
}
