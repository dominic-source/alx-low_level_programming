#include "main.h"

/**
 * rev_string - reverses a string
 * Return: Nothing
 * @s: s is a pointer to char
 */
void rev_string(char *s)
{
int i = 0;
int length = 0;
int j = 0;
char n[10];

while (i >= 0)
{
if (*(s + i) != '\0')
{
length++;
i++;
}
else
{
while (j <= length - 1)
{
*(n + j) = *(s + length - 1 - j);
j++;
}
j = 0;
while (j <= length - 1)
{
*(s + j) = *(n + j);
j++;
}
return;
}
}
}
