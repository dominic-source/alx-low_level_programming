#include "main.h"

/**
 * _strchr - locates character in a string
 * Return: a pointer to a char
 * @s: pointer to a char
 * @c: the character to locate
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;
while (s[i] != c)
{
if (s[i] == '\0')
  return (NULL);
i++;
}
return (&s[i]);
}
