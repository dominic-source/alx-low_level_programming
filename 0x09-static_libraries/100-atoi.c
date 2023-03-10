#include "main.h"

/**
 * _atoi - converts a string to integer
 * Return: non zero integer or zero
 * @s: a pointer to char
 */
int _atoi(char *s)
{
int i = 0;
int m = 1;
unsigned int k = 0;
while (s[i] != '\0')
{
if (*(s + i) >= '0' && *(s + i) <= '9')
{
k = (*(s + i) - 48) + k * 10;
if (*(s + i + 1) == ' ')
break;
}
else if (*(s + i) == '-')
m *= -1;

i++;
}
return (k *m);
}
