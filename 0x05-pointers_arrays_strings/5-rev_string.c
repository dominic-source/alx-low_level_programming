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
char n;
char m;
while (i >= 0)
{
if (*(s + i) != '\0')
{
length++;
i++;
}
else
{
while (j <= (length / 2) - 1)
{
n = *(s + length - 1 - j);
m = *(s + j);
*(s + length - 1 - j) = m;
*(s + j) = n;
j++;
}
return;
}
}
}
