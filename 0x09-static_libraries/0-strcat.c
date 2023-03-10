#include "main.h"

/**
 * _strcat - concatenate strings
 *Return: pointer to a char
 *@dest: destination of the string
 *@src: src of string
 */
char *_strcat(char *dest, char *src)
{
int len_dest = 0;
int len_src = 0;
int j, k, m;

m = 0;
while (*(src + m) != '\0')
{
len_src++;
m++;
}
m = 0;
while (*(dest + m) != '\0')
{
len_dest++;
m++;
}
j = len_dest;
k = 0;
while (j < (len_dest + len_src))
{
*(dest + j) = *(src + k);
j++;
k++;
}
*(dest + (len_dest + len_src)) = '\0';
return (dest);
}
