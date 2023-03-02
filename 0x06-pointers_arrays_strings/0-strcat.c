#include "main.h"

/**
 * _strcat - concatenate strings
 *Return: pointer to a char
 *@dest: destination of the string
 *@src: src of string
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int len_dest = 0;
int len_src = 0;
int j, k;

while (i > -1)
{
if (*(src + i) != '\0' || *(src + i) != '\0')
{
if (*(src + i) != '\0')
len_src++;
else
return (dest);
if (*(dest + i) != '\0')
len_dest++;
i++;
}
else
{
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
}
return (dest);
}
