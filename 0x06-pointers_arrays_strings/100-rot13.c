#include "main.h"

/**
 * rot13 - encodes a string to rot13
 * Return: a pointer to a char
 * @str: a string with a pointer
 */
char *rot13(char *str)
{
int i;
int j;

char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
i = 0;
while (*(str + i) != '\0')
{
j = 0;
while (j < 52)
{
if (*(str + i) == *(alpha + j))
{
*(str + i) = *(rot_alpha + j);
break;
}
j++;
}
i++;
}
return (str);
}
