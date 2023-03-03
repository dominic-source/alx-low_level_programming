#include "main.h"

/**
 * _strncpy - copies string
 * Return: pointer to a char
 * @dest: destination of the copy
 * @src: source to copy from
 * @n: integer which is the length of copy
 */
char *_strncpy(char *dest, char *src, int n)
{

int i = 0;

while (i < n && *(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
