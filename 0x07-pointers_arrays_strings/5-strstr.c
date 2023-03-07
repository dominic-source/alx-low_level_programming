#include "main.h"

/**
 * _strstr - a function that locates a string
 * Return: a pointer to a char
 * @haystack: a pointer to char argument
 * @needle: a pointer to a char
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] != haystack[i + j])
{
break;
}
}
if (!needle[j])
return (&haystack[i]);
}
return (NULL);
}
