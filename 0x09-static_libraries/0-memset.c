#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * Return: pointer to a char
 * @s: pointer to a char
 * @b: a char
 * @n: an unsigned integer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
