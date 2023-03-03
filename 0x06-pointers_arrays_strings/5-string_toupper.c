#include "main.h"

/**
 * string_toupper - convert letter to uppercase
 * Return: a pointer to char
 * @: char argument
 */
char *string_toupper(char *str)
{
int i = 0;
int j = 0;
while (*(str + i) != '\0')
{
j = 0;
while (j < 26)
{
if (*(str + i) == ('a' + j))
{
*(str + i) = *(str + i) - 32;
}
else
j++;
}
i++;
}
return (str);
}
