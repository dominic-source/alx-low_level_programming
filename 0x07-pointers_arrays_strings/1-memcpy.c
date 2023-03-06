#include "main.h"

/**
 * _memcpy - copies n bytes from src address to dest address
 * Return: a pointer to a char
 * @dest: a pointer to a char destination address
 * @src: a pointer to a char src
 * @n: number of bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
if (src[i] != '\0')
{
*(dest + i) = *(src + i);
i++;
}
else
break;
}
return (dest);
}
