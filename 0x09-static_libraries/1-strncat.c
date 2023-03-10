#include "main.h"

/**
 * _strncat - concatenates two string
 * Return: pointer to a char
 * @dest: destination of argument
 * @src: source of argument
 * @n: n is integer
 */
char *_strncat(char *dest, char *src, int n)
{
int len_dest = 0;
int j, k, m;

m = 0;
while (*(dest + m) != '\0')
{
len_dest++;
m++;
}
j = len_dest;
k = 0;

while (j < (len_dest + n))
{
if (*(src + k) != '\0')
{
*(dest + j) = *(src + k);
j++;
k++;
}
else
return (dest);
}
return (dest);
}
