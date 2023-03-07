#include "main.h"

/**
 * _strstr - a function that locates a string
 * Return: a pointer to a char
 * @haystack: a pointer to char argument
 * @needle: a pointer to a char
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j;
while (i > -1)
{
j = 0;
while (j > -1)
{
if (needle[i] == haystack[j])
return (haystack + j);
else if (haystack[j] == '\0')
{
break;
}
j++;
}
if (needle[i] == '\0')
return (NULL);
i++;
}
return (NULL);
}
