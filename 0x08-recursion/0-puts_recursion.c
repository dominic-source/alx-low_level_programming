#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * Return: Nothing
 * @s: A pointer to a char
 */
void _puts_recursion(char *s)
{
/* base case */
if (s[0] != '\0')
{
_putchar(s[0]);
}
else
{
_putchar('\n');
return;
}
_puts_recursion(&s[1]);
return;
}
