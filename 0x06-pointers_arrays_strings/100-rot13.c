#include "main.h"

/**
 * rot13 - encodes a string to rot13
 * Return: a pointer to a char
 * @s: a string with a pointer
 */
char *rot13(char *s)
{
int i;

i = 0;
while (*(s + i) != '\n')
{
if ((*(s + i) > 64 && *(s + i) < 78) || (*(s + i) > 96 && *(s + i) < 110))
{
*(s + i) = *(s + i)+13;
}
else if ((*(s + i) > 77 && *(s + i) < 91) ||
	 (*(s + i) > 109 && *(s + i) < 123))
{
*(s + i) = *(s + i)-13;
}
i++;
}

return (s);
}
