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
unsigned int size, len_s1;

if (s2 == NULL || *s2 == '\0')
s2 = "";
if (n >= strlen(s2))
n = strlen(s2);

if (s1 == NULL || *s1 == '\0')
s1 = "";
len_s1 = strlen(s1);

size = len_s1 + n + 1;

str = malloc(sizeof(char) * size);

if (str == NULL || n >= INT_MAX)
return (NULL);

if (s1 != NULL)
for (i = 0; i < len_s1 && s1[i] != '\0'; i++)
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
