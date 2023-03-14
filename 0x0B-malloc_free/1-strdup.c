#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - allocate space in memory
 * @str: a pointer to a string
 * Return: a pointer to a char
 */
char *_strdup(char *str)
{
char *my_str;
size_t i = 0;

if (str == NULL)
return (NULL);

my_str = malloc(sizeof(char) * strlen(str));
if (my_str == NULL)
return (NULL);

for (i = 0; i < strlen(str); i++)
{
my_str[i] = str[i];
}
return (my_str);
}
