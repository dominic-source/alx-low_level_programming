#include "main.h"

/**
  * cap_string - convert letter to uppercase
  * Return: a pointer to char
  * @str: char argument
*/
char *cap_string(char *str)
{
int i = 0;
int j = 0;
int k = 0;
int value;
char arr[12] = {'.', ' ', '\n', '\t', ',', ';', '!', '"', '(', ')', '{', '}'};
while (*(str + i) != '\0')
{
for (k = 0; k < 12; k++)
{
if (arr[k] == *(str + i))
{
value = 1;
}
}
while (value)
{
j = 0;
while (j < 26)
{

if ((*(str + i + 1) == ('a' + j))&&(i != 0))
{
*(str + i + 1) = *(str + i + 1) - 32;
}
else if ((*(str + i) == ('a' + j))&&(i == 0))
{
*(str + i) = *(str + i) - 32;
}
else
j++;
}
value = 0;
}

i++;
}

return (str);
}
