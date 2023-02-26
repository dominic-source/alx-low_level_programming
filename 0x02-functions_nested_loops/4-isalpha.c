#include "main.h"

/**
 * _isalpha - checks letter
 * Description: _islower checks if a letter is lower case
 * @c: any character it a case letter
 * Return: 0
 */
int _isalpha(int c)
{
int i = 0;

while (i < 26)
{
if (c == 'a' + i || c == 'A' + i)
return (1);
else
i++;
}
return (0);
}
