#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenate strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 * Return: a pointer to a char
 */
char *str_concat(char *s1, char *s2)
{
char *my_concat;
size_t i, j = 0;

my_concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

if (s1 == NULL)
s1 = '\0';
if (s2 == NULL)
s2 = '\0';
if (my_concat == NULL)
return (NULL);
for (i = 0; i < strlen(s1); i++)
{
my_concat[i] = s1[i];
}
while (j < strlen(s2))
{
my_concat[i + j] = s2[j];
j++;
}
my_concat[i + j] = '\0';
return (my_concat);
}
