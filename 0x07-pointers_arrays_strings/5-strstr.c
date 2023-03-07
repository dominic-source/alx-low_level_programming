#include "main.h"

/**
 * _strstr - a function that locates a string
 * Return: a pointer to a char
 * @haystack: a pointer to char argument
 * @needle: a pointer to a char
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j;
while (needle[i] != '\0')
{
j = 0;
while (haystack[j] != '\0')
{
if (needle[i] == haystack[j])
return (&needle[i]);
else
j++;
}
i++;
}
return (NULL);
}
