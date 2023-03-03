#include "main.h"

/**
 * _strcmp - compares two string
 * Return: an integer is always returned
 * @s1: pointer to a char, argument 1
 * @s2: pointer to a char, argument 2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (i > -1)
{
if (*(s1 + i) < *(s2 + i) || *(s1 + i) > *(s2 + i))
{
return (*(s1 + i) - *(s2 + i));
}
else
return (*(s1 + i) - *(s2 + i));
}
return (1);
}
