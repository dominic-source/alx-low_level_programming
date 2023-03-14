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
size_t i = 0, j = 0, len_1, len_2;

if (s1 == NULL)
len_1 = 0;
else
len_1 = strlen(s1);
if (s2 == NULL)
len_2 = 0;
else
len_2 = strlen(s2);

my_concat = malloc(sizeof(char) * (len_1 + len_2 + 1));

if (my_concat == NULL)
return (NULL);
for (i = 0; i < len_1; i++)
{
my_concat[i] = s1[i];
}
while (j < len_2)
{
my_concat[i + j] = s2[j];
j++;
}
my_concat[i + j] = '\0';
return (my_concat);
}
