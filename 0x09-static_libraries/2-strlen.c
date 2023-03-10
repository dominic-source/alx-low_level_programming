#include "main.h"

/**
 * _strlen - print the line of a string
 * Return: length of string
 * @s: the string argument
 */
int _strlen(char *s)
{
int i = 0;
int length = 0;
char *str = s;

while (i > -1)
{
if (*(str + i) != '\0')
{
length++;
i++;
}
else
return (length);
}
return (0);
}
