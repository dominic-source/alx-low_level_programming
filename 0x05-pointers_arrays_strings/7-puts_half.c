#include "main.h"

/**
 * puts_half - print half of a string
 * Return: Nothing
 * @str: str is the pointer argument
 */
void puts_half(char *str)
{
int i = 0;
int length = 0;
int j;

while (i > -1)
{
if (str[i] != '\0')
{
length++;
i++;
}
else
{
if (length % 2 != 0)
{
++length;
}
j = (length / 2);
while (j < length)
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
return;
}
}
}
