#include "main.h"

/**
 * leet -  encode a string to leet
 * Return: pointer to a char
 * @str: a pointer to a char
 */
char *leet(char *str)
{
int i = 0;
int j;
char lt[5] = {'4', '3', '0', '7', '1'};
char tl1[5] = {'a', 'e', 'o', 't', 'l'};
char tl2[5] = {'A', 'E', 'O', 'T', 'L'};

while (*(str + i) != '\0')
{
j = 0;
while (j < 5)
{
if (*(str + i) == *(tl1 + j) || *(str + i) == *(tl2 + j))
{
*(str + i) = lt[j];
}
j++;
}
i++;
}
return (str);
}
