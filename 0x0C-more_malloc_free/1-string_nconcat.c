#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to string s1
 * @s2: pointer to string s2
 * @n: an unsigined integer n
 * Return: a poiter to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i = 0, j = 0;
unsigned int size;


if (s2 == NULL)
n = 0;
else if (n >= strlen(s2))
n = strlen(s2);

size = strlen(s1) + n + 1;

str = malloc(sizeof(char) * size);
str = realloc(str, size);
if (str == NULL || n >= INT_MAX)
return (NULL);

for (i = 0; i < strlen(s1) && s1[i] != '\0'; i++)
str[i] = s1[i];

if (s2 != NULL)
{
for (j = 0; j < n && s2[j] != '\0'; j++)
{
str[i] = s2[j];
i++;
}
}
str[i] = '\0';
return (str);
}
