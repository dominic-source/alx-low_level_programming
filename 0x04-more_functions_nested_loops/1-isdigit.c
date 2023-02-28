#include "main.h"

/**
 * _isdigit - checks for a digit from 0 - 9
 * Description: A function that checks for a digit
 * Return: 1 or 0
 * @c: an integer
 */
int _isdigit(int c)
{
int i = 0;
while (i < 10)
{
if (c == (i + '0'))
{
return (1);
}
i++;
}
return (0);
}
