#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * Return: a pointer to a char
 * @s: a pointer to a char
 * @accept: a pointer to a char
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i = 0, j;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
return (&s[i]);
else
j++;
}
i++;
}
return (NULL);
}
