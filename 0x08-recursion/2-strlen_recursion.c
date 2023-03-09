#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string
 * Return: an integer is returned
 * @s: a pointer to the char string
 */
int _strlen_recursion(char *s)
{

/* base case */
if (s[0] == '\0')
{
return (0);
}
return (_strlen_recursion(&s[1]) + 1);
}
