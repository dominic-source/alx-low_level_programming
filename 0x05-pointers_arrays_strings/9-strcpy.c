#include "main.h"

/**
 * _strcpy - copy string from src to destination
 * Return: a pointer to a char
 * @dest: this is the destination of the char
 * @src: this is the source
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (i > -1)
{
if (src[i] != '\0')
{
*(dest + i) = *(src + i);
i++;
}
else
{
*(dest + i) = *(src + i);
return (dest);
}
}
return (dest);
}
