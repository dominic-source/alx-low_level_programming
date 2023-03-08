#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * Return: Nothing
 * @s: a pointer to a char string
 */
void _print_rev_recursion(char *s)
{
/* base case */
if (s[0] != '\0')
{
_print_rev_recursion(&s[1]);
_putchar(s[0]);
}

return;
}
