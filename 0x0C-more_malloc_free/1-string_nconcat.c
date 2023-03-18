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
unsigned int i, j = 0;

if (n >= strlen(s2))
n = strlen(s2);

str = malloc(sizeof(char) * (strlen(s1) + n));

if (str == NULL || n >= INT_MAX)
return (NULL);

for (i = 0; i < strlen(s1); i++)
if (s1[i] != '\0')
str[i] = s1[i];

for (j = 0; j < n; j++)
if (s2[j] != '\0')
str[i++] = s2[j];

return (str);
}
