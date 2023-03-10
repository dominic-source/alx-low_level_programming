#include "main.h"

/**
 * _islower - finds lower case letter
 * Description: _islower checks if a letter is lower case
 * @c: any character it a case letter.
 * Return: 0
 */
int _islower(int c)
{
int i = 0;

while (i < 26)
{
if (c == 'a' + i)
return (1);
else
i++;
}
return (0);
}
