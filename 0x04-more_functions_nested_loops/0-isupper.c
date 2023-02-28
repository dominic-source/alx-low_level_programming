#include "main.h"

/**
 * _isupper - checks for upper case character
 * Description: a function that returns 1 if upper case and 0 otherwise
 * @c: c is an integer argument
 * Return: either 1 or 0
 */
int _isupper(int c)
{
int i = 0;
while (i < 26)
{
if (c == 'A' + i)
return (1);
i++;
}
return (0);
}
