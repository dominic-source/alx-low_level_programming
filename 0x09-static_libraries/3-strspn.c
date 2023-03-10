#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * Return: length of prefix substring
 * @s: a string to find in
 * @accept: a pointer to a char
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int j;
int val;
unsigned int i = 0;
while (s[i] != '\0')
{
j = 0;
val = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
val = 1;
break;
}
else
j++;
}
if (!val)
return (i++);
i++;
}
return (i);
}
