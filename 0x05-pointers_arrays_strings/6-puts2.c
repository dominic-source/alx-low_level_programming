#include "main.h"

/**
 * puts2 - print every other character
 * Return: Nothing
 * @str: pointer to a character
 */
void puts2(char *str)
{
int i = 0;

while (i > -1)
{
if (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
i++;
}
else
{
_putchar('\n');
return;
}
}
}
